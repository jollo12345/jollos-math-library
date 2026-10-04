#ifndef JML_DETAIL_CONSTRUCTORS_MAT3X3D_H
#define JML_DETAIL_CONSTRUCTORS_MAT3X3D_H

#include "jml/detail/types/mat3x3d.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/util.h"

static inline JML_Mat3x3d JML_mat3x3dVec3dVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1,
    const JML_Vec3d arg_2
) {
    JML_Mat3x3d result;
    result.data[0][0] = arg_0.data[0];
    result.data[0][1] = arg_0.data[1];
    result.data[0][2] = arg_0.data[2];
    result.data[1][0] = arg_1.data[0];
    result.data[1][1] = arg_1.data[1];
    result.data[1][2] = arg_1.data[2];
    result.data[2][0] = arg_2.data[0];
    result.data[2][1] = arg_2.data[1];
    result.data[2][2] = arg_2.data[2];
    return result;
}

#define JML_mat3x3d_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                                 \
    JML_Vec3d: _Generic(                                     \
        (arg_1),                                             \
        JML_Vec3d: _Generic(                                 \
            (arg_2),                                         \
            JML_Vec3d: JML_mat3x3dVec3dVec3dVec3d,           \
            default: (void (*)(void))0                       \
        ),                                                   \
        default: (void (*)(void))0                           \
    ),                                                       \
    default: (void (*)(void))0                               \
)(arg_0, arg_1, arg_2)

static inline JML_Mat3x3d JML_mat3x3dDDDDDDDDD(
    const double arg_0,
    const double arg_1,
    const double arg_2,
    const double arg_3,
    const double arg_4,
    const double arg_5,
    const double arg_6,
    const double arg_7,
    const double arg_8
) {
    JML_Mat3x3d result;
    result.data[0][0] = arg_0;
    result.data[0][1] = arg_1;
    result.data[0][2] = arg_2;
    result.data[1][0] = arg_3;
    result.data[1][1] = arg_4;
    result.data[1][2] = arg_5;
    result.data[2][0] = arg_6;
    result.data[2][1] = arg_7;
    result.data[2][2] = arg_8;
    return result;
}

#define JML_mat3x3d_GENERIC_9(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8) _Generic( \
    (arg_0),                                                                                           \
    double: _Generic(                                                                                  \
        (arg_1),                                                                                       \
        double: _Generic(                                                                              \
            (arg_2),                                                                                   \
            double: _Generic(                                                                          \
                (arg_3),                                                                               \
                double: _Generic(                                                                      \
                    (arg_4),                                                                           \
                    double: _Generic(                                                                  \
                        (arg_5),                                                                       \
                        double: _Generic(                                                              \
                            (arg_6),                                                                   \
                            double: _Generic(                                                          \
                                (arg_7),                                                               \
                                double: _Generic(                                                      \
                                    (arg_8),                                                           \
                                    double: JML_mat3x3dDDDDDDDDD,                                      \
                                    default: (void (*)(void))0                                         \
                                ),                                                                     \
                                default: (void (*)(void))0                                             \
                            ),                                                                         \
                            default: (void (*)(void))0                                                 \
                        ),                                                                             \
                        default: (void (*)(void))0                                                     \
                    ),                                                                                 \
                    default: (void (*)(void))0                                                         \
                ),                                                                                     \
                default: (void (*)(void))0                                                             \
            ),                                                                                         \
            default: (void (*)(void))0                                                                 \
        ),                                                                                             \
        default: (void (*)(void))0                                                                     \
    ),                                                                                                 \
    default: (void (*)(void))0                                                                         \
)(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8)

#define JML_mat3x3d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat3x3d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_MAT3X3D_H

#ifndef JML_WITHOUT_PREFIX

#define mat3x3d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat3x3d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
