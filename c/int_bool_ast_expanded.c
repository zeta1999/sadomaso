
#include <stdio.h>

typedef struct POICA_P_Addint_RedirectToInnerType {
    const struct Exprintint *left;
    const struct Exprintint *right;
} POICA_P_Addint_RedirectToInnerType;
typedef const struct Exprintint
    *POICA_P_Addint_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Exprintint
    *POICA_P_Addint_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Subint_RedirectToInnerType {
    const struct Exprintint *left;
    const struct Exprintint *right;
} POICA_P_Subint_RedirectToInnerType;
typedef const struct Exprintint
    *POICA_P_Subint_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Exprintint
    *POICA_P_Subint_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Mulint_RedirectToInnerType {
    const struct Exprintint *left;
    const struct Exprintint *right;
} POICA_P_Mulint_RedirectToInnerType;
typedef const struct Exprintint
    *POICA_P_Mulint_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Exprintint
    *POICA_P_Mulint_RedirectToInnerType_right_RedirectToFieldType;
typedef struct Exprintint {
    enum {
        POICA_P_IConstint_Tag,
        POICA_P_Addint_Tag,
        POICA_P_Subint_Tag,
        POICA_P_Mulint_Tag,
    } tag;
    struct {
        int IConstint;
        POICA_P_Addint_RedirectToInnerType Addint;
        POICA_P_Subint_RedirectToInnerType Subint;
        POICA_P_Mulint_RedirectToInnerType Mulint;
    } data;
} Exprintint;
typedef int POICA_P_IConstint_RedirectToInnerType;
typedef Exprintint POICA_P_IConstint_RedirectToOuterSumType;
typedef Exprintint POICA_P_Addint_RedirectToOuterSumType;
typedef Exprintint POICA_P_Subint_RedirectToOuterSumType;
typedef Exprintint POICA_P_Mulint_RedirectToOuterSumType;
inline static Exprintint IConstint(int arg) {
    return (Exprintint){
        .tag = POICA_P_IConstint_Tag,
        .data.IConstint = arg,
    };
}
inline static Exprintint Addint(const struct Exprintint *left,
                                const struct Exprintint *right) {
    return (Exprintint){
        .tag = POICA_P_Addint_Tag,
        .data.Addint = {left, right},
    };
}
inline static Exprintint Subint(const struct Exprintint *left,
                                const struct Exprintint *right) {
    return (Exprintint){
        .tag = POICA_P_Subint_Tag,
        .data.Subint = {left, right},
    };
}
inline static Exprintint Mulint(const struct Exprintint *left,
                                const struct Exprintint *right) {
    return (Exprintint){
        .tag = POICA_P_Mulint_Tag,
        .data.Mulint = {left, right},
    };
}

typedef struct POICA_P_Add_Bool_RedirectToInnerType {
    const struct Exprint_Bool *left;
    const struct Exprint_Bool *right;
} POICA_P_Add_Bool_RedirectToInnerType;
typedef const struct Exprint_Bool
    *POICA_P_Add_Bool_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Exprint_Bool
    *POICA_P_Add_Bool_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Sub_Bool_RedirectToInnerType {
    const struct Exprintint *left;
    const struct Exprintint *right;
} POICA_P_Sub_Bool_RedirectToInnerType;
typedef const struct Exprintint
    *POICA_P_Sub_Bool_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Exprintint
    *POICA_P_Sub_Bool_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Mul_Bool_RedirectToInnerType {
    const struct Exprintint *left;
    const struct Exprintint *right;
} POICA_P_Mul_Bool_RedirectToInnerType;
typedef const struct Exprintint
    *POICA_P_Mul_Bool_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Exprintint
    *POICA_P_Mul_Bool_RedirectToInnerType_right_RedirectToFieldType;
