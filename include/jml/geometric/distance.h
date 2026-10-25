#ifndef JML_GEOMETRIC_DISTANCE_H
#define JML_GEOMETRIC_DISTANCE_H

#include "jml/arithmetic/sub.h"
#include "jml/geometric/length.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

static inline double JML_distanceVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_length(JML_sub(arg_0, arg_1));
}

static inline float JML_distanceVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_length(JML_sub(arg_0, arg_1));
}

static inline double JML_distanceVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_length(JML_sub(arg_0, arg_1));
}

static inline float JML_distanceVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_length(JML_sub(arg_0, arg_1));
}

static inline double JML_distanceVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_length(JML_sub(arg_0, arg_1));
}

static inline float JML_distanceVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_length(JML_sub(arg_0, arg_1));
}

#define JML_distance_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                           \
    JML_Vec2d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec2d: JML_distanceVec2dVec2d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec2f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec2f: JML_distanceVec2fVec2f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec3d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec3d: JML_distanceVec3dVec3d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec3f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec3f: JML_distanceVec3fVec3f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec4d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec4d: JML_distanceVec4dVec4d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec4f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec4f: JML_distanceVec4fVec4f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    default: (void (*)(void))0                         \
)(arg_0, arg_1)

#define JML_distance(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_distance_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_GEOMETRIC_DISTANCE_H

#ifdef JML_WITHOUT_PREFIX

#define distance(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_distance_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
