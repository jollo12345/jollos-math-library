#ifndef JML_DETAIL_AFFINE_FRUSTRUM_H
#define JML_DETAIL_AFFINE_FRUSTRUM_H

#include "jml/detail/constructors/mat4x4d.h"
#include "jml/detail/constructors/mat4x4f.h"
#include "jml/detail/types/mat4x4d.h"
#include "jml/detail/types/mat4x4f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"

static inline JML_Mat4x4d JML_frustrumDDDDDD(
    const double left,
    const double right,
    const double bottom,
    const double top,
    const double near,
    const double far
) {
    const double rl = right - left;
    const double tb = top - bottom;
    const double fn = far - near;

    return JML_mat4x4d(
        2.0 * near / rl, 0.0, (right + left) / rl, 0.0,
        0.0, 2.0 * near / tb, (top + bottom) / tb, 0.0,
        0.0, 0.0, -(far + near) / fn, -2.0 * far * near / fn,
        0.0, 0.0, -1.0, 0.0
    );
}

static inline JML_Mat4x4f JML_frustrumVec3f(
    const float left,
    const float right,
    const float bottom,
    const float top,
    const float near,
    const float far
) {
    const float rl = right - left;
    const float tb = top - bottom;
    const float fn = far - near;

    return JML_mat4x4f(
        2.f * near / rl, 0.f, (right + left) / rl, 0.f,
        0.f, 2.f * near / tb, (top + bottom) / tb, 0.f,
        0.f, 0.f, -(far + near) / fn, -2.f * far * near / fn,
        0.f, 0.f, -1.f, 0.f
    );
}

#define JML_frustrum_GENERIC_1(offset) _Generic( \
    (offset),                                    \
    JML_Vec3d: JML_frustrumVec3d,                \
    JML_Vec3f: JML_frustrumVec3f,                \
    default: (void (*)(void))0                   \
)(offset)

#define JML_frustrum(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_frustrum_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_AFFINE_FRUSTRUM_H

#ifndef JML_WITHOUT_PREFIX

#define frustrum(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_frustrum_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
