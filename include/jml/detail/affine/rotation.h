#ifndef JML_DETAIL_AFFINE_ROTATION_H
#define JML_DETAIL_AFFINE_ROTATION_H

#include "jml/detail/constructors/mat4x4d.h"
#include "jml/detail/constructors/mat4x4f.h"
#include "jml/detail/types/mat4x4d.h"
#include "jml/detail/types/mat4x4f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/util.h"

static inline JML_Mat4x4d JML_rotationVec3dD(
    const JML_Vec3d axis,
    const double angle
) {
    const double c = JML_DETAIL_COS_D(angle);
    const double s = JML_DETAIL_SIN_D(angle);
    const double t = 1. - c;

    return JML_mat4x4d(
        t * axis.x * axis.x + c, t * axis.x * axis.y + s * axis.z , t * axis.x * axis.z - s * axis.y, 0.,
        t * axis.x * axis.y - s * axis.z , t * axis.y * axis.y + c, t * axis.y * axis.z + s * axis.x, 0.,
        t * axis.x * axis.z + s * axis.y, t * axis.y * axis.z - s * axis.x, t * axis.z * axis.z + c, 0.,
        0., 0., 0., 1.
    );
}

static inline JML_Mat4x4f JML_rotationVec3fF(
    const JML_Vec3f axis,
    const float angle
) {
    const float c = JML_DETAIL_COS_D(angle);
    const float s = JML_DETAIL_SIN_D(angle);
    const float t = 1.f - c;

    return JML_mat4x4f(
        t * axis.x * axis.x + c, t * axis.x * axis.y + s * axis.z , t * axis.x * axis.z - s * axis.y, 0.f,
        t * axis.x * axis.y - s * axis.z , t * axis.y * axis.y + c, t * axis.y * axis.z + s * axis.x, 0.f,
        t * axis.x * axis.z + s * axis.y, t * axis.y * axis.z - s * axis.x, t * axis.z * axis.z + c, 0.f,
        0.f, 0.f, 0.f, 1.f
    );
}

#define JML_rotation_GENERIC_2(axis, angle) _Generic( \
    (axis),                                           \
    JML_Vec3d: _Generic(                              \
        (angle),                                      \
        double: JML_rotationVec3dD,                   \
        default: (void (*)(void))0                    \
    ),                                                \
    JML_Vec3f: _Generic(                              \
        (angle),                                      \
        float: JML_rotationVec3fF,                    \
        default: (void (*)(void))0                    \
    ),                                                \
    default: (void (*)(void))0                        \
)(axis, angle)

#define JML_rotation(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_rotation_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_AFFINE_ROTATION_H

#ifndef JML_WITHOUT_PREFIX

#define rotation(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_rotation_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
