#include <boost/preprocessor.hpp>

#define EMPTY()
#define DEFER(id)   id EMPTY()
#define EXPAND(...) __VA_ARGS__

// -----

#define COLLECT_LESS_THAN_OR_EQ(pivot, numbers)                                \
    BOOST_PP_IF(                                                               \
        POICA_P_IS_EMPTY_SEQ(COLLECT_LESS_THAN_OR_EQ_AUX(pivot, numbers)),     \
        PIZDA,                                                                 \
        BOOST_PP_SEQ_TO_ARRAY(COLLECT_LESS_THAN_OR_EQ_AUX(pivot, numbers)))

#define COLLECT_LESS_THAN_OR_EQ_AUX(pivot, numbers)                            \
    BOOST_PP_SEQ_FOR_EACH(COLLECT_LESS_THAN_OR_EQ_VISIT_ONE,                   \
                          pivot,                                               \
                          BOOST_PP_ARRAY_TO_SEQ(numbers))

#define COLLECT_LESS_THAN_OR_EQ_VISIT_ONE(_r, pivot, number)                   \
    BOOST_PP_IF(BOOST_PP_LESS_EQUAL(number, pivot), (number), BOOST_PP_EMPTY())

// -----

#define COLLECT_GREATER_THAN(pivot, numbers)                                   \
    BOOST_PP_IF(                                                               \
        POICA_P_IS_EMPTY_SEQ(COLLECT_GREATER_THAN_AUX(pivot, numbers)),        \
        PIZDA,                                                                 \
        BOOST_PP_SEQ_TO_ARRAY(COLLECT_GREATER_THAN_AUX(pivot, numbers)))

#define COLLECT_GREATER_THAN_AUX(pivot, numbers)                               \
    BOOST_PP_SEQ_FOR_EACH(                                                     \
        COLLECT_GREATER_THAN_VISIT_ONE, pivot, BOOST_PP_ARRAY_TO_SEQ(numbers))

#define COLLECT_GREATER_THAN_VISIT_ONE(_r, pivot, number)                      \
    BOOST_PP_IF(BOOST_PP_GREATER(number, pivot), (number), BOOST_PP_EMPTY())

// -----

#define POICA_P_IS_EMPTY_SEQ(seq)                                              \
    /* Boost/PP sequcnes cannot be empty, so we prepend (_) in the case that   \
     * `seq` is empty. */                                                      \
    BOOST_PP_EQUAL(BOOST_PP_SEQ_SIZE((_)seq), 1)

// -----

#define QSORT(...)                                                             \
    BOOST_PP_SEQ_ENUM(QSORT_0(BOOST_PP_VARIADIC_TO_ARRAY(__VA_ARGS__)))

#define QSORT_0(numbers)                                                       \
    BOOST_PP_IF(                                                               \
        BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 1),                       \
        (PIVOT(numbers)),                                                      \
        BOOST_PP_IF(BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 0),           \
                    BOOST_PP_EMPTY(),                                          \
                    _1PONOS(COLLECT_LESS_THAN_OR_EQ(                           \
                        PIVOT(numbers),                                        \
                        BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(               \
                            BOOST_PP_ARRAY_TO_SEQ(numbers)))))                 \
                                                                               \
                        (PIVOT(numbers))                                       \
                                                                               \
                            _1PONOS(COLLECT_GREATER_THAN(                      \
                                PIVOT(numbers),                                \
                                BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(       \
                                    BOOST_PP_ARRAY_TO_SEQ(numbers)))))))

#define _1PONOS(numbers)     _1EBALAI1(_1PERDAK numbers, BOOST_PP_EMPTY(), )
#define _1PERDAK(x, y)       ~, QSORT_1((x, y))
#define _1EBALAI1(...)       _1EBALAI2(__VA_ARGS__)
#define _1EBALAI2(x, y, ...) y

#define QSORT_1(numbers)                                                       \
    BOOST_PP_IF(                                                               \
        BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 1),                       \
        (PIVOT(numbers)),                                                      \
        BOOST_PP_IF(BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 0),           \
                    BOOST_PP_EMPTY(),                                          \
                    _2PONOS(COLLECT_LESS_THAN_OR_EQ(                           \
                        PIVOT(numbers),                                        \
                        BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(               \
                            BOOST_PP_ARRAY_TO_SEQ(numbers)))))                 \
                                                                               \
                        (PIVOT(numbers))                                       \
                                                                               \
                            _2PONOS(COLLECT_GREATER_THAN(                      \
                                PIVOT(numbers),                                \
                                BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(       \
                                    BOOST_PP_ARRAY_TO_SEQ(numbers)))))))

