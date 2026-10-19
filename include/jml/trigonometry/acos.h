#ifndef JML_GEOMETRIC_ACOS_H
#define JML_GEOMETRIC_ACOS_H

#include <math.h>

#include "jml/common/pi.h"
#include "jml/constructors/vec2d.h"
#include "jml/types/vec2d.h"
#include "jml/util.h"

static inline double JML_acosD(
    const double arg
) {
    return acos(arg);
}

static inline float JML_acosF(
    const float arg
) {
    return acosf(arg);
}

static inline JML_Vec2d JML_acosVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        acos(arg.x),
        acos(arg.y)
    );
}

static inline JML_Vec2f JML_acosVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        acosf(arg.x),
        acosf(arg.y)
    );
}

static inline JML_Vec3d JML_acosVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        acos(arg.x),
        acos(arg.y),
        acos(arg.z)
    );
}

static inline JML_Vec3f JML_acosVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        acosf(arg.x),
        acosf(arg.y),
        acosf(arg.z)
    );
}

static inline JML_Vec4d JML_acosVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        acos(arg.x),
        acos(arg.y),
        acos(arg.z),
        acos(arg.w)
    );
}

static inline JML_Vec4f JML_acosVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        acosf(arg.x),
        acosf(arg.y),
        acosf(arg.z),
        acosf(arg.w)
    );
}

#define JML_acos_GENERIC_1(arg) _Generic( \
    (arg),                                \
    double: JML_acosD,                      \
    float: JML_acosF,                       \
    JML_Vec2d: JML_acosVec2d,               \
    JML_Vec2f: JML_acosVec2f,               \
    JML_Vec3d: JML_acosVec3d,               \
    JML_Vec3f: JML_acosVec3f,               \
    JML_Vec4d: JML_acosVec4d,               \
    JML_Vec4f: JML_acosVec4f,               \
    default: (void (*)(void))0              \
)(arg)

#define JML_acos(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_acos_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ACOS_H

#ifdef JML_WITHOUT_PREFIX

#define acos(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_acos_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
