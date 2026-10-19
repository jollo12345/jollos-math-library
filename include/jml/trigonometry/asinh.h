#ifndef JML_GEOMETRIC_ASINH_H
#define JML_GEOMETRIC_ASINH_H

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

static inline double JML_asinhD(
    const double arg
) {
    return asinh(arg);
}

static inline float JML_asinhF(
    const float arg
) {
    return asinhf(arg);
}

static inline JML_Vec2d JML_asinhVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        asinh(arg.x),
        asinh(arg.y)
    );
}

static inline JML_Vec2f JML_asinhVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        asinhf(arg.x),
        asinhf(arg.y)
    );
}

static inline JML_Vec3d JML_asinhVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        asinh(arg.x),
        asinh(arg.y),
        asinh(arg.z)
    );
}

static inline JML_Vec3f JML_asinhVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        asinhf(arg.x),
        asinhf(arg.y),
        asinhf(arg.z)
    );
}

static inline JML_Vec4d JML_asinhVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        asinh(arg.x),
        asinh(arg.y),
        asinh(arg.z),
        asinh(arg.w)
    );
}

static inline JML_Vec4f JML_asinhVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        asinhf(arg.x),
        asinhf(arg.y),
        asinhf(arg.z),
        asinhf(arg.w)
    );
}

#define JML_asinh_GENERIC_1(arg) _Generic( \
    (arg),                                 \
    double: JML_asinhD,                    \
    float: JML_asinhF,                     \
    JML_Vec2d: JML_asinhVec2d,             \
    JML_Vec2f: JML_asinhVec2f,             \
    JML_Vec3d: JML_asinhVec3d,             \
    JML_Vec3f: JML_asinhVec3f,             \
    JML_Vec4d: JML_asinhVec4d,             \
    JML_Vec4f: JML_asinhVec4f,             \
    default: (void (*)(void))0             \
)(arg)

#define JML_asinh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_asinh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ASINH_H

#ifdef JML_WITHOUT_PREFIX

#define asinh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_asinh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
