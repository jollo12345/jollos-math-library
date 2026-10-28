#ifndef JML_EXPONENTIAL_EXP_H
#define JML_EXPONENTIAL_EXP_H

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
static inline double JML_expD(
    const double exponent
) {
    return exp(exponent);
}

[[nodiscard]]
static inline float JML_expF(
    const float exponent
) {
    return expf(exponent);
}

[[nodiscard]]
static inline JML_Vec2d JML_expVec2d(
    const JML_Vec2d exponent
) {
    return JML_vec2d(exp(exponent.x), exp(exponent.y));
}

[[nodiscard]]
static inline JML_Vec2f JML_expVec2f(
    const JML_Vec2f exponent
) {
    return JML_vec2f(expf(exponent.x), expf(exponent.y));
}

[[nodiscard]]
static inline JML_Vec3d JML_expVec3d(
    const JML_Vec3d exponent
) {
    return JML_vec3d(exp(exponent.x), exp(exponent.y), exp(exponent.z));
}

[[nodiscard]]
static inline JML_Vec3f JML_expVec3f(
    const JML_Vec3f exponent
) {
    return JML_vec3f(expf(exponent.x), expf(exponent.y), expf(exponent.z));
}

[[nodiscard]]
static inline JML_Vec4d JML_expVec4d(
    const JML_Vec4d exponent
) {
    return JML_vec4d(exp(exponent.x), exp(exponent.y), exp(exponent.z), exp(exponent.w));
}

[[nodiscard]]
static inline JML_Vec4f JML_expVec4f(
    const JML_Vec4f exponent
) {
    return JML_vec4f(expf(exponent.x), expf(exponent.y), expf(exponent.z), expf(exponent.w));
}

#define JML_exp_GENERIC_1(exponent) _Generic( \
    (exponent),                               \
    double: JML_expD,                         \
    float: JML_expF,                          \
    JML_Vec2d: JML_expVec2d,                  \
    JML_Vec2f: JML_expVec2f,                  \
    JML_Vec3d: JML_expVec3d,                  \
    JML_Vec3f: JML_expVec3f,                  \
    JML_Vec4d: JML_expVec4d,                  \
    JML_Vec4f: JML_expVec4f,                  \
    default: JML_INVALID_ARGUMENT_TYPES       \
)(exponent)

#define JML_exp(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_exp_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_EXPONENTIAL_EXP_H

#ifdef JML_WITHOUT_PREFIX

#define exp(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_exp_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
