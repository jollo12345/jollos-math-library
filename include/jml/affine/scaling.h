#ifndef JML_AFFINE_SCALING_H
#define JML_AFFINE_SCALING_H

#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

static inline JML_Mat4x4d JML_scalingVec3d(
    const JML_Vec3d scale
) {
    return JML_mat4x4d(
        scale.x, 0.0, 0.0, 0.0,
        0.0, scale.y, 0.0, 0.0,
        0.0, 0.0, scale.z, 0.0,
        0.0, 0.0, 0.0, 1.0
    );
}

static inline JML_Mat4x4f JML_scalingVec3f(
    const JML_Vec3f scale
) {
    return JML_mat4x4f(
        scale.x, 0.f, 0.f, 0.f,
        0.f, scale.y, 0.f, 0.f,
        0.f, 0.f, scale.z, 0.f,
        0.f, 0.f, 0.f, 1.f
    );
}

#define JML_scaling_GENERIC_1(scale) _Generic( \
    (scale),                                   \
    JML_Vec3d: JML_scalingVec3d,               \
    JML_Vec3f: JML_scalingVec3f,               \
    default: (void (*)(void))0                 \
)(scale)

#define JML_scaling(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_scaling_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_AFFINE_SCALING_H

#ifdef JML_WITHOUT_PREFIX

#define scaling(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_scaling_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
