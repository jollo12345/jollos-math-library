#ifndef JML_DETAIL_GEOMETRIC_NORMALIZED_H
#define JML_DETAIL_GEOMETRIC_NORMALIZED_H

#include "jml/detail/arithmetic/div.h"
#include "jml/detail/geometric/length.h"
#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/util.h"

static inline JML_Vec2d JML_normalizedVec2d(
    const JML_Vec2d arg
) {
    return JML_div(arg, JML_length(arg));
}

static inline JML_Vec2f JML_normalizedVec2f(
    const JML_Vec2f arg
) {
    return JML_div(arg, JML_length(arg));
}

static inline JML_Vec3d JML_normalizedVec3d(
    const JML_Vec3d arg
) {
    return JML_div(arg, JML_length(arg));
}

static inline JML_Vec3f JML_normalizedVec3f(
    const JML_Vec3f arg
) {
    return JML_div(arg, JML_length(arg));
}

#define JML_normalized_GENERIC_1(arg) _Generic( \
    (arg),                                     \
    JML_Vec2d: JML_normalizedVec2d,             \
    JML_Vec2f: JML_normalizedVec2f,             \
    JML_Vec3d: JML_normalizedVec3d,             \
    JML_Vec3f: JML_normalizedVec3f,             \
    default: (void (*)(void))0                 \
)(arg)

#define JML_normalized(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_normalized_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_NORMALIZED_H

#ifndef JML_WITHOUT_PREFIX

#define normalized(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_normalized_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
