#ifndef JML_GEOMETRIC_ATANH_H
#define JML_GEOMETRIC_ATANH_H

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

static inline double JML_atanhD(
    const double arg
) {
    return atanh(arg);
}

static inline float JML_atanhF(
    const float arg
) {
    return atanhf(arg);
}

static inline JML_Vec2d JML_atanhVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        atanh(arg.x),
        atanh(arg.y)
    );
}

static inline JML_Vec2f JML_atanhVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        atanhf(arg.x),
        atanhf(arg.y)
    );
}

static inline JML_Vec3d JML_atanhVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        atanh(arg.x),
        atanh(arg.y),
        atanh(arg.z)
    );
}

static inline JML_Vec3f JML_atanhVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        atanhf(arg.x),
        atanhf(arg.y),
        atanhf(arg.z)
    );
}

static inline JML_Vec4d JML_atanhVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        atanh(arg.x),
        atanh(arg.y),
        atanh(arg.z),
        atanh(arg.w)
    );
}

static inline JML_Vec4f JML_atanhVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        atanhf(arg.x),
        atanhf(arg.y),
        atanhf(arg.z),
        atanhf(arg.w)
    );
}

#define JML_atanh_GENERIC_1(arg) _Generic( \
    (arg),                                 \
    double: JML_atanhD,                    \
    float: JML_atanhF,                     \
    JML_Vec2d: JML_atanhVec2d,             \
    JML_Vec2f: JML_atanhVec2f,             \
    JML_Vec3d: JML_atanhVec3d,             \
    JML_Vec3f: JML_atanhVec3f,             \
    JML_Vec4d: JML_atanhVec4d,             \
    JML_Vec4f: JML_atanhVec4f,             \
    default: (void (*)(void))0             \
)(arg)

#define JML_atanh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_atanh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ATANH_H

#ifdef JML_WITHOUT_PREFIX

#define atanh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_atanh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
