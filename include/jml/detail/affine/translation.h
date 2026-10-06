#ifndef JML_DETAIL_AFFINE_TRANSLATION_H
#define JML_DETAIL_AFFINE_TRANSLATION_H

#include "jml/detail/constructors/mat4x4d.h"
#include "jml/detail/constructors/mat4x4f.h"
#include "jml/detail/types/mat4x4d.h"
#include "jml/detail/types/mat4x4f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"

static inline JML_Mat4x4d JML_translationVec3d(
    const JML_Vec3d offset
) {
    return JML_mat4x4d(
        1.0, 0.0, 0.0, 0.0,
        0.0, 1.0, 0.0, 0.0,
        0.0, 0.0, 1.0, 0.0,
        offset.data[0], offset.data[1], offset.data[2], 1.0
    );
}

static inline JML_Mat4x4f JML_translationVec3f(
    const JML_Vec3f offset
) {
    return JML_mat4x4f(
        1.f, 0.f, 0.f, 0.f,
        0.f, 1.f, 0.f, 0.f,
        0.f, 0.f, 1.f, 0.f,
        offset.data[0], offset.data[1], offset.data[2], 1.f
    );
}

#define JML_translation_GENERIC_1(offset) _Generic( \
    (offset),                                       \
    JML_Vec3d: JML_translationVec3d,                \
    JML_Vec3f: JML_translationVec3f,                \
    default: (void (*)(void))0                      \
)(offset)

#define JML_translation(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_translation_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_AFFINE_TRANSLATION_H

#ifndef JML_WITHOUT_PREFIX

#define translation(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_translation_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
