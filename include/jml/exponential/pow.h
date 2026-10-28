#ifndef JML_EXPONENTIAL_POW_H
#define JML_EXPONENTIAL_POW_H

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
static inline double JML_powDD(
    const double base,
    const double exponent
) {
    return pow(base, exponent);
}

[[nodiscard]]
static inline float JML_powFF(
    const float base,
    const float exponent
) {
    return powf(base, exponent);
}

[[nodiscard]]
static inline JML_Vec2d JML_powVec2dVec2d(
    const JML_Vec2d base,
    const JML_Vec2d exponent
) {
    return JML_vec2d(pow(base.x, exponent.x), pow(base.y, exponent.y));
}

[[nodiscard]]
static inline JML_Vec2f JML_powVec2fVec2f(
    const JML_Vec2f base,
    const JML_Vec2f exponent
) {
    return JML_vec2f(powf(base.x, exponent.x), powf(base.y, exponent.y));
}

[[nodiscard]]
static inline JML_Vec3d JML_powVec3dVec3d(
    const JML_Vec3d base,
    const JML_Vec3d exponent
) {
    return JML_vec3d(pow(base.x, exponent.x), pow(base.y, exponent.y), pow(base.z, exponent.z));
}

[[nodiscard]]
static inline JML_Vec3f JML_powVec3fVec3f(
    const JML_Vec3f base,
    const JML_Vec3f exponent
) {
    return JML_vec3f(powf(base.x, exponent.x), powf(base.y, exponent.y), powf(base.z, exponent.z));
}

[[nodiscard]]
static inline JML_Vec4d JML_powVec4dVec4d(
    const JML_Vec4d base,
    const JML_Vec4d exponent
) {
    return JML_vec4d(pow(base.x, exponent.x), pow(base.y, exponent.y), pow(base.z, exponent.z), pow(base.w, exponent.w));
}

[[nodiscard]]
static inline JML_Vec4f JML_powVec4fVec4f(
    const JML_Vec4f base,
    const JML_Vec4f exponent
) {
    return JML_vec4f(powf(base.x, exponent.x), powf(base.y, exponent.y), powf(base.z, exponent.z), powf(base.w, exponent.w));
}

#define JML_pow_GENERIC_2(base, exponent) _Generic( \
    (base),                                         \
    double: _Generic(                               \
        (exponent),                                 \
        double: JML_powDD,                          \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    float: _Generic(                                \
        (exponent),                                 \
        float: JML_powFF,                           \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2d: _Generic(                            \
        (exponent),                                 \
        JML_Vec2d: JML_powVec2dVec2d,               \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2f: _Generic(                            \
        (exponent),                                 \
        JML_Vec2f: JML_powVec2fVec2f,               \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec3d: _Generic(                            \
        (exponent),                                 \
        JML_Vec3d: JML_powVec3dVec3d,               \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec3f: _Generic(                            \
        (exponent),                                 \
        JML_Vec3f: JML_powVec3fVec3f,               \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec4d: _Generic(                            \
        (exponent),                                 \
        JML_Vec4d: JML_powVec4dVec4d,               \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec4f: _Generic(                            \
        (exponent),                                 \
        JML_Vec4f: JML_powVec4fVec4f,               \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(base, exponent)

#define JML_pow(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_pow_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_EXPONENTIAL_POW_H

#ifdef JML_WITHOUT_PREFIX

#define pow(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_pow_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
