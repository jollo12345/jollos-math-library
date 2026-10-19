#ifndef JML_GEOMETRIC_ATAN_H
#define JML_GEOMETRIC_ATAN_H

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
    const double arg
) {
    return atan(arg);
}

static inline float JML_atanF(
    const float arg
) {
    return atanf(arg);
}

static inline JML_Vec2d JML_atanVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        atan(arg.x),
        atan(arg.y)
    );
}

static inline JML_Vec2f JML_atanVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        atanf(arg.x),
        atanf(arg.y)
    );
}

static inline JML_Vec3d JML_atanVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        atan(arg.x),
        atan(arg.y),
        atan(arg.z)
    );
}

static inline JML_Vec3f JML_atanVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        atanf(arg.x),
        atanf(arg.y),
        atanf(arg.z)
    );
}

static inline JML_Vec4d JML_atanVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        atan(arg.x),
        atan(arg.y),
        atan(arg.z),
        atan(arg.w)
    );
}

static inline JML_Vec4f JML_atanVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        atanf(arg.x),
        atanf(arg.y),
        atanf(arg.z),
        atanf(arg.w)
    );
}

#define JML_atan_GENERIC_1(arg) _Generic( \
    (arg),                                \
    double: JML_atanD,                    \
    float: JML_atanF,                     \
    JML_Vec2d: JML_atanVec2d,             \
    JML_Vec2f: JML_atanVec2f,             \
    JML_Vec3d: JML_atanVec3d,             \
    JML_Vec3f: JML_atanVec3f,             \
    JML_Vec4d: JML_atanVec4d,             \
    JML_Vec4f: JML_atanVec4f,             \
    default: (void (*)(void))0            \
)(arg)

static inline double JML_atanDD(
    const double arg_1,
    const double arg_2
) {
    return atan(arg_2 / arg_1);
}

static inline float JML_atanFF(
    const float arg_1,
    const float arg_2
) {
    return atanf(arg_2 / arg_1);
}

static inline JML_Vec2d JML_atanVec2dVec2d(
    const JML_Vec2d arg_1,
    const JML_Vec2d arg_2
) {
    return JML_vec2d(
        atan(arg_2.x / arg_1.x),
        atan(arg_2.y / arg_1.y)
    );
}

static inline JML_Vec2f JML_atanVec2fVec2f(
    const JML_Vec2f arg_1,
    const JML_Vec2f arg_2
) {
    return JML_vec2f(
        atanf(arg_2.x / arg_1.x),
        atanf(arg_2.y / arg_1.y)
    );
}

static inline JML_Vec3d JML_atanVec3dVec3d(
    const JML_Vec3d arg_1,
    const JML_Vec3d arg_2
) {
    return JML_vec3d(
        atan(arg_2.x / arg_1.x),
        atan(arg_2.y / arg_1.y),
        atan(arg_2.z / arg_1.z)
    );
}

static inline JML_Vec3f JML_atanVec3fVec3f(
    const JML_Vec3f arg_1,
    const JML_Vec3f arg_2
) {
    return JML_vec3f(
        atanf(arg_2.x / arg_1.x),
        atanf(arg_2.y / arg_1.y),
        atanf(arg_2.z / arg_1.z)
    );
}

static inline JML_Vec4d JML_atanVec4dVec4d(
    const JML_Vec4d arg_1,
    const JML_Vec4d arg_2
) {
    return JML_vec4d(
        atan(arg_2.x / arg_1.x),
        atan(arg_2.y / arg_1.y),
        atan(arg_2.z / arg_1.z),
        atan(arg_2.w / arg_1.w)
    );
}

static inline JML_Vec4f JML_atanVec4fVec4f(
    const JML_Vec4f arg_1,
    const JML_Vec4f arg_2
) {
    return JML_vec4f(
        atanf(arg_2.x / arg_1.x),
        atanf(arg_2.y / arg_1.y),
        atanf(arg_2.z / arg_1.z),
        atanf(arg_2.w / arg_1.w)
    );
}

#define JML_atan_GENERIC_2(arg_1, arg_2) _Generic( \
    (arg_1),                                       \
    double: _Generic(                              \
        (arg_2),                                   \
        double: JML_atanDD,                        \
        default: (void (*)(void))0                 \
    ),                                             \
    float: _Generic(                               \
        (arg_2),                                   \
        float: JML_atanFF,                         \
        default: (void (*)(void))0                 \
    ),                                             \
    Vec2d: _Generic(                               \
        (arg_2),                                   \
        Vec2d: JML_atanVec2dVec2d,                 \
        default: (void (*)(void))0                 \
    ),                                             \
    Vec2f: _Generic(                               \
        (arg_2),                                   \
        Vec2f: JML_atanVec2fVec2f,                 \
        default: (void (*)(void))0                 \
    ),                                             \
    Vec3d: _Generic(                               \
        (arg_2),                                   \
        Vec3d: JML_atanVec3dVec3d,                 \
        default: (void (*)(void))0                 \
    ),                                             \
    Vec3f: _Generic(                               \
        (arg_2),                                   \
        Vec3f: JML_atanVec3fVec3f,                 \
        default: (void (*)(void))0                 \
    ),                                             \
    Vec4d: _Generic(                               \
        (arg_2),                                   \
        Vec4d: JML_atanVec4dVec4d,                 \
        default: (void (*)(void))0                 \
    ),                                             \
    Vec4f: _Generic(                               \
        (arg_2),                                   \
        Vec4f: JML_atanVec4fVec4f,                 \
        default: (void (*)(void))0                 \
    ),                                             \
    default: (void (*)(void))0                     \
)(arg_1, arg_2)

#define JML_atan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_atan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ATAN_H

#ifdef JML_WITHOUT_PREFIX

#define atan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_atan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