typedef struct Exprint_Bool {
    enum {
        POICA_P_IConst_Bool_Tag,
        POICA_P_Add_Bool_Tag,
        POICA_P_Sub_Bool_Tag,
        POICA_P_Mul_Bool_Tag,
    } tag;
    struct {
        int IConst_Bool;
        POICA_P_Add_Bool_RedirectToInnerType Add_Bool;
        POICA_P_Sub_Bool_RedirectToInnerType Sub_Bool;
        POICA_P_Mul_Bool_RedirectToInnerType Mul_Bool;
    } data;
} Exprint_Bool;
typedef int POICA_P_IConst_Bool_RedirectToInnerType;
typedef Exprint_Bool POICA_P_IConst_Bool_RedirectToOuterSumType;
typedef Exprint_Bool POICA_P_Add_Bool_RedirectToOuterSumType;
typedef Exprint_Bool POICA_P_Sub_Bool_RedirectToOuterSumType;
typedef Exprint_Bool POICA_P_Mul_Bool_RedirectToOuterSumType;
inline static Exprint_Bool IConst_Bool(int arg) {
    return (Exprint_Bool){
        .tag = POICA_P_IConst_Bool_Tag,
        .data.IConst_Bool = arg,
    };
}
inline static Exprint_Bool Add_Bool(const struct Exprint_Bool *left,
                                    const struct Exprint_Bool *right) {
    return (Exprint_Bool){
        .tag = POICA_P_Add_Bool_Tag,
        .data.Add_Bool = {left, right},
    };
}
inline static Exprint_Bool Sub_Bool(const struct Exprintint *left,
                                    const struct Exprintint *right) {
    return (Exprint_Bool){
        .tag = POICA_P_Sub_Bool_Tag,
        .data.Sub_Bool = {left, right},
    };
}
inline static Exprint_Bool Mul_Bool(const struct Exprintint *left,
                                    const struct Exprintint *right) {
    return (Exprint_Bool){
        .tag = POICA_P_Mul_Bool_Tag,
        .data.Mul_Bool = {left, right},
    };
}

typedef struct POICA_P_Andint_RedirectToInnerType {
    const struct Expr_Boolint *left;
    const struct Expr_Boolint *right;
} POICA_P_Andint_RedirectToInnerType;
typedef const struct Expr_Boolint
    *POICA_P_Andint_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Expr_Boolint
    *POICA_P_Andint_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Orint_RedirectToInnerType {
    const struct Expr_Boolint *left;
    const struct Expr_Boolint *right;
} POICA_P_Orint_RedirectToInnerType;
typedef const struct Expr_Boolint
    *POICA_P_Orint_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Expr_Boolint
    *POICA_P_Orint_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Xorint_RedirectToInnerType {
    const struct Expr_Boolint *left;
    const struct Expr_Boolint *right;
} POICA_P_Xorint_RedirectToInnerType;
typedef const struct Expr_Boolint
    *POICA_P_Xorint_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Expr_Boolint
    *POICA_P_Xorint_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Eqint_RedirectToInnerType {
    const struct Exprintint *left;
    const struct Exprintint *right;
} POICA_P_Eqint_RedirectToInnerType;
typedef const struct Exprintint
    *POICA_P_Eqint_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Exprintint
    *POICA_P_Eqint_RedirectToInnerType_right_RedirectToFieldType;
typedef struct Expr_Boolint {
    enum {
        POICA_P_BConstint_Tag,
        POICA_P_Andint_Tag,
        POICA_P_Orint_Tag,
        POICA_P_Xorint_Tag,
        POICA_P_Eqint_Tag,
    } tag;
    struct {
        _Bool BConstint;
        POICA_P_Andint_RedirectToInnerType Andint;
        POICA_P_Orint_RedirectToInnerType Orint;
        POICA_P_Xorint_RedirectToInnerType Xorint;
        POICA_P_Eqint_RedirectToInnerType Eqint;
    } data;
} Expr_Boolint;
typedef _Bool POICA_P_BConstint_RedirectToInnerType;
typedef Expr_Boolint POICA_P_BConstint_RedirectToOuterSumType;
typedef Expr_Boolint POICA_P_Andint_RedirectToOuterSumType;
typedef Expr_Boolint POICA_P_Orint_RedirectToOuterSumType;
typedef Expr_Boolint POICA_P_Xorint_RedirectToOuterSumType;
typedef Expr_Boolint POICA_P_Eqint_RedirectToOuterSumType;
inline static Expr_Boolint BConstint(_Bool arg) {
    return (Expr_Boolint){
        .tag = POICA_P_BConstint_Tag,
        .data.BConstint = arg,
    };
}
inline static Expr_Boolint Andint(const struct Expr_Boolint *left,
                                  const struct Expr_Boolint *right) {
    return (Expr_Boolint){
        .tag = POICA_P_Andint_Tag,
        .data.Andint = {left, right},
    };
}
inline static Expr_Boolint Orint(const struct Expr_Boolint *left,
                                 const struct Expr_Boolint *right) {
    return (Expr_Boolint){
        .tag = POICA_P_Orint_Tag,
        .data.Orint = {left, right},
    };
}
inline static Expr_Boolint Xorint(const struct Expr_Boolint *left,
                                  const struct Expr_Boolint *right) {
    return (Expr_Boolint){
        .tag = POICA_P_Xorint_Tag,
        .data.Xorint = {left, right},
    };
}
inline static Expr_Boolint Eqint(const struct Exprintint *left,
                                 const struct Exprintint *right) {
    return (Expr_Boolint){
        .tag = POICA_P_Eqint_Tag,
        .data.Eqint = {left, right},
    };
}

