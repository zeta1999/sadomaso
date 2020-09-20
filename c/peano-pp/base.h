#ifndef PEANO_PP_BASE_H
#define PEANO_PP_BASE_H

#define Z    (ZERO, _)
#define S(x) (SUCC, x)

#define PEANO_DEC(x) PEANO_EVAL(PEANO_SND x)

#define EQUAL <equal/mod.h>

#define _0 Z
#define _1 S(Z)
#define _2 S(_1)
#define _3 S(_2)
#define _4 S(_3)
#define _5 S(_4)
#define _6 S(_5)
#define _7 S(_6)
#define _8 S(_7)
#define _9 S(_8)

#define _10 S(_9)
#define _11 S(_10)
#define _12 S(_11)
#define _13 S(_12)
#define _14 S(_13)
#define _15 S(_14)
#define _16 S(_15)
#define _17 S(_16)
#define _18 S(_17)
#define _19 S(_18)

#define _20 S(_19)
#define _21 S(_20)
#define _22 S(_21)
#define _23 S(_22)
#define _24 S(_23)
#define _25 S(_24)
#define _26 S(_25)
#define _27 S(_26)
#define _28 S(_27)
#define _29 S(_28)

#endif // PEANO_PP_BASE_H
