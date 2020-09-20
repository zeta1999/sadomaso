use std::marker::PhantomData;

use frunk::coproduct::{Coproduct, CNil};

// Peano's arithmetic
struct Z;
struct S<T>(PhantomData<T>);

trait Enumerate {
    type Sum;
}

impl Enumerate for Z {
    type Sum = CNil;
}

impl<T> Enumerate for S<T> where T: Enumerate {
    type Sum = Coproduct<S<T>, <T as Enumerate>::Sum>;
}

fn main() {
    type Five = S<S<S<S<S<Z>>>>>;
    type EnumerateFive = <Five as Enumerate>::Sum;

    // frunk::Coproduct<S<S<S<S<S<Z>>>>>, frunk::Coproduct<S<S<S<S<Z>>>>, frunk::Coproduct<S<S<S<Z>>>, frunk::Coproduct<S<S<Z>>, frunk::Coproduct<S<Z>, frunk::coproduct::CNil>>>>>
    let test: EnumerateFive;
    let () = test;
}

