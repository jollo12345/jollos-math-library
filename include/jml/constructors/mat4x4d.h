#ifndef JML_CONSTRUCTORS_MAT4X4D_H
#define JML_CONSTRUCTORS_MAT4X4D_H

#include "jml/types/mat4x4d.h"
#include "jml/types/vec4d.h"
#include "jml/util.h"

static inline JML_Mat4x4d JML_mat4x4dVec4dVec4dVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1,
    const JML_Vec4d arg_2,
    const JML_Vec4d arg_3
) {
    JML_Mat4x4d result;
    result.m00 = arg_0.x;
    result.m01 = arg_0.y;
    result.m02 = arg_0.z;
    result.m03 = arg_0.w;
    result.m10 = arg_1.x;
    result.m11 = arg_1.y;
    result.m12 = arg_1.z;
    result.m13 = arg_1.w;
    result.m20 = arg_2.x;
    result.m21 = arg_2.y;
    result.m22 = arg_2.z;
    result.m23 = arg_2.w;
    result.m30 = arg_3.x;
    result.m31 = arg_3.y;
    result.m32 = arg_3.z;
    result.m33 = arg_3.w;
    return result;
}

#define JML_mat4x4d_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                        \
    JML_Vec4d: _Generic(                                            \
        (arg_1),                                                    \
        JML_Vec4d: _Generic(                                        \
            (arg_2),                                                \
            JML_Vec4d: _Generic(                                    \
                (arg_3),                                            \
                JML_Vec4d: JML_mat4x4dVec4dVec4dVec4dVec4d,         \
                default: (void (*)(void))0                          \
            ),                                                      \
            default: (void (*)(void))0                              \
        ),                                                          \
        default: (void (*)(void))0                                  \
    ),                                                              \
    default: (void (*)(void))0                                      \
)(arg_0, arg_1, arg_2, arg_3)

static inline JML_Mat4x4d JML_mat4x4dDDDDDDDDDDDDDDDD(
    const double arg_0,
    const double arg_1,
    const double arg_2,
    const double arg_3,
    const double arg_4,
    const double arg_5,
    const double arg_6,
    const double arg_7,
    const double arg_8,
    const double arg_9,
    const double arg_10,
    const double arg_11,
    const double arg_12,
    const double arg_13,
    const double arg_14,
    const double arg_15
) {
    JML_Mat4x4d result;
    result.m00 = arg_0;
    result.m01 = arg_1;
    result.m02 = arg_2;
    result.m03 = arg_3;
    result.m10 = arg_4;
    result.m11 = arg_5;
    result.m12 = arg_6;
    result.m13 = arg_7;
    result.m20 = arg_8;
    result.m21 = arg_9;
    result.m22 = arg_10;
    result.m23 = arg_11;
    result.m30 = arg_12;
    result.m31 = arg_13;
    result.m32 = arg_14;
    result.m33 = arg_15;
    return result;
}

#define JML_mat4x4d_GENERIC_16(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10, arg_11, arg_12, arg_13, arg_14, arg_15) _Generic( \
    (arg_0),                                                                                                                                                   \
    double: _Generic(                                                                                                                                          \
        (arg_1),                                                                                                                                               \
        double: _Generic(                                                                                                                                      \
            (arg_2),                                                                                                                                           \
            double: _Generic(                                                                                                                                  \
                (arg_3),                                                                                                                                       \
                double: _Generic(                                                                                                                              \
                    (arg_4),                                                                                                                                   \
                    double: _Generic(                                                                                                                          \
                        (arg_5),                                                                                                                               \
                        double: _Generic(                                                                                                                      \
                            (arg_6),                                                                                                                           \
                            double: _Generic(                                                                                                                  \
                                (arg_7),                                                                                                                       \
                                double: _Generic(                                                                                                              \
                                    (arg_8),                                                                                                                   \
                                    double: _Generic(                                                                                                          \
                                        (arg_9),                                                                                                               \
                                        double: _Generic(                                                                                                      \
                                            (arg_10),                                                                                                          \
                                            double: _Generic(                                                                                                  \
                                                (arg_11),                                                                                                      \
                                                double: _Generic(                                                                                              \
                                                    (arg_12),                                                                                                  \
                                                    double: _Generic(                                                                                          \
                                                        (arg_13),                                                                                              \
                                                        double: _Generic(                                                                                      \
                                                            (arg_14),                                                                                          \
                                                            double: _Generic(                                                                                  \
                                                                (arg_15),                                                                                      \
                                                                double: JML_mat4x4dDDDDDDDDDDDDDDDD,                                                           \
                                                                default: (void (*)(void))0                                                                     \
                                                            ),                                                                                                 \
                                                            default: (void (*)(void))0                                                                         \
                                                        ),                                                                                                     \
                                                        default: (void (*)(void))0                                                                             \
                                                    ),                                                                                                         \
                                                    default: (void (*)(void))0                                                                                 \
                                                ),                                                                                                             \
                                                default: (void (*)(void))0                                                                                     \
                                            ),                                                                                                                 \
                                            default: (void (*)(void))0                                                                                         \
                                        ),                                                                                                                     \
                                        default: (void (*)(void))0                                                                                             \
                                    ),                                                                                                                         \
                                    default: (void (*)(void))0                                                                                                 \
                                ),                                                                                                                             \
                                default: (void (*)(void))0                                                                                                     \
                            ),                                                                                                                                 \
                            default: (void (*)(void))0                                                                                                         \
                        ),                                                                                                                                     \
                        default: (void (*)(void))0                                                                                                             \
                    ),                                                                                                                                         \
                    default: (void (*)(void))0                                                                                                                 \
                ),                                                                                                                                             \
                default: (void (*)(void))0                                                                                                                     \
            ),                                                                                                                                                 \
            default: (void (*)(void))0                                                                                                                         \
        ),                                                                                                                                                     \
        default: (void (*)(void))0                                                                                                                             \
    ),                                                                                                                                                         \
    default: (void (*)(void))0                                                                                                                                 \
)(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10, arg_11, arg_12, arg_13, arg_14, arg_15)

#define JML_mat4x4d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat4x4d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_MAT4X4D_H

#ifdef JML_WITHOUT_PREFIX

#define mat4x4d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat4x4d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
