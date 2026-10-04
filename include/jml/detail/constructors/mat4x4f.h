#ifndef JML_FETAIL_CONSTRUCTORS_MAT4X4F_H
#define JML_FETAIL_CONSTRUCTORS_MAT4X4F_H

#include "jml/detail/types/mat4x4f.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/util.h"

static inline JML_Mat4x4f JML_mat4x4fVec4fVec4fVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1,
    const JML_Vec4f arg_2,
    const JML_Vec4f arg_3
) {
    JML_Mat4x4f result;
    result.data[0][0] = arg_0.data[0];
    result.data[0][1] = arg_0.data[1];
    result.data[0][2] = arg_0.data[2];
    result.data[0][3] = arg_0.data[3];
    result.data[1][0] = arg_1.data[0];
    result.data[1][1] = arg_1.data[1];
    result.data[1][2] = arg_1.data[2];
    result.data[1][3] = arg_1.data[3];
    result.data[2][0] = arg_2.data[0];
    result.data[2][1] = arg_2.data[1];
    result.data[2][2] = arg_2.data[2];
    result.data[2][3] = arg_2.data[3];
    result.data[3][0] = arg_3.data[0];
    result.data[3][1] = arg_3.data[1];
    result.data[3][2] = arg_3.data[2];
    result.data[3][3] = arg_3.data[3];
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
                default: (void (*)(void))0                          \
            ),                                                      \
            default: (void (*)(void))0                              \
        ),                                                          \
        default: (void (*)(void))0                                  \
    ),                                                              \
    default: (void (*)(void))0                                      \
)(arg_0, arg_1, arg_2, arg_3)

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
    result.data[0][0] = arg_0;
    result.data[0][1] = arg_1;
    result.data[0][2] = arg_2;
    result.data[0][3] = arg_3;
    result.data[1][0] = arg_4;
    result.data[1][1] = arg_5;
    result.data[1][2] = arg_6;
    result.data[1][3] = arg_7;
    result.data[2][0] = arg_8;
    result.data[2][1] = arg_9;
    result.data[2][2] = arg_10;
    result.data[2][3] = arg_11;
    result.data[3][0] = arg_12;
    result.data[3][1] = arg_13;
    result.data[3][2] = arg_14;
    result.data[3][3] = arg_15;
    return result;
}

#define JML_mat4x4f_GENERIC_16(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9, arg_10, arg_11, arg_12, arg_13, arg_14, arg_15) _Generic( \
    (arg_0),                                                                                                                                                   \
    float: _Generic(                                                                                                                                          \
        (arg_1),                                                                                                                                               \
        float: _Generic(                                                                                                                                      \
            (arg_2),                                                                                                                                           \
            float: _Generic(                                                                                                                                  \
                (arg_3),                                                                                                                                       \
                float: _Generic(                                                                                                                              \
                    (arg_4),                                                                                                                                   \
                    float: _Generic(                                                                                                                          \
                        (arg_5),                                                                                                                               \
                        float: _Generic(                                                                                                                      \
                            (arg_6),                                                                                                                           \
                            float: _Generic(                                                                                                                  \
                                (arg_7),                                                                                                                       \
                                float: _Generic(                                                                                                              \
                                    (arg_8),                                                                                                                   \
                                    float: _Generic(                                                                                                          \
                                        (arg_9),                                                                                                               \
                                        float: _Generic(                                                                                                      \
                                            (arg_10),                                                                                                          \
                                            float: _Generic(                                                                                                  \
                                                (arg_11),                                                                                                      \
                                                float: _Generic(                                                                                              \
                                                    (arg_12),                                                                                                  \
                                                    float: _Generic(                                                                                          \
                                                        (arg_13),                                                                                              \
                                                        float: _Generic(                                                                                      \
                                                            (arg_14),                                                                                          \
                                                            float: _Generic(                                                                                  \
                                                                (arg_15),                                                                                      \
                                                                float: JML_mat4x4fFFFFFFFFFFFFFFFF,                                                           \
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

#define JML_mat4x4f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat4x4f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_FETAIL_CONSTRUCTORS_MAT4X4F_H

#ifndef JML_WITHOUT_PREFIX

#define mat4x4f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat4x4f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
