#ifndef JML_TRIGONOMETRY_ATAN_H
#define JML_TRIGONOMETRY_ATAN_H

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

static inline double JML_atanD(
    const double ratio
) {
    return atan(ratio);
}

static inline float JML_atanF(
    const float ratio
) {
    return atanf(ratio);
}

static inline JML_Vec2d JML_atanVec2d(
    const JML_Vec2d ratio
) {
    return JML_vec2d(
        atan(ratio.x),
        atan(ratio.y)
    );
}

static inline JML_Vec2f JML_atanVec2f(
    const JML_Vec2f ratio
) {
    return JML_vec2f(
        atanf(ratio.x),
        atanf(ratio.y)
    );
}

static inline JML_Vec3d JML_atanVec3d(
    const JML_Vec3d ratio
) {
    return JML_vec3d(
        atan(ratio.x),
        atan(ratio.y),
        atan(ratio.z)
    );
}

static inline JML_Vec3f JML_atanVec3f(
    const JML_Vec3f ratio
) {
    return JML_vec3f(
        atanf(ratio.x),
        atanf(ratio.y),
        atanf(ratio.z)
    );
}

static inline JML_Vec4d JML_atanVec4d(
    const JML_Vec4d ratio
) {
    return JML_vec4d(
        atan(ratio.x),
        atan(ratio.y),
        atan(ratio.z),
        atan(ratio.w)
    );
}

static inline JML_Vec4f JML_atanVec4f(
    const JML_Vec4f ratio
) {
    return JML_vec4f(
        atanf(ratio.x),
        atanf(ratio.y),
        atanf(ratio.z),
        atanf(ratio.w)
    );
}

#define JML_atan_GENERIC_1(ratio) _Generic( \
    (ratio),                                \
    double: JML_atanD,                      \
    float: JML_atanF,                       \
    JML_Vec2d: JML_atanVec2d,               \
    JML_Vec2f: JML_atanVec2f,               \
    JML_Vec3d: JML_atanVec3d,               \
    JML_Vec3f: JML_atanVec3f,               \
    JML_Vec4d: JML_atanVec4d,               \
    JML_Vec4f: JML_atanVec4f,               \
    default: JML_INVALID_ARGUMENT_TYPES     \
)(ratio)

#define JML_atan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_atan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ATAN_H

#ifdef JML_WITHOUT_PREFIX

#define atan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_atan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
