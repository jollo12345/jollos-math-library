#ifndef JML_TRIGONOMETRY_SIN_H
#define JML_TRIGONOMETRY_SIN_H

#include <math.h>

#include "jml/common/pi.h"
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
static inline double JML_sinD(
    const double angle
) {
    return sin(angle);
}

[[nodiscard]]
static inline float JML_sinF(
    const float angle
) {
    return sinf(angle);
}

[[nodiscard]]
static inline JML_Vec2d JML_sinVec2d(
    const JML_Vec2d angle
) {
    return JML_vec2d(
        sin(angle.x),
        sin(angle.y)
    );
}

[[nodiscard]]
static inline JML_Vec2f JML_sinVec2f(
    const JML_Vec2f angle
) {
    return JML_vec2f(
        sinf(angle.x),
        sinf(angle.y)
    );
}

[[nodiscard]]
static inline JML_Vec3d JML_sinVec3d(
    const JML_Vec3d angle
) {
    return JML_vec3d(
        sin(angle.x),
        sin(angle.y),
        sin(angle.z)
    );
}

[[nodiscard]]
static inline JML_Vec3f JML_sinVec3f(
    const JML_Vec3f angle
) {
    return JML_vec3f(
        sinf(angle.x),
        sinf(angle.y),
        sinf(angle.z)
    );
}

[[nodiscard]]
static inline JML_Vec4d JML_sinVec4d(
    const JML_Vec4d angle
) {
    return JML_vec4d(
        sin(angle.x),
        sin(angle.y),
        sin(angle.z),
        sin(angle.w)
    );
}

[[nodiscard]]
static inline JML_Vec4f JML_sinVec4f(
    const JML_Vec4f angle
) {
    return JML_vec4f(
        sinf(angle.x),
        sinf(angle.y),
        sinf(angle.z),
        sinf(angle.w)
    );
}

#define JML_sin_GENERIC_1(angle) _Generic( \
    (angle),                               \
    double: JML_sinD,                      \
    float: JML_sinF,                       \
    JML_Vec2d: JML_sinVec2d,               \
    JML_Vec2f: JML_sinVec2f,               \
    JML_Vec3d: JML_sinVec3d,               \
    JML_Vec3f: JML_sinVec3f,               \
    JML_Vec4d: JML_sinVec4d,               \
    JML_Vec4f: JML_sinVec4f,               \
    default: JML_INVALID_ARGUMENT_TYPES    \
)(angle)

#define JML_sin(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_sin_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_SIN_H

#ifdef JML_WITHOUT_PREFIX

#define sin(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_sin_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
