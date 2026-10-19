#ifndef JML_GEOMETRIC_ASIN_H
#define JML_GEOMETRIC_ASIN_H

#include <math.h>

#include "jml/common/pi.h"
#include "jml/constructors/vec2d.h"
#include "jml/types/vec2d.h"
#include "jml/util.h"

static inline double JML_asinD(
    const double arg
) {
    return asin(arg);
}

static inline float JML_asinF(
    const float arg
) {
    return asinf(arg);
}

static inline JML_Vec2d JML_asinVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        asin(arg.x),
        asin(arg.y)
    );
}

static inline JML_Vec2f JML_asinVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        asinf(arg.x),
        asinf(arg.y)
    );
}

static inline JML_Vec3d JML_asinVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        asin(arg.x),
        asin(arg.y),
        asin(arg.z)
    );
}

static inline JML_Vec3f JML_asinVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        asinf(arg.x),
        asinf(arg.y),
        asinf(arg.z)
    );
}

static inline JML_Vec4d JML_asinVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        asin(arg.x),
        asin(arg.y),
        asin(arg.z),
        asin(arg.w)
    );
}

static inline JML_Vec4f JML_asinVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        asinf(arg.x),
        asinf(arg.y),
        asinf(arg.z),
        asinf(arg.w)
    );
}

#define JML_asin_GENERIC_1(arg) _Generic( \
    (arg),                                \
    double: JML_asinD,                      \
    float: JML_asinF,                       \
    JML_Vec2d: JML_asinVec2d,               \
    JML_Vec2f: JML_asinVec2f,               \
    JML_Vec3d: JML_asinVec3d,               \
    JML_Vec3f: JML_asinVec3f,               \
    JML_Vec4d: JML_asinVec4d,               \
    JML_Vec4f: JML_asinVec4f,               \
    default: (void (*)(void))0              \
)(arg)

#define JML_asin(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_asin_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ASIN_H

#ifdef JML_WITHOUT_PREFIX

#define asin(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_asin_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
