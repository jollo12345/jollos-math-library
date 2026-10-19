#ifndef JML_GEOMETRIC_SINH_H
#define JML_GEOMETRIC_SINH_H

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

static inline double JML_sinhD(
    const double arg
) {
    return sinh(arg);
}

static inline float JML_sinhF(
    const float arg
) {
    return sinhf(arg);
}

static inline JML_Vec2d JML_sinhVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        sinh(arg.x),
        sinh(arg.y)
    );
}

static inline JML_Vec2f JML_sinhVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        sinhf(arg.x),
        sinhf(arg.y)
    );
}

static inline JML_Vec3d JML_sinhVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        sinh(arg.x),
        sinh(arg.y),
        sinh(arg.z)
    );
}

static inline JML_Vec3f JML_sinhVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        sinhf(arg.x),
        sinhf(arg.y),
        sinhf(arg.z)
    );
}

static inline JML_Vec4d JML_sinhVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        sinh(arg.x),
        sinh(arg.y),
        sinh(arg.z),
        sinh(arg.w)
    );
}

static inline JML_Vec4f JML_sinhVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        sinhf(arg.x),
        sinhf(arg.y),
        sinhf(arg.z),
        sinhf(arg.w)
    );
}

#define JML_sinh_GENERIC_1(arg) _Generic( \
    (arg),                                \
    double: JML_sinhD,                    \
    float: JML_sinhF,                     \
    JML_Vec2d: JML_sinhVec2d,             \
    JML_Vec2f: JML_sinhVec2f,             \
    JML_Vec3d: JML_sinhVec3d,             \
    JML_Vec3f: JML_sinhVec3f,             \
    JML_Vec4d: JML_sinhVec4d,             \
    JML_Vec4f: JML_sinhVec4f,             \
    default: (void (*)(void))0            \
)(arg)

#define JML_sinh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_sinh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_SINH_H

#ifdef JML_WITHOUT_PREFIX

#define sinh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_sinh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
