#ifndef JML_EXPONENTIAL_LOG_2_H
#define JML_EXPONENTIAL_LOG_2_H

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
static inline double JML_log2D(
    const double value
) {
    return log2(value);
}

[[nodiscard]]
static inline float JML_log2F(
    const float value
) {
    return log2f(value);
}

[[nodiscard]]
static inline JML_Vec2d JML_log2Vec2d(
    const JML_Vec2d value
) {
    return JML_vec2d(log2(value.x), log2(value.y));
}

[[nodiscard]]
static inline JML_Vec2f JML_log2Vec2f(
    const JML_Vec2f value
) {
    return JML_vec2f(log2f(value.x), log2f(value.y));
}

[[nodiscard]]
static inline JML_Vec3d JML_log2Vec3d(
    const JML_Vec3d value
) {
    return JML_vec3d(log2(value.x), log2(value.y), log2(value.z));
}

[[nodiscard]]
static inline JML_Vec3f JML_log2Vec3f(
    const JML_Vec3f value
) {
    return JML_vec3f(log2f(value.x), log2f(value.y), log2f(value.z));
}

[[nodiscard]]
static inline JML_Vec4d JML_log2Vec4d(
    const JML_Vec4d value
) {
    return JML_vec4d(log2(value.x), log2(value.y), log2(value.z), log2(value.w));
}

[[nodiscard]]
static inline JML_Vec4f JML_log2Vec4f(
    const JML_Vec4f value
) {
    return JML_vec4f(log2f(value.x), log2f(value.y), log2f(value.z), log2f(value.w));
}

#define JML_log2_GENERIC_1(value) _Generic( \
    (value),                                \
    double: JML_log2D,                      \
    float: JML_log2F,                       \
    JML_Vec2d: JML_log2Vec2d,               \
    JML_Vec2f: JML_log2Vec2f,               \
    JML_Vec3d: JML_log2Vec3d,               \
    JML_Vec3f: JML_log2Vec3f,               \
    JML_Vec4d: JML_log2Vec4d,               \
    JML_Vec4f: JML_log2Vec4f,               \
    default: JML_INVALID_ARGUMENT_TYPES     \
)(value)

#define JML_log2(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_log2_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_EXPONENTIAL_LOG_2_H

#ifdef JML_WITHOUT_PREFIX

#define log2(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_log2_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
