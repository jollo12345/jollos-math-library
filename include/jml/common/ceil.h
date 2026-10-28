#ifndef JML_COMMON_CEIL_H
#define JML_COMMON_CEIL_H

#include <math.h>

#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

[[nodiscard]]
static inline double JML_ceilD(
    const double arg
) {
    return ceil(arg);
}

[[nodiscard]]
static inline float JML_ceilF(
    const float arg
) {
    return ceilf(arg);
}

[[nodiscard]]
static inline JML_Vec2d JML_ceilVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        ceil(arg.x),
        ceil(arg.y)
    );
}

[[nodiscard]]
static inline JML_Vec2f JML_ceilVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        ceilf(arg.x),
        ceilf(arg.y)
    );
}

[[nodiscard]]
static inline JML_Vec3d JML_ceilVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        ceil(arg.x),
        ceil(arg.y),
        ceil(arg.z)
    );
}

[[nodiscard]]
static inline JML_Vec3f JML_ceilVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        ceilf(arg.x),
        ceilf(arg.y),
        ceilf(arg.z)
    );
}

[[nodiscard]]
static inline JML_Vec4d JML_ceilVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        ceil(arg.x),
        ceil(arg.y),
        ceil(arg.z),
        ceil(arg.w)
    );
}

[[nodiscard]]
static inline JML_Vec4f JML_ceilVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        ceilf(arg.x),
        ceilf(arg.y),
        ceilf(arg.z),
        ceilf(arg.w)
    );
}

#define JML_ceil_GENERIC_1(arg) _Generic( \
    (arg),                                \
    double: JML_ceilD,                    \
    float: JML_ceilF,                     \
    JML_Vec2d: JML_ceilVec2d,             \
    JML_Vec2f: JML_ceilVec2f,             \
    JML_Vec3d: JML_ceilVec3d,             \
    JML_Vec3f: JML_ceilVec3f,             \
    JML_Vec4d: JML_ceilVec4d,             \
    JML_Vec4f: JML_ceilVec4f,             \
    default: JML_INVALID_ARGUMENT_TYPES   \
)(arg)

#define JML_ceil(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_ceil_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_COMMON_CEIL_H

#ifdef JML_WITHOUT_PREFIX

#define ceil(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_ceil_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
