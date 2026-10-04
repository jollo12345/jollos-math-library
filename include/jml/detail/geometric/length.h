#ifndef JML_DETAIL_GEOMETRIC_LENGTH_H
#define JML_DETAIL_GEOMETRIC_LENGTH_H

#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/util.h"

static inline double JML_lengthVec2d(
    const JML_Vec2d arg
) {
    return JML_DETAIL_SQRT_D(arg.data[0] * arg.data[0] + arg.data[1] * arg.data[1]);
}

static inline float JML_lengthVec2f(
    const JML_Vec2f arg
) {
    return JML_DETAIL_SQRT_F(arg.data[0] * arg.data[0] + arg.data[1] * arg.data[1]);
}

static inline double JML_lengthVec3d(
    const JML_Vec3d arg
) {
    return JML_DETAIL_SQRT_D(arg.data[0] * arg.data[0] + arg.data[1] * arg.data[1] + arg.data[2] * arg.data[2]);
}

static inline float JML_lengthVec3f(
    const JML_Vec3f arg
) {
    return JML_DETAIL_SQRT_F(arg.data[0] * arg.data[0] + arg.data[1] * arg.data[1] + arg.data[2] * arg.data[2]);
}

#define JML_length_GENERIC_1(arg) _Generic( \
    (arg),                                  \
    JML_Vec2d: JML_lengthVec2d,             \
    JML_Vec2f: JML_lengthVec2f,             \
    JML_Vec3d: JML_lengthVec3d,             \
    JML_Vec3f: JML_lengthVec3f,             \
    default: (void (*)(void))0              \
)(arg)

#define JML_length(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_length_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_LENGTH_H

#ifndef JML_WITHOUT_PREFIX

#define length(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_length_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
