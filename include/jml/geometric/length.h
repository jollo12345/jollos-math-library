#ifndef JML_GEOMETRIC_LENGTH_H
#define JML_GEOMETRIC_LENGTH_H

#include <math.h>

#include "jml/exponential/sqrt.h"
#include "jml/geometric/dot.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

static inline double JML_lengthVec2d(
    const JML_Vec2d arg
) {
    return JML_sqrt(JML_dot(arg, arg));
}

static inline float JML_lengthVec2f(
    const JML_Vec2f arg
) {
    return JML_sqrt(JML_dot(arg, arg));
}

static inline double JML_lengthVec3d(
    const JML_Vec3d arg
) {
    return JML_sqrt(JML_dot(arg, arg));
}

static inline float JML_lengthVec3f(
    const JML_Vec3f arg
) {
    return JML_sqrt(JML_dot(arg, arg));
}

static inline double JML_lengthVec4d(
    const JML_Vec4d arg
) {
    return JML_sqrt(JML_dot(arg, arg));
}

static inline float JML_lengthVec4f(
    const JML_Vec4f arg
) {
    return JML_sqrt(JML_dot(arg, arg));
}

#define JML_length_GENERIC_1(arg) _Generic( \
    (arg),                                  \
    JML_Vec2d: JML_lengthVec2d,             \
    JML_Vec2f: JML_lengthVec2f,             \
    JML_Vec3d: JML_lengthVec3d,             \
    JML_Vec3f: JML_lengthVec3f,             \
    JML_Vec4d: JML_lengthVec4d,             \
    JML_Vec4f: JML_lengthVec4f,             \
    default: JML_INVALID_ARGUMENT_TYPES     \
)(arg)

#define JML_length(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_length_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_GEOMETRIC_LENGTH_H

#ifdef JML_WITHOUT_PREFIX

#define length(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_length_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
