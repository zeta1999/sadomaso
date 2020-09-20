#[macro_use]
extern crate frunk;

use frunk::{
    labelled::{Field, LabelledGeneric},
    HCons, HNil,
};

#[derive(LabelledGeneric)]
struct Foo {
    hello: Option<i32>,
    something: f32,
}
struct Wrap<T>(T);

struct NotFound;

trait GetFieldType {
    type Result;
}

impl GetFieldType for &Wrap<HNil> {
    type Result = NotFound;
}

impl<FieldType, Rest> GetFieldType
    for &&Wrap<
        HCons<
            Field<
                (
                    frunk::labelled::chars::h,
                    frunk::labelled::chars::e,
                    frunk::labelled::chars::l,
                    frunk::labelled::chars::l,
                    frunk::labelled::chars::o,
                ),
                FieldType,
            >,
            Rest,
        >,
    >
{
    type Result = FieldType;
}

impl<A, B> GetFieldType for HCons<A, B>
where
    B: GetFieldType,
{
    type Result = B::Result;
}

fn main() {
    let found: <&&Wrap<<Foo as LabelledGeneric>::Repr> as GetFieldType>::Result = Some(123);
}
