#ifndef JML_EXPONENTIAL_LOG_H
#define JML_EXPONENTIAL_LOG_H

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
static inline double JML_logD(
    const double value
) {
    return log(value);
}

[[nodiscard]]
static inline float JML_logF(
    const float value
) {
    return logf(value);
}

[[nodiscard]]
static inline JML_Vec2d JML_logVec2d(
    const JML_Vec2d value
) {
    return JML_vec2d(log(value.x), log(value.y));
}

[[nodiscard]]
static inline JML_Vec2f JML_logVec2f(
    const JML_Vec2f value
) {
    return JML_vec2f(logf(value.x), logf(value.y));
}

[[nodiscard]]
static inline JML_Vec3d JML_logVec3d(
    const JML_Vec3d value
) {
    return JML_vec3d(log(value.x), log(value.y), log(value.z));
}

[[nodiscard]]
static inline JML_Vec3f JML_logVec3f(
    const JML_Vec3f value
) {
    return JML_vec3f(logf(value.x), logf(value.y), logf(value.z));
}

[[nodiscard]]
static inline JML_Vec4d JML_logVec4d(
    const JML_Vec4d value
) {
    return JML_vec4d(log(value.x), log(value.y), log(value.z), log(value.w));
}

[[nodiscard]]
static inline JML_Vec4f JML_logVec4f(
    const JML_Vec4f value
) {
    return JML_vec4f(logf(value.x), logf(value.y), logf(value.z), logf(value.w));
}

#define JML_log_GENERIC_1(value) _Generic( \
    (value),                               \
    double: JML_logD,                      \
    float: JML_logF,                       \
    JML_Vec2d: JML_logVec2d,               \
    JML_Vec2f: JML_logVec2f,               \
    JML_Vec3d: JML_logVec3d,               \
    JML_Vec3f: JML_logVec3f,               \
    JML_Vec4d: JML_logVec4d,               \
    JML_Vec4f: JML_logVec4f,               \
    default: JML_INVALID_ARGUMENT_TYPES    \
)(value)

#define JML_log(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_log_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_EXPONENTIAL_LOG_H

#ifdef JML_WITHOUT_PREFIX

#define log(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_log_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
