#ifndef JML_TRIGONOMETRY_ACOSH_H
#define JML_TRIGONOMETRY_ACOSH_H

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

static inline double JML_acoshD(
    const double arg
) {
    return acosh(arg);
}

static inline float JML_acoshF(
    const float arg
) {
    return acoshf(arg);
}

static inline JML_Vec2d JML_acoshVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        acosh(arg.x),
        acosh(arg.y)
    );
}

static inline JML_Vec2f JML_acoshVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        acoshf(arg.x),
        acoshf(arg.y)
    );
}

static inline JML_Vec3d JML_acoshVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        acosh(arg.x),
        acosh(arg.y),
        acosh(arg.z)
    );
}

static inline JML_Vec3f JML_acoshVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        acoshf(arg.x),
        acoshf(arg.y),
        acoshf(arg.z)
    );
}

static inline JML_Vec4d JML_acoshVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        acosh(arg.x),
        acosh(arg.y),
        acosh(arg.z),
        acosh(arg.w)
    );
}

static inline JML_Vec4f JML_acoshVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        acoshf(arg.x),
        acoshf(arg.y),
        acoshf(arg.z),
        acoshf(arg.w)
    );
}

#define JML_acosh_GENERIC_1(arg) _Generic( \
    (arg),                                 \
    double: JML_acoshD,                    \
    float: JML_acoshF,                     \
    JML_Vec2d: JML_acoshVec2d,             \
    JML_Vec2f: JML_acoshVec2f,             \
    JML_Vec3d: JML_acoshVec3d,             \
    JML_Vec3f: JML_acoshVec3f,             \
    JML_Vec4d: JML_acoshVec4d,             \
    JML_Vec4f: JML_acoshVec4f,             \
    default: JML_INVALID_ARGUMENT_TYPES    \
)(arg)

#define JML_acosh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_acosh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ACOSH_H

#ifdef JML_WITHOUT_PREFIX

#define acosh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_acosh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
