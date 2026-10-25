#ifndef JML_TRIGONOMETRY_COSH_H
#define JML_TRIGONOMETRY_COSH_H

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

[[nodiscard]]
static inline double JML_coshD(
    const double arg
) {
    return cosh(arg);
}

[[nodiscard]]
static inline float JML_coshF(
    const float arg
) {
    return coshf(arg);
}

[[nodiscard]]
static inline JML_Vec2d JML_coshVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        cosh(arg.x),
        cosh(arg.y)
    );
}

[[nodiscard]]
static inline JML_Vec2f JML_coshVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        coshf(arg.x),
        coshf(arg.y)
    );
}

[[nodiscard]]
static inline JML_Vec3d JML_coshVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        cosh(arg.x),
        cosh(arg.y),
        cosh(arg.z)
    );
}

[[nodiscard]]
static inline JML_Vec3f JML_coshVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        coshf(arg.x),
        coshf(arg.y),
        coshf(arg.z)
    );
}

[[nodiscard]]
static inline JML_Vec4d JML_coshVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        cosh(arg.x),
        cosh(arg.y),
        cosh(arg.z),
        cosh(arg.w)
    );
}

[[nodiscard]]
static inline JML_Vec4f JML_coshVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        coshf(arg.x),
        coshf(arg.y),
        coshf(arg.z),
        coshf(arg.w)
    );
}

#define JML_cosh_GENERIC_1(arg) _Generic( \
    (arg),                                \
    double: JML_coshD,                    \
    float: JML_coshF,                     \
    JML_Vec2d: JML_coshVec2d,             \
    JML_Vec2f: JML_coshVec2f,             \
    JML_Vec3d: JML_coshVec3d,             \
    JML_Vec3f: JML_coshVec3f,             \
    JML_Vec4d: JML_coshVec4d,             \
    JML_Vec4f: JML_coshVec4f,             \
    default: JML_INVALID_ARGUMENT_TYPES   \
)(arg)

#define JML_cosh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_cosh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_COSH_H

#ifdef JML_WITHOUT_PREFIX

#define cosh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_cosh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
