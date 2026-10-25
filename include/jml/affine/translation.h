#ifndef JML_AFFINE_TRANSLATION_H
#define JML_AFFINE_TRANSLATION_H

#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Mat4x4d JML_translationVec3d(
    const JML_Vec3d offset
) {
    return JML_mat4x4d(
        1.0, 0.0, 0.0, 0.0,
        0.0, 1.0, 0.0, 0.0,
        0.0, 0.0, 1.0, 0.0,
        offset.x, offset.y, offset.z, 1.0
    );
}

[[nodiscard]]
static inline JML_Mat4x4f JML_translationVec3f(
    const JML_Vec3f offset
) {
    return JML_mat4x4f(
        1.f, 0.f, 0.f, 0.f,
        0.f, 1.f, 0.f, 0.f,
        0.f, 0.f, 1.f, 0.f,
        offset.x, offset.y, offset.z, 1.f
    );
}

#define JML_translation_GENERIC_1(offset) _Generic( \
    (offset),                                       \
    JML_Vec3d: JML_translationVec3d,                \
    JML_Vec3f: JML_translationVec3f,                \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(offset)

#define JML_translation(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_translation_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_AFFINE_TRANSLATION_H

#ifdef JML_WITHOUT_PREFIX

#define translation(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_translation_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
