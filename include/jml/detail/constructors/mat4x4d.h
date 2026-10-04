#ifndef JML_DETAIL_CONSTRUCTORS_MAT4X4D_H
#define JML_DETAIL_CONSTRUCTORS_MAT4X4D_H

#include "jml/detail/types/mat4x4d.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/util.h"

static inline JML_Mat4x4d JML_mat4x4dVec4dVec4dVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1,
    const JML_Vec4d arg_2,
    const JML_Vec4d arg_3
) {
    JML_Mat4x4d result;
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

#endif  // JML_DETAIL_CONSTRUCTORS_MAT4X4D_H

#ifndef JML_WITHOUT_PREFIX

#define mat4x4d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat4x4d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
