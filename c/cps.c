#include <stdio.h>
#include <math.h>

#define let __auto_type

#define $(return_type, params, body) \
    ({return_type fn params { return body; } fn;})

int main(void) {
    let my_sqrt = $(double, (double x, double (*k)(double y)), k(sqrt(x)));
    let my_pow = $(double, (double x, double (*k)(double y)), k(x * x));
    let add = $(double, (double x, double y, double (*k)(double z)), k(x + y));

    let hypotenuse = $(double, (double a, double b, double (*k)(double n)),
        my_pow(a,
            $(double, (double a2),
                my_pow(b,
                    $(double, (double b2),
                        add(a2, b2,
                            $(double, (double a2b2), my_sqrt(a2b2, k))
                        )
                    )
                )
            )
        )
    );

    /*
     * Output:
     * 5.000000
     */
    printf("%f\n", hypotenuse(3, 4, $(double, (double x), x)));
}
