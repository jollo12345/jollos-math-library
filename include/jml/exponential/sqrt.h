#ifndef JML_EXPONENTIAL_SQRT_H
#define JML_EXPONENTIAL_SQRT_H

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

static inline double JML_sqrtD(
    const double arg
) {
    return sqrt(arg);
}

static inline float JML_sqrtF(
    const float arg
) {
    return sqrtf(arg);
}

static inline JML_Vec2d JML_sqrtVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(sqrt(arg.x), sqrt(arg.y));
}

static inline JML_Vec2f JML_sqrtVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(sqrtf(arg.x), sqrtf(arg.y));
}

static inline JML_Vec3d JML_sqrtVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(sqrt(arg.x), sqrt(arg.y), sqrt(arg.z));
}

static inline JML_Vec3f JML_sqrtVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(sqrtf(arg.x), sqrtf(arg.y), sqrtf(arg.z));
}

static inline JML_Vec4d JML_sqrtVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(sqrt(arg.x), sqrt(arg.y), sqrt(arg.z), sqrt(arg.w));
}

static inline JML_Vec4f JML_sqrtVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(sqrtf(arg.x), sqrtf(arg.y), sqrtf(arg.z), sqrtf(arg.w));
}

#define JML_sqrt_GENERIC_1(arg) _Generic( \
    (arg),                                \
    double: JML_sqrtD,                    \
    float: JML_sqrtF,                     \
    JML_Vec2d: JML_sqrtVec2d,             \
    JML_Vec2f: JML_sqrtVec2f,             \
    JML_Vec3d: JML_sqrtVec3d,             \
    JML_Vec3f: JML_sqrtVec3f,             \
    JML_Vec4d: JML_sqrtVec4d,             \
    JML_Vec4f: JML_sqrtVec4f,             \
    default: JML_INVALID_ARGUMENT_TYPES   \
)(arg)

#define JML_sqrt(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_sqrt_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_EXPONENTIAL_SQRT_H

#ifdef JML_WITHOUT_PREFIX

#define sqrt(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_sqrt_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
