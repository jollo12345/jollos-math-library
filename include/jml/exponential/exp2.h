#ifndef JML_EXPONENTIAL_EXP_2_H
#define JML_EXPONENTIAL_EXP_2_H

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
static inline double JML_exp2D(
    const double exponent
) {
    return exp2(exponent);
}

[[nodiscard]]
static inline float JML_exp2F(
    const float exponent
) {
    return exp2f(exponent);
}

[[nodiscard]]
static inline JML_Vec2d JML_exp2Vec2d(
    const JML_Vec2d exponent
) {
    return JML_vec2d(exp2(exponent.x), exp2(exponent.y));
}

[[nodiscard]]
static inline JML_Vec2f JML_exp2Vec2f(
    const JML_Vec2f exponent
) {
    return JML_vec2f(exp2f(exponent.x), exp2f(exponent.y));
}

[[nodiscard]]
static inline JML_Vec3d JML_exp2Vec3d(
    const JML_Vec3d exponent
) {
    return JML_vec3d(exp2(exponent.x), exp2(exponent.y), exp2(exponent.z));
}

[[nodiscard]]
static inline JML_Vec3f JML_exp2Vec3f(
    const JML_Vec3f exponent
) {
    return JML_vec3f(exp2f(exponent.x), exp2f(exponent.y), exp2f(exponent.z));
}

[[nodiscard]]
static inline JML_Vec4d JML_exp2Vec4d(
    const JML_Vec4d exponent
) {
    return JML_vec4d(exp2(exponent.x), exp2(exponent.y), exp2(exponent.z), exp2(exponent.w));
}

[[nodiscard]]
static inline JML_Vec4f JML_exp2Vec4f(
    const JML_Vec4f exponent
) {
    return JML_vec4f(exp2f(exponent.x), exp2f(exponent.y), exp2f(exponent.z), exp2f(exponent.w));
}

#define JML_exp2_GENERIC_1(exponent) _Generic( \
    (exponent),                                \
    double: JML_exp2D,                         \
    float: JML_exp2F,                          \
    JML_Vec2d: JML_exp2Vec2d,                  \
    JML_Vec2f: JML_exp2Vec2f,                  \
    JML_Vec3d: JML_exp2Vec3d,                  \
    JML_Vec3f: JML_exp2Vec3f,                  \
    JML_Vec4d: JML_exp2Vec4d,                  \
    JML_Vec4f: JML_exp2Vec4f,                  \
    default: JML_INVALID_ARGUMENT_TYPES        \
)(exponent)

#define JML_exp2(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_exp2_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_EXPONENTIAL_EXP_2_H

#ifdef JML_WITHOUT_PREFIX

#define exp2(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_exp2_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
