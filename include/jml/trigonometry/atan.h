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

static inline double JML_atanDD(
    const double adjacent,
    const double opposite
) {
    return atan(opposite / adjacent);
}

static inline float JML_atanFF(
    const float adjacent,
    const float opposite
) {
    return atanf(opposite / adjacent);
}

static inline JML_Vec2d JML_atanVec2dVec2d(
    const JML_Vec2d adjacent,
    const JML_Vec2d opposite
) {
    return JML_vec2d(
        atan(opposite.x / adjacent.x),
        atan(opposite.y / adjacent.y)
    );
}

static inline JML_Vec2f JML_atanVec2fVec2f(
    const JML_Vec2f adjacent,
    const JML_Vec2f opposite
) {
    return JML_vec2f(
        atanf(opposite.x / adjacent.x),
        atanf(opposite.y / adjacent.y)
    );
}

static inline JML_Vec3d JML_atanVec3dVec3d(
    const JML_Vec3d adjacent,
    const JML_Vec3d opposite
) {
    return JML_vec3d(
        atan(opposite.x / adjacent.x),
        atan(opposite.y / adjacent.y),
        atan(opposite.z / adjacent.z)
    );
}

static inline JML_Vec3f JML_atanVec3fVec3f(
    const JML_Vec3f adjacent,
    const JML_Vec3f opposite
) {
    return JML_vec3f(
        atanf(opposite.x / adjacent.x),
        atanf(opposite.y / adjacent.y),
        atanf(opposite.z / adjacent.z)
    );
}

static inline JML_Vec4d JML_atanVec4dVec4d(
    const JML_Vec4d adjacent,
    const JML_Vec4d opposite
) {
    return JML_vec4d(
        atan(opposite.x / adjacent.x),
        atan(opposite.y / adjacent.y),
        atan(opposite.z / adjacent.z),
        atan(opposite.w / adjacent.w)
    );
}

static inline JML_Vec4f JML_atanVec4fVec4f(
    const JML_Vec4f adjacent,
    const JML_Vec4f opposite
) {
    return JML_vec4f(
        atanf(opposite.x / adjacent.x),
        atanf(opposite.y / adjacent.y),
        atanf(opposite.z / adjacent.z),
        atanf(opposite.w / adjacent.w)
    );
}

#define JML_atan_GENERIC_2(adjacent, opposite) _Generic( \
    (adjacent),                                          \
    double: _Generic(                                    \
        (opposite),                                      \
        double: JML_atanDD,                              \
        default: JML_INVALID_ARGUMENT_TYPES              \
    ),                                                   \
    float: _Generic(                                     \
        (opposite),                                      \
        float: JML_atanFF,                               \
        default: JML_INVALID_ARGUMENT_TYPES              \
    ),                                                   \
    Vec2d: _Generic(                                     \
        (opposite),                                      \
        Vec2d: JML_atanVec2dVec2d,                       \
        default: JML_INVALID_ARGUMENT_TYPES              \
    ),                                                   \
    Vec2f: _Generic(                                     \
        (opposite),                                      \
        Vec2f: JML_atanVec2fVec2f,                       \
        default: JML_INVALID_ARGUMENT_TYPES              \
    ),                                                   \
    Vec3d: _Generic(                                     \
        (opposite),                                      \
        Vec3d: JML_atanVec3dVec3d,                       \
        default: JML_INVALID_ARGUMENT_TYPES              \
    ),                                                   \
    Vec3f: _Generic(                                     \
        (opposite),                                      \
        Vec3f: JML_atanVec3fVec3f,                       \
        default: JML_INVALID_ARGUMENT_TYPES              \
    ),                                                   \
    Vec4d: _Generic(                                     \
        (opposite),                                      \
        Vec4d: JML_atanVec4dVec4d,                       \
        default: JML_INVALID_ARGUMENT_TYPES              \
    ),                                                   \
    Vec4f: _Generic(                                     \
        (opposite),                                      \
        Vec4f: JML_atanVec4fVec4f,                       \
        default: JML_INVALID_ARGUMENT_TYPES              \
    ),                                                   \
    default: JML_INVALID_ARGUMENT_TYPES                  \
)(adjacent, opposite)

#define JML_atan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_atan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ATAN_H

#ifdef JML_WITHOUT_PREFIX

#define atan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_atan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
