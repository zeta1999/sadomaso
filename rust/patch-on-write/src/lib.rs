use frunk::{HCons, HNil};
use frunk_core::hlist::Selector;
use std::marker::PhantomData;

pub struct Pow<'a, THead, TTail, Patches> {
    data: &'a HCons<THead, TTail>,
    patches: Patches,
}

impl<'a, THead, TTail> Pow<'a, THead, TTail, HNil> {
    pub fn new(data: &'a HCons<THead, TTail>) -> Self {
        Self { data, patches: HNil }
    }
}

impl<'a, THead, TTail, PatchesHead, PatchesTail>
    Pow<'a, THead, TTail, HCons<PatchesHead, PatchesTail>>
{
    pub fn accessor<TIndex, PatchesIndex>(
        &'a self,
    ) -> Accessor<'a, THead, TTail, PatchesHead, PatchesTail, TIndex, PatchesIndex> {
        Accessor { data: &self.data, patches: &self.patches, phantom: PhantomData }
    }

    // This should be defined by a separate trait, because now this function
    // _always_ adds a head, even if 'T' is already presented. This approach
    // requires specialisation on an owned 'self' -- I don't know how to achieve it
    // without built-in specialisation.
    pub fn patch<T, TIndex>(
        self,
        val: T,
    ) -> Pow<'a, THead, TTail, HCons<T, HCons<PatchesHead, PatchesTail>>>
    where
        HCons<THead, TTail>: Selector<T, TIndex>,
    {
        Pow { data: self.data, patches: HCons { head: val, tail: self.patches } }
    }
}

impl<'a, THead, TTail> Pow<'a, THead, TTail, HNil> {
    pub fn patch<T, TIndex>(self, val: T) -> Pow<'a, THead, TTail, HCons<T, HNil>>
    where
        HCons<THead, TTail>: Selector<T, TIndex>,
    {
        Pow { data: self.data, patches: HCons { head: val, tail: self.patches } }
    }
}

// Used for generalised autoref-based specialisation.
// See https://lukaskalbertodt.github.io/2019/12/05/generalized-autoref-based-specialization.html.
pub struct Wrap<T>(pub T);

pub struct Accessor<'a, THead, TTail, PatchesHead, PatchesTail, TIndex, PatchesIndex> {
    data: &'a HCons<THead, TTail>,
    patches: &'a HCons<PatchesHead, PatchesTail>,
    phantom: PhantomData<(TIndex, PatchesIndex)>,
}

pub trait Accessible<'a, T, PatchesHead, PatchesTail> {
    fn access(&'a self) -> &'a T;
}

impl<'a, T, TIndex, PatchesIndex, THead, TTail, PatchesHead, PatchesTail>
    Accessible<'a, T, PatchesHead, PatchesTail>
    for &Wrap<Accessor<'a, THead, TTail, PatchesHead, PatchesTail, TIndex, PatchesIndex>>
where
    HCons<THead, TTail>: Selector<T, TIndex>,
    HCons<PatchesHead, PatchesTail>: Selector<T, PatchesIndex>,
{
    fn access(&'a self) -> &'a T {
        self.0.patches.get()
    }
}

pub struct NoPatchesIndex;

impl<'a, T, TIndex, THead, TTail, PatchesHead, PatchesTail>
    Accessible<'a, T, PatchesHead, PatchesTail>
    for Wrap<Accessor<'a, THead, TTail, PatchesHead, PatchesTail, TIndex, NoPatchesIndex>>
where
    HCons<THead, TTail>: Selector<T, TIndex>,
{
    fn access(&'a self) -> &'a T {
        self.0.data.get()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    use frunk::Generic;
    use frunk_core::{
        generic::into_generic,
        indices::{Here, There},
    };

    #[test]
    fn it_works() {
        #[derive(Generic, Clone)]
        struct MyType {
            a: i32,
            b: &'static str,
            c: f64,
        }

        let src = MyType { a: 6, b: "abc", c: 25.56342 };

        let src_h = into_generic(src.clone());
        let pow = Pow::new(&src_h);
        let patched = pow.patch(123).patch("hello");

        assert_eq!(&123, (&&Wrap(patched.accessor())).access());
        assert_eq!(&"hello", (&&Wrap(patched.accessor::<There<Here>, _>())).access());
        // &&Wrap(...) (generalised autoref-based specialisation) doesn't work here and
        // I don't know why.
        assert_eq!(&src.c, (&Wrap(patched.accessor())).access());
    }
}
