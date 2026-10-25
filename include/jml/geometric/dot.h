#ifndef JML_GEOMETRIC_DOT_H
#define JML_GEOMETRIC_DOT_H

#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

[[nodiscard]]
static inline double JML_dotVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return (arg_0.x * arg_1.x) + (arg_0.y * arg_1.y);
}

[[nodiscard]]
static inline float JML_dotVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return (arg_0.x * arg_1.x) + (arg_0.y * arg_1.y);
}

[[nodiscard]]
static inline double JML_dotVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return (arg_0.x * arg_1.x) + (arg_0.y * arg_1.y) + (arg_0.z * arg_1.z);
}

[[nodiscard]]
static inline float JML_dotVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return (arg_0.x * arg_1.x) + (arg_0.y * arg_1.y) + (arg_0.z * arg_1.z);
}

[[nodiscard]]
static inline double JML_dotVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return (arg_0.x * arg_1.x) + (arg_0.y * arg_1.y) + (arg_0.z * arg_1.z) + (arg_0.w * arg_1.w);
}

[[nodiscard]]
static inline float JML_dotVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return (arg_0.x * arg_1.x) + (arg_0.y * arg_1.y) + (arg_0.z * arg_1.z) + (arg_0.w * arg_1.w);
}

#define JML_dot_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                      \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2d: JML_dotVec2dVec2d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2f: JML_dotVec2fVec2f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3d: JML_dotVec3dVec3d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3f: JML_dotVec3fVec3f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4d: JML_dotVec4dVec4d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4f: JML_dotVec4fVec4f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    default: JML_INVALID_ARGUMENT_TYPES           \
)(arg_0, arg_1)

#define JML_dot(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_dot_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_GEOMETRIC_DOT_H

#ifdef JML_WITHOUT_PREFIX

#define dot(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_dot_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
