#ifndef JML_GEOMETRIC_TAN_H
#define JML_GEOMETRIC_TAN_H

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

static inline double JML_tanD(
    const double angle
) {
    return tan(angle);
}

static inline float JML_tanF(
    const float angle
) {
    return tanf(angle);
}

static inline JML_Vec2d JML_tanVec2d(
    const JML_Vec2d angle
) {
    return JML_vec2d(
        tan(angle.x),
        tan(angle.y)
    );
}

static inline JML_Vec2f JML_tanVec2f(
    const JML_Vec2f angle
) {
    return JML_vec2f(
        tanf(angle.x),
        tanf(angle.y)
    );
}

static inline JML_Vec3d JML_tanVec3d(
    const JML_Vec3d angle
) {
    return JML_vec3d(
        tan(angle.x),
        tan(angle.y),
        tan(angle.z)
    );
}

static inline JML_Vec3f JML_tanVec3f(
    const JML_Vec3f angle
) {
    return JML_vec3f(
        tanf(angle.x),
        tanf(angle.y),
        tanf(angle.z)
    );
}

static inline JML_Vec4d JML_tanVec4d(
    const JML_Vec4d angle
) {
    return JML_vec4d(
        tan(angle.x),
        tan(angle.y),
        tan(angle.z),
        tan(angle.w)
    );
}

static inline JML_Vec4f JML_tanVec4f(
    const JML_Vec4f angle
) {
    return JML_vec4f(
        tanf(angle.x),
        tanf(angle.y),
        tanf(angle.z),
        tanf(angle.w)
    );
}

#define JML_tan_GENERIC_1(angle) _Generic( \
    (angle),                               \
    double: JML_tanD,                      \
    float: JML_tanF,                       \
    JML_Vec2d: JML_tanVec2d,               \
    JML_Vec2f: JML_tanVec2f,               \
    JML_Vec3d: JML_tanVec3d,               \
    JML_Vec3f: JML_tanVec3f,               \
    JML_Vec4d: JML_tanVec4d,               \
    JML_Vec4f: JML_tanVec4f,               \
    default: JML_INVALID_ARGUMENT_TYPES    \
)(angle)

#define JML_tan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_tan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_TAN_H

#ifdef JML_WITHOUT_PREFIX

#define tan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_tan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