typedef struct POICA_P_And_Bool_RedirectToInnerType {
    const struct Expr_Bool_Bool *left;
    const struct Expr_Bool_Bool *right;
} POICA_P_And_Bool_RedirectToInnerType;
typedef const struct Expr_Bool_Bool
    *POICA_P_And_Bool_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Expr_Bool_Bool
    *POICA_P_And_Bool_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Or_Bool_RedirectToInnerType {
    const struct Expr_Bool_Bool *left;
    const struct Expr_Bool_Bool *right;
} POICA_P_Or_Bool_RedirectToInnerType;
typedef const struct Expr_Bool_Bool
    *POICA_P_Or_Bool_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Expr_Bool_Bool
    *POICA_P_Or_Bool_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Xor_Bool_RedirectToInnerType {
    const struct Expr_Bool_Bool *left;
    const struct Expr_Bool_Bool *right;
} POICA_P_Xor_Bool_RedirectToInnerType;
typedef const struct Expr_Bool_Bool
    *POICA_P_Xor_Bool_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Expr_Bool_Bool
    *POICA_P_Xor_Bool_RedirectToInnerType_right_RedirectToFieldType;
typedef struct POICA_P_Eq_Bool_RedirectToInnerType {
    const struct Expr_Bool_Bool *left;
    const struct Expr_Bool_Bool *right;
} POICA_P_Eq_Bool_RedirectToInnerType;
typedef const struct Expr_Bool_Bool
    *POICA_P_Eq_Bool_RedirectToInnerType_left_RedirectToFieldType;
typedef const struct Expr_Bool_Bool
    *POICA_P_Eq_Bool_RedirectToInnerType_right_RedirectToFieldType;
typedef struct Expr_Bool_Bool {
    enum {
        POICA_P_BConst_Bool_Tag,
        POICA_P_And_Bool_Tag,
        POICA_P_Or_Bool_Tag,
        POICA_P_Xor_Bool_Tag,
        POICA_P_Eq_Bool_Tag,
    } tag;
    struct {
        _Bool BConst_Bool;
        POICA_P_And_Bool_RedirectToInnerType And_Bool;
        POICA_P_Or_Bool_RedirectToInnerType Or_Bool;
        POICA_P_Xor_Bool_RedirectToInnerType Xor_Bool;
        POICA_P_Eq_Bool_RedirectToInnerType Eq_Bool;
    } data;
} Expr_Bool_Bool;
typedef _Bool POICA_P_BConst_Bool_RedirectToInnerType;
typedef Expr_Bool_Bool POICA_P_BConst_Bool_RedirectToOuterSumType;
typedef Expr_Bool_Bool POICA_P_And_Bool_RedirectToOuterSumType;
typedef Expr_Bool_Bool POICA_P_Or_Bool_RedirectToOuterSumType;
typedef Expr_Bool_Bool POICA_P_Xor_Bool_RedirectToOuterSumType;
typedef Expr_Bool_Bool POICA_P_Eq_Bool_RedirectToOuterSumType;
inline static Expr_Bool_Bool BConst_Bool(_Bool arg) {
    return (Expr_Bool_Bool){
        .tag = POICA_P_BConst_Bool_Tag,
        .data.BConst_Bool = arg,
    };
}
inline static Expr_Bool_Bool And_Bool(const struct Expr_Bool_Bool *left,
                                      const struct Expr_Bool_Bool *right) {
    return (Expr_Bool_Bool){
        .tag = POICA_P_And_Bool_Tag,
        .data.And_Bool = {left, right},
    };
}
inline static Expr_Bool_Bool Or_Bool(const struct Expr_Bool_Bool *left,
                                     const struct Expr_Bool_Bool *right) {
    return (Expr_Bool_Bool){
        .tag = POICA_P_Or_Bool_Tag,
        .data.Or_Bool = {left, right},
    };
}
inline static Expr_Bool_Bool Xor_Bool(const struct Expr_Bool_Bool *left,
                                      const struct Expr_Bool_Bool *right) {
    return (Expr_Bool_Bool){
        .tag = POICA_P_Xor_Bool_Tag,
        .data.Xor_Bool = {left, right},
    };
}
inline static Expr_Bool_Bool Eq_Bool(const struct Expr_Bool_Bool *left,
                                     const struct Expr_Bool_Bool *right) {
    return (Expr_Bool_Bool){
        .tag = POICA_P_Eq_Bool_Tag,
        .data.Eq_Bool = {left, right},
    };
}

