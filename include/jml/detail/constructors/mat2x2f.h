#ifndef JML_DETAIL_CONSTRUCTORS_MAT2X2F_H
#define JML_DETAIL_CONSTRUCTORS_MAT2X2F_H

#include "jml/detail/types/mat2x2f.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/util.h"

static inline JML_Mat2x2f JML_mat2x2fVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    JML_Mat2x2f result;
    result.data[0][0] = arg_0.data[0];
    result.data[0][1] = arg_0.data[1];
    result.data[1][0] = arg_1.data[0];
    result.data[1][1] = arg_1.data[1];
    return result;
}

#define JML_mat2x2f_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                          \
    JML_Vec2f: _Generic(                              \
        (arg_1),                                      \
        JML_Vec2f: JML_mat2x2fVec2fVec2f,             \
        default: (void (*)(void))0                    \
    ),                                                \
    default: (void (*)(void))0                        \
)(arg_0, arg_1)

static inline JML_Mat2x2f JML_mat2x2fFFFF(
    const float arg_0,
    const float arg_1,
    const float arg_2,
    const float arg_3
) {
    JML_Mat2x2f result;
    result.data[0][0] = arg_0;
    result.data[0][1] = arg_1;
    result.data[1][0] = arg_2;
    result.data[1][1] = arg_3;
    return result;
}

#define JML_mat2x2f_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                        \
    float: _Generic(                                                \
        (arg_1),                                                    \
        float: _Generic(                                            \
            (arg_2),                                                \
            float: _Generic(                                        \
                (arg_3),                                            \
                float: JML_mat2x2fFFFF,                             \
                default: (void (*)(void))0                          \
            ),                                                      \
            default: (void (*)(void))0                              \
        ),                                                          \
        default: (void (*)(void))0                                  \
    ),                                                              \
    default: (void (*)(void))0                                      \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_mat2x2f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat2x2f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_MAT2X2F_H

#ifndef JML_WITHOUT_PREFIX

#define mat2x2f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat2x2f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
