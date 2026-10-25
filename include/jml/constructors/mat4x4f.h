#ifndef JML_FETAIL_CONSTRUCTORS_MAT4X4F_H
#define JML_FETAIL_CONSTRUCTORS_MAT4X4F_H

#include "jml/types/mat4x4f.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Mat4x4f JML_mat4x4fVec4fVec4fVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1,
    const JML_Vec4f arg_2,
    const JML_Vec4f arg_3
) {
    JML_Mat4x4f result;
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

#define JML_mat4x4f_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                        \
    JML_Vec4f: _Generic(                                            \
        (arg_1),                                                    \
        JML_Vec4f: _Generic(                                        \
            (arg_2),                                                \
            JML_Vec4f: _Generic(                                    \
                (arg_3),                                            \
                JML_Vec4f: JML_mat4x4fVec4fVec4fVec4fVec4f,         \
                default: JML_INVALID_ARGUMENT_TYPES                 \
            ),                                                      \
            default: JML_INVALID_ARGUMENT_TYPES                     \
        ),                                                          \
        default: JML_INVALID_ARGUMENT_TYPES                         \
    ),                                                              \
    default: JML_INVALID_ARGUMENT_TYPES                             \
)(arg_0, arg_1, arg_2, arg_3)

[[nodiscard]]
static inline JML_Mat4x4f JML_mat4x4fFFFFFFFFFFFFFFFF(
    const float arg_0,
    const float arg_1,
    const float arg_2,
    const float arg_3,
    const float arg_4,
    const float arg_5,
    const float arg_6,
    const float arg_7,
    const float arg_8,
    const float arg_9,
    const float arg_10,
    const float arg_11,
    const float arg_12,
    const float arg_13,
    const float arg_14,
    const float arg_15
) {
    JML_Mat4x4f result;
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

#define JML_mat4x4f_GENERIC_16(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10, arg_11, arg_12, arg_13, arg_14, arg_15) _Generic( \
    (arg_0),                                                                                                                                                   \
    float: _Generic(                                                                                                                                           \
        (arg_1),                                                                                                                                               \
        float: _Generic(                                                                                                                                       \
            (arg_2),                                                                                                                                           \
            float: _Generic(                                                                                                                                   \
                (arg_3),                                                                                                                                       \
                float: _Generic(                                                                                                                               \
                    (arg_4),                                                                                                                                   \
                    float: _Generic(                                                                                                                           \
                        (arg_5),                                                                                                                               \
                        float: _Generic(                                                                                                                       \
                            (arg_6),                                                                                                                           \
                            float: _Generic(                                                                                                                   \
                                (arg_7),                                                                                                                       \
                                float: _Generic(                                                                                                               \
                                    (arg_8),                                                                                                                   \
                                    float: _Generic(                                                                                                           \
                                        (arg_9),                                                                                                               \
                                        float: _Generic(                                                                                                       \
                                            (arg_10),                                                                                                          \
                                            float: _Generic(                                                                                                   \
                                                (arg_11),                                                                                                      \
                                                float: _Generic(                                                                                               \
                                                    (arg_12),                                                                                                  \
                                                    float: _Generic(                                                                                           \
                                                        (arg_13),                                                                                              \
                                                        float: _Generic(                                                                                       \
                                                            (arg_14),                                                                                          \
                                                            float: _Generic(                                                                                   \
                                                                (arg_15),                                                                                      \
                                                                float: JML_mat4x4fFFFFFFFFFFFFFFFF,                                                            \
                                                                default: JML_INVALID_ARGUMENT_TYPES                                                            \
                                                            ),                                                                                                 \
                                                            default: JML_INVALID_ARGUMENT_TYPES                                                                \
                                                        ),                                                                                                     \
                                                        default: JML_INVALID_ARGUMENT_TYPES                                                                    \
                                                    ),                                                                                                         \
                                                    default: JML_INVALID_ARGUMENT_TYPES                                                                        \
                                                ),                                                                                                             \
                                                default: JML_INVALID_ARGUMENT_TYPES                                                                            \
                                            ),                                                                                                                 \
                                            default: JML_INVALID_ARGUMENT_TYPES                                                                                \
                                        ),                                                                                                                     \
                                        default: JML_INVALID_ARGUMENT_TYPES                                                                                    \
                                    ),                                                                                                                         \
                                    default: JML_INVALID_ARGUMENT_TYPES                                                                                        \
                                ),                                                                                                                             \
                                default: JML_INVALID_ARGUMENT_TYPES                                                                                            \
                            ),                                                                                                                                 \
                            default: JML_INVALID_ARGUMENT_TYPES                                                                                                \
                        ),                                                                                                                                     \
                        default: JML_INVALID_ARGUMENT_TYPES                                                                                                    \
                    ),                                                                                                                                         \
                    default: JML_INVALID_ARGUMENT_TYPES                                                                                                        \
                ),                                                                                                                                             \
                default: JML_INVALID_ARGUMENT_TYPES                                                                                                            \
            ),                                                                                                                                                 \
            default: JML_INVALID_ARGUMENT_TYPES                                                                                                                \
        ),                                                                                                                                                     \
        default: JML_INVALID_ARGUMENT_TYPES                                                                                                                    \
    ),                                                                                                                                                         \
    default: JML_INVALID_ARGUMENT_TYPES                                                                                                                        \
)(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10, arg_11, arg_12, arg_13, arg_14, arg_15)

#define JML_mat4x4f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat4x4f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_FETAIL_CONSTRUCTORS_MAT4X4F_H

#ifdef JML_WITHOUT_PREFIX

#define mat4x4f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat4x4f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
