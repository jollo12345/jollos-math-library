#ifndef JML_CONSTRUCTORS_MAT2X2D_H
#define JML_CONSTRUCTORS_MAT2X2D_H

#include "jml/types/mat2x2d.h"
#include "jml/types/vec2d.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Mat2x2d JML_mat2x2dVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    JML_Mat2x2d result;
    result.m00 = arg_0.x;
    result.m01 = arg_0.y;
    result.m10 = arg_1.x;
    result.m11 = arg_1.y;
    return result;
}

#define JML_mat2x2d_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                          \
    JML_Vec2d: _Generic(                              \
        (arg_1),                                      \
        JML_Vec2d: JML_mat2x2dVec2dVec2d,             \
        default: JML_INVALID_ARGUMENT_TYPES           \
    ),                                                \
    default: JML_INVALID_ARGUMENT_TYPES               \
)(arg_0, arg_1)

[[nodiscard]]
static inline JML_Mat2x2d JML_mat2x2dDDDD(
    const double arg_0,
    const double arg_1,
    const double arg_2,
    const double arg_3
) {
    JML_Mat2x2d result;
    result.m00 = arg_0;
    result.m01 = arg_1;
    result.m10 = arg_2;
    result.m11 = arg_3;
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
                default: JML_INVALID_ARGUMENT_TYPES                 \
            ),                                                      \
            default: JML_INVALID_ARGUMENT_TYPES                     \
        ),                                                          \
        default: JML_INVALID_ARGUMENT_TYPES                         \
    ),                                                              \
    default: JML_INVALID_ARGUMENT_TYPES                             \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_mat2x2d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat2x2d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_MAT2X2D_H

#ifdef JML_WITHOUT_PREFIX

#define mat2x2d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat2x2d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