#define _2PONOS(numbers)     _2EBALAI1(_2PERDAK numbers, BOOST_PP_EMPTY(), )
#define _2PERDAK(x, y)       ~, QSORT_2((x, y))
#define _2EBALAI1(...)       _2EBALAI2(__VA_ARGS__)
#define _2EBALAI2(x, y, ...) y

#define QSORT_2(numbers)                                                       \
    BOOST_PP_IF(                                                               \
        BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 1),                       \
        (PIVOT(numbers)),                                                      \
        BOOST_PP_IF(BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 0),           \
                    BOOST_PP_EMPTY(),                                          \
                    _3PONOS(COLLECT_LESS_THAN_OR_EQ(                           \
                        PIVOT(numbers),                                        \
                        BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(               \
                            BOOST_PP_ARRAY_TO_SEQ(numbers)))))                 \
                                                                               \
                        (PIVOT(numbers))                                       \
                                                                               \
                            _3PONOS(COLLECT_GREATER_THAN(                      \
                                PIVOT(numbers),                                \
                                BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(       \
                                    BOOST_PP_ARRAY_TO_SEQ(numbers)))))))

#define _3PONOS(numbers)     _3EBALAI1(_3PERDAK numbers, BOOST_PP_EMPTY(), )
#define _3PERDAK(x, y)       ~, QSORT_3((x, y))
#define _3EBALAI1(...)       _3EBALAI2(__VA_ARGS__)
#define _3EBALAI2(x, y, ...) y

#define QSORT_3(numbers)                                                       \
    BOOST_PP_IF(                                                               \
        BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 1),                       \
        (PIVOT(numbers)),                                                      \
        BOOST_PP_IF(BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 0),           \
                    BOOST_PP_EMPTY(),                                          \
                    _4PONOS(COLLECT_LESS_THAN_OR_EQ(                           \
                        PIVOT(numbers),                                        \
                        BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(               \
                            BOOST_PP_ARRAY_TO_SEQ(numbers)))))                 \
                                                                               \
                        (PIVOT(numbers))                                       \
                                                                               \
                            _4PONOS(COLLECT_GREATER_THAN(                      \
                                PIVOT(numbers),                                \
                                BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(       \
                                    BOOST_PP_ARRAY_TO_SEQ(numbers)))))))

#define _4PONOS(numbers)     _4EBALAI1(_4PERDAK numbers, BOOST_PP_EMPTY(), )
#define _4PERDAK(x, y)       ~, QSORT_4((x, y))
#define _4EBALAI1(...)       _4EBALAI2(__VA_ARGS__)
#define _4EBALAI2(x, y, ...) y

#define QSORT_4(numbers)                                                       \
    BOOST_PP_IF(                                                               \
        BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 1),                       \
        (PIVOT(numbers)),                                                      \
        BOOST_PP_IF(BOOST_PP_EQUAL(BOOST_PP_ARRAY_SIZE(numbers), 0),           \
                    BOOST_PP_EMPTY(),                                          \
                    _5PONOS(COLLECT_LESS_THAN_OR_EQ(                           \
                        PIVOT(numbers),                                        \
                        BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(               \
                            BOOST_PP_ARRAY_TO_SEQ(numbers)))))                 \
                                                                               \
                        (PIVOT(numbers))                                       \
                                                                               \
                            _5PONOS(COLLECT_GREATER_THAN(                      \
                                PIVOT(numbers),                                \
                                BOOST_PP_SEQ_TO_ARRAY(BOOST_PP_SEQ_TAIL(       \
                                    BOOST_PP_ARRAY_TO_SEQ(numbers)))))))

#define _5PONOS(numbers)     _5EBALAI1(_5PERDAK numbers, BOOST_PP_EMPTY(), )
#define _5PERDAK(x, y)       ~, QSORT_6_UNIMPLEMENTED((x, y))
#define _5EBALAI1(...)       _5EBALAI2(__VA_ARGS__)
#define _5EBALAI2(x, y, ...) y

#define PIVOT(numbers) BOOST_PP_ARRAY_ELEM(0, numbers)

// 2, 4, 45, 55
QSORT(55, 2, 45, 4)
