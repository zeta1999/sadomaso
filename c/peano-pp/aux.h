#ifndef PEANO_PP_AUX_H
#define PEANO_PP_AUX_H

#define PEANO_EVAL(...) __VA_ARGS__

#define PEANO_CAT(x, y)           PEANO_PRIMITIVE_CAT(x, y)
#define PEANO_PRIMITIVE_CAT(x, y) x##y

#define PEANO_STRINGIFY(x)           PEANO_PRIMITIVE_STRINGIFY(x)
#define PEANO_PRIMITIVE_STRINGIFY(x) #x

#define PEANO_FST(x, _y) x
#define PEANO_SND(_x, y) y

#endif // PEANO_PP_AUX_H
