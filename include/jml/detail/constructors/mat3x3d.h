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
    result.m00 = arg_0.x;
    result.m01 = arg_0.y;
    result.m02 = arg_0.z;
    result.m10 = arg_1.x;
    result.m11 = arg_1.y;
    result.m12 = arg_1.z;
    result.m20 = arg_2.x;
    result.m21 = arg_2.y;
    result.m22 = arg_2.z;
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
    result.m00 = arg_0;
    result.m01 = arg_1;
    result.m02 = arg_2;
    result.m10 = arg_3;
    result.m11 = arg_4;
    result.m12 = arg_5;
    result.m20 = arg_6;
    result.m21 = arg_7;
    result.m22 = arg_8;
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