int evalint_Bool(const Exprint_Bool *expr);
int evalintint(const Exprintint *expr);
_Bool eval_Bool_Bool(const Expr_Bool_Bool *expr);
_Bool eval_Boolint(const Expr_Boolint *expr);

int evalint_Bool(const Exprint_Bool *expr) {
    for (const void *poica_p_choice_ptr = (const void *)&(*expr),
                    *poica_p_break_for = (void *)1;
         poica_p_break_for != (void *)2;
         poica_p_break_for = (void *)2)
        switch ((*expr).tag) {
            break;
        case POICA_P_IConst_Bool_Tag:
            for (const POICA_P_IConst_Bool_RedirectToInnerType *
                     val =
                        (&((const POICA_P_IConst_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.IConst_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2) {
                return *val;
            }
            break;
        case POICA_P_Addint_Tag:
            for (const POICA_P_Addint_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Addint_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Addint),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Addint_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Addint_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return evalintint(*left) + evalintint(*right);
                    }
            break;
        case POICA_P_Subint_Tag:
            for (const POICA_P_Subint_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Subint_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Subint),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Subint_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Subint_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return evalintint(*left) - evalintint(*right);
                    }
            break;
        case POICA_P_Mul_Bool_Tag:
            for (const POICA_P_Mul_Bool_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Mul_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Mul_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Mul_Bool_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Mul_Bool_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return evalintint(*left) * evalintint(*right);
                    }
        }
}

int evalintint(const Exprintint *expr) {
    for (const void *poica_p_choice_ptr = (const void *)&(*expr),
                    *poica_p_break_for = (void *)1;
         poica_p_break_for != (void *)2;
         poica_p_break_for = (void *)2)
        switch ((*expr).tag) {
            break;
        case POICA_P_IConstint_Tag:
            for (const POICA_P_IConstint_RedirectToInnerType *
                     val = (&((const POICA_P_IConstint_RedirectToOuterSumType *)
                                  poica_p_choice_ptr)
                                 ->data.IConstint),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2) {
                return *val;
            }
            break;
        case POICA_P_Addint_Tag:
            for (const POICA_P_Addint_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Addint_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Addint),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Addint_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Addint_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return evalintint(*left) + evalintint(*right);
                    }
            break;
        case POICA_P_Subint_Tag:
            for (const POICA_P_Subint_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Subint_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Subint),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Subint_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Subint_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return evalintint(*left) - evalintint(*right);
                    }
            break;
        case POICA_P_Mulint_Tag:
            for (const POICA_P_Mulint_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Mulint_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Mulint),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Mulint_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Mulint_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return evalintint(*left) * evalintint(*right);
                    }
        }
}

