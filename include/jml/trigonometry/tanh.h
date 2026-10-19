#ifndef JML_GEOMETRIC_TANH_H
#define JML_GEOMETRIC_TANH_H

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

static inline double JML_tanhD(
    const double arg
) {
    return tanh(arg);
}

static inline float JML_tanhF(
    const float arg
) {
    return tanhf(arg);
}

static inline JML_Vec2d JML_tanhVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        tanh(arg.x),
        tanh(arg.y)
    );
}

static inline JML_Vec2f JML_tanhVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        tanhf(arg.x),
        tanhf(arg.y)
    );
}

static inline JML_Vec3d JML_tanhVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        tanh(arg.x),
        tanh(arg.y),
        tanh(arg.z)
    );
}

static inline JML_Vec3f JML_tanhVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        tanhf(arg.x),
        tanhf(arg.y),
        tanhf(arg.z)
    );
}

static inline JML_Vec4d JML_tanhVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        tanh(arg.x),
        tanh(arg.y),
        tanh(arg.z),
        tanh(arg.w)
    );
}

static inline JML_Vec4f JML_tanhVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        tanhf(arg.x),
        tanhf(arg.y),
        tanhf(arg.z),
        tanhf(arg.w)
    );
}

#define JML_tanh_GENERIC_1(arg) _Generic( \
    (arg),                                \
    double: JML_tanhD,                    \
    float: JML_tanhF,                     \
    JML_Vec2d: JML_tanhVec2d,             \
    JML_Vec2f: JML_tanhVec2f,             \
    JML_Vec3d: JML_tanhVec3d,             \
    JML_Vec3f: JML_tanhVec3f,             \
    JML_Vec4d: JML_tanhVec4d,             \
    JML_Vec4f: JML_tanhVec4f,             \
    default: (void (*)(void))0            \
)(arg)

#define JML_tanh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_tanh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_TANH_H

#ifdef JML_WITHOUT_PREFIX

#define tanh(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_tanh_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
