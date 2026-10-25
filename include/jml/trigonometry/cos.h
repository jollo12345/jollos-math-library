#ifndef JML_GEOMETRIC_COS_H
#define JML_GEOMETRIC_COS_H

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

static inline double JML_cosD(
    const double arg
) {
    return cos(arg);
}

static inline float JML_cosF(
    const float arg
) {
    return cosf(arg);
}

static inline JML_Vec2d JML_cosVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        cos(arg.x),
        cos(arg.y)
    );
}

static inline JML_Vec2f JML_cosVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        cosf(arg.x),
        cosf(arg.y)
    );
}

static inline JML_Vec3d JML_cosVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        cos(arg.x),
        cos(arg.y),
        cos(arg.z)
    );
}

static inline JML_Vec3f JML_cosVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        cosf(arg.x),
        cosf(arg.y),
        cosf(arg.z)
    );
}

static inline JML_Vec4d JML_cosVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        cos(arg.x),
        cos(arg.y),
        cos(arg.z),
        cos(arg.w)
    );
}

static inline JML_Vec4f JML_cosVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        cosf(arg.x),
        cosf(arg.y),
        cosf(arg.z),
        cosf(arg.w)
    );
}

#define JML_cos_GENERIC_1(arg) _Generic( \
    (arg),                               \
    double: JML_cosD,                    \
    float: JML_cosF,                     \
    JML_Vec2d: JML_cosVec2d,             \
    JML_Vec2f: JML_cosVec2f,             \
    JML_Vec3d: JML_cosVec3d,             \
    JML_Vec3f: JML_cosVec3f,             \
    JML_Vec4d: JML_cosVec4d,             \
    JML_Vec4f: JML_cosVec4f,             \
    default: JML_INVALID_ARGUMENT_TYPES  \
)(arg)

#define JML_cos(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_cos_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_COS_H

#ifdef JML_WITHOUT_PREFIX

#define cos(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_cos_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
