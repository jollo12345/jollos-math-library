#ifndef JML_DETAIL_CONSTRUCTORS_MAT2X2D_H
#define JML_DETAIL_CONSTRUCTORS_MAT2X2D_H

#include "jml/detail/types/mat2x2d.h"
#include "jml/detail/types/vec2d.h"
#include "jml/detail/util.h"

static inline JML_Mat2x2d JML_mat2x2dVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    JML_Mat2x2d result;
    result.data[0][0] = arg_0.data[0];
    result.data[0][1] = arg_0.data[1];
    result.data[1][0] = arg_1.data[0];
    result.data[1][1] = arg_1.data[1];
    return result;
}

#define JML_mat2x2d_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                          \
    JML_Vec2d: _Generic(                              \
        (arg_1),                                      \
        JML_Vec2d: JML_mat2x2dVec2dVec2d,             \
        default: (void (*)(void))0                    \
    ),                                                \
    default: (void (*)(void))0                        \
)(arg_0, arg_1)

static inline JML_Mat2x2d JML_mat2x2dDDDD(
    const double arg_0,
    const double arg_1,
    const double arg_2,
    const double arg_3
) {
    JML_Mat2x2d result;
    result.data[0][0] = arg_0;
    result.data[0][1] = arg_1;
    result.data[1][0] = arg_2;
    result.data[1][1] = arg_3;
    return result;
}

#define JML_mat2x2d_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                        \
    double: _Generic(                                               \
        (arg_1),                                                    \
        double: _Generic(                                           \
            (arg_2),                                                \
            double: _Generic(                                       \
                (arg_3),                                            \
                double: JML_mat2x2dDDDD,                            \
                default: (void (*)(void))0                          \
            ),                                                      \
            default: (void (*)(void))0                              \
        ),                                                          \
        default: (void (*)(void))0                                  \
    ),                                                              \
    default: (void (*)(void))0                                      \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_mat2x2d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat2x2d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_MAT2X2D_H

#ifndef JML_WITHOUT_PREFIX

#define mat2x2d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat2x2d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
