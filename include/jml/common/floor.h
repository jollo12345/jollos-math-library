#ifndef JML_COMMON_FLOOR_H
#define JML_COMMON_FLOOR_H

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
static inline double JML_floorD(
    const double arg
) {
    return floor(arg);
}

[[nodiscard]]
static inline float JML_floorF(
    const float arg
) {
    return floorf(arg);
}

[[nodiscard]]
static inline JML_Vec2d JML_floorVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        floor(arg.x),
        floor(arg.y)
    );
}

[[nodiscard]]
static inline JML_Vec2f JML_floorVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        floorf(arg.x),
        floorf(arg.y)
    );
}

[[nodiscard]]
static inline JML_Vec3d JML_floorVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        floor(arg.x),
        floor(arg.y),
        floor(arg.z)
    );
}

[[nodiscard]]
static inline JML_Vec3f JML_floorVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        floorf(arg.x),
        floorf(arg.y),
        floorf(arg.z)
    );
}

[[nodiscard]]
static inline JML_Vec4d JML_floorVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        floor(arg.x),
        floor(arg.y),
        floor(arg.z),
        floor(arg.w)
    );
}

[[nodiscard]]
static inline JML_Vec4f JML_floorVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        floorf(arg.x),
        floorf(arg.y),
        floorf(arg.z),
        floorf(arg.w)
    );
}

#define JML_floor_GENERIC_1(arg) _Generic( \
    (arg),                                 \
    double: JML_floorD,                    \
    float: JML_floorF,                     \
    JML_Vec2d: JML_floorVec2d,             \
    JML_Vec2f: JML_floorVec2f,             \
    JML_Vec3d: JML_floorVec3d,             \
    JML_Vec3f: JML_floorVec3f,             \
    JML_Vec4d: JML_floorVec4d,             \
    JML_Vec4f: JML_floorVec4f,             \
    default: JML_INVALID_ARGUMENT_TYPES    \
)(arg)

#define JML_floor(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_floor_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_COMMON_FLOOR_H

#ifdef JML_WITHOUT_PREFIX

#define floor(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_floor_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
