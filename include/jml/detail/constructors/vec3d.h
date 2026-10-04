#ifndef JML_DETAIL_CONSTRUCTORS_VEC3D_H
#define JML_DETAIL_CONSTRUCTORS_VEC3D_H

#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/util.h"

static inline JML_Vec3d JML_vec3dDVec2d(
    const double arg_0,
    const JML_Vec2d arg_1
) {
    JML_Vec3d result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    return result;
}

static inline JML_Vec3d JML_vec3dVec2dD(
    const JML_Vec2d arg_0,
    const double arg_1
) {
    JML_Vec3d result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1;
    return result;
}

#define JML_vec3d_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    double: _Generic(                               \
        (arg_1),                                    \
        JML_Vec2d: JML_vec3dDVec2d,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2d: _Generic(                            \
        (arg_1),                                    \
        double: JML_vec3dVec2dD,                    \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec3d JML_vec3dDDD(
    const double arg_0,
    const double arg_1,
    const double arg_2
) {
    JML_Vec3d result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2;
    return result;
}

#define JML_vec3d_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    double: _Generic(                                      \
        (arg_1),                                           \
        double: _Generic(                                  \
            (arg_2),                                       \
            double: JML_vec3dDDD,                          \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

#define JML_vec3d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC3D_H

#ifndef JML_WITHOUT_PREFIX

#define vec3d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
