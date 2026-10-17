#ifndef JML_GEOMETRIC_NORMALIZE_H
#define JML_GEOMETRIC_NORMALIZE_H

#include "jml/arithmetic/div.h"
#include "jml/geometric/length.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

static inline JML_Vec2d JML_normalizeVec2d(
    const JML_Vec2d arg
) {
    return JML_div(arg, JML_length(arg));
}

static inline JML_Vec2f JML_normalizeVec2f(
    const JML_Vec2f arg
) {
    return JML_div(arg, JML_length(arg));
}

static inline JML_Vec3d JML_normalizeVec3d(
    const JML_Vec3d arg
) {
    return JML_div(arg, JML_length(arg));
}

static inline JML_Vec3f JML_normalizeVec3f(
    const JML_Vec3f arg
) {
    return JML_div(arg, JML_length(arg));
}

#define JML_normalize_GENERIC_1(arg) _Generic( \
    (arg),                                     \
    JML_Vec2d: JML_normalizeVec2d,             \
    JML_Vec2f: JML_normalizeVec2f,             \
    JML_Vec3d: JML_normalizeVec3d,             \
    JML_Vec3f: JML_normalizeVec3f,             \
    default: (void (*)(void))0                 \
)(arg)

#define JML_normalize(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_normalize_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_NORMALIZE_H

#ifndef JML_WITHOUT_PREFIX

#define normalize(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_normalize_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
