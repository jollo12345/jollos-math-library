#ifndef JML_CONSTRUCTORS_VEC3D_H
#define JML_CONSTRUCTORS_VEC3D_H

#include "jml/types/vec2d.h"
#include "jml/types/vec3d.h"
#include "jml/util.h"

static inline JML_Vec3d JML_vec3dDVec2d(
    const double arg_0,
    const JML_Vec2d arg_1
) {
    JML_Vec3d result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    return result;
}

static inline JML_Vec3d JML_vec3dVec2dD(
    const JML_Vec2d arg_0,
    const double arg_1
) {
    JML_Vec3d result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
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
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
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

#endif  // JML_CONSTRUCTORS_VEC3D_H

#ifdef JML_WITHOUT_PREFIX

#define vec3d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