_Bool eval_Bool_Bool(const Expr_Bool_Bool *expr) {
    for (const void *poica_p_choice_ptr = (const void *)&(*expr),
                    *poica_p_break_for = (void *)1;
         poica_p_break_for != (void *)2;
         poica_p_break_for = (void *)2)
        switch ((*expr).tag) {
            break;
        case POICA_P_BConst_Bool_Tag:
            for (const POICA_P_BConst_Bool_RedirectToInnerType *
                     val =
                        (&((const POICA_P_BConst_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.BConst_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2) {
                return *val;
            }
            break;
        case POICA_P_And_Bool_Tag:
            for (const POICA_P_And_Bool_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_And_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.And_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_And_Bool_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_And_Bool_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return eval_Bool_Bool(*left) && eval_Bool_Bool(*right);
                    }
            break;
        case POICA_P_Or_Bool_Tag:
            for (const POICA_P_Or_Bool_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Or_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Or_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Or_Bool_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Or_Bool_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return eval_Bool_Bool(*left) || eval_Bool_Bool(*right);
                    }
            break;
        case POICA_P_Xor_Bool_Tag:
            for (const POICA_P_Xor_Bool_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Xor_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Xor_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Xor_Bool_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Xor_Bool_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return eval_Bool_Bool(*left) ^ eval_Bool_Bool(*right);
                    }
            break;
        case POICA_P_Eq_Bool_Tag:
            for (const POICA_P_Eq_Bool_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Eq_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Eq_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Eq_Bool_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Eq_Bool_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return eval_Bool_Bool(*left) == eval_Bool_Bool(*right);
                    }
        }
}

_Bool eval_Boolint(const Expr_Boolint *expr) {
    for (const void *poica_p_choice_ptr = (const void *)&(*expr),
                    *poica_p_break_for = (void *)1;
         poica_p_break_for != (void *)2;
         poica_p_break_for = (void *)2)
        switch ((*expr).tag) {
            break;
        case POICA_P_BConstint_Tag:
            for (const POICA_P_BConstint_RedirectToInnerType *
                     val = (&((const POICA_P_BConstint_RedirectToOuterSumType *)
                                  poica_p_choice_ptr)
                                 ->data.BConstint),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2) {
                return *val;
            }
            break;
        case POICA_P_And_Bool_Tag:
            for (const POICA_P_And_Bool_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_And_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.And_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_And_Bool_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_And_Bool_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return eval_Bool_Bool(*left) && eval_Bool_Bool(*right);
                    }
            break;
        case POICA_P_Or_Bool_Tag:
            for (const POICA_P_Or_Bool_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Or_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Or_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Or_Bool_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Or_Bool_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return eval_Bool_Bool(*left) || eval_Bool_Bool(*right);
                    }
            break;
        case POICA_P_Xor_Bool_Tag:
            for (const POICA_P_Xor_Bool_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Xor_Bool_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Xor_Bool),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Xor_Bool_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Xor_Bool_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return eval_Bool_Bool(*left) ^ eval_Bool_Bool(*right);
                    }
            break;
        case POICA_P_Eqint_Tag:
            for (const POICA_P_Eqint_RedirectToInnerType *
                     poica_p_case_var =
                        (&((const POICA_P_Eqint_RedirectToOuterSumType *)
                               poica_p_choice_ptr)
                              ->data.Eqint),
                    *poica_p_break_for = (void *)1;
                 poica_p_break_for != (void *)2;
                 poica_p_break_for = (void *)2)
                for (
                    const POICA_P_Eqint_RedirectToInnerType_left_RedirectToFieldType
                        *left = &poica_p_case_var->left,
                        *poica_p_break_for = (void *)1;
                    poica_p_break_for != (void *)2;
                    poica_p_break_for = (void *)2)
                    for (
                        const POICA_P_Eqint_RedirectToInnerType_right_RedirectToFieldType
                            *right = &poica_p_case_var->right,
                            *poica_p_break_for = (void *)1;
                        poica_p_break_for != (void *)2;
                        poica_p_break_for = (void *)2) {
                        return evalintint(*left) == evalintint(*right);
                    }
        }
}

int main(void) {
    const Expr_Bool_Bool true_node = BConst_Bool(1);
    const Expr_Boolint false_node = BConstint(0);

    const Exprintint _12_node = IConstint(12);

    const Expr_Boolint eq_node = Eqint(&_12_node, &_12_node);

    Expr_Boolint expr = Andint(&eq_node, &false_node);

    _Bool res = eval_Boolint(&expr);

    printf("%d\n", (int)res);
}
