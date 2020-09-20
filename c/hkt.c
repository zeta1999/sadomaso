
/*
 * gcc hkt.c -lm
 * ./a.out
 * 8.000000
 */

#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

#include <boost/preprocessor.hpp>

#define type(...) BOOST_PP_SEQ_CAT(BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))

#define fn(fn_name, type_vars_tuple)                      \
    BOOST_PP_CAT(fn_name,                        \
                 BOOST_PP_SEQ_CAT(BOOST_PP_TUPLE_TO_SEQ(type_vars_tuple)))

#define FORCE_SEMICOLON static int x

#define FunctorMap(f, a, b)                                                    \
    type(f, b)                                                                 \
        fn(functor_map, (f, a, b))(b(*func)(a), type(f, a) self)

#define SemigroupOp(a) a fn(semigroup_op, (a))(a left, a right)

#define MonoidId(a) a fn(monoid_id, (a))(void)

#define compose(a, b, c)                                                       \
    c fn(compose, (a, b, c))(b(*g)(a), c(*h)(b), a val) { return h(g(val)); }  \
    FORCE_SEMICOLON

compose(int, int, int);

// The Maybe functor.

#define Maybe(a)                                                               \
    typedef struct type(Maybe, a) {                                            \
        bool exists;                                                           \
        a data;                                                                \
    }                                                                          \
    type(Maybe, a)

#define ImplFunctorMapForMaybe(a, b)                                           \
    FunctorMap(Maybe, a, b) {                                                  \
        type(Maybe, double) res;                                               \
                                                                               \
        if (self.exists) {                                                     \
            res.exists = true;                                                 \
            res.data = func(self.data);                                        \
            return res;                                                        \
        }                                                                      \
                                                                               \
        res.exists = false;                                                    \
        return res;                                                            \
    }                                                                          \
                                                                               \
    FORCE_SEMICOLON

Maybe(int);
Maybe(double);
ImplFunctorMapForMaybe(int, double);

double root(int x) { return sqrt((double)x); }

int main(void) {
    type(Maybe, int) maybe1 = {.exists = true, .data = 64};
    type(Maybe, double) maybe2 =
        fn(functor_map, (Maybe, int, double))(root, maybe1);
    printf("%f\n", maybe2.data);
}
