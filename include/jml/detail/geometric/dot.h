#ifndef JML_DETAIL_GEOMETRIC_DOT_H
#define JML_DETAIL_GEOMETRIC_DOT_H

#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/util.h"

static inline double JML_dotVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return arg_0.data[0] * arg_1.data[0] + arg_0.data[1] * arg_1.data[1];
}

static inline float JML_dotVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return arg_0.data[0] * arg_1.data[0] + arg_0.data[1] * arg_1.data[1];
}

static inline double JML_dotVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return arg_0.data[0] * arg_1.data[0] + arg_0.data[1] * arg_1.data[1] + arg_0.data[2] * arg_1.data[2];
}

static inline float JML_dotVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return arg_0.data[0] * arg_1.data[0] + arg_0.data[1] * arg_1.data[1] + arg_0.data[2] * arg_1.data[2];
}

static inline double JML_dotVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return arg_0.data[0] * arg_1.data[0] + arg_0.data[1] * arg_1.data[1] + arg_0.data[2] * arg_1.data[2] + arg_0.data[3] * arg_1.data[3];
}

static inline float JML_dotVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return arg_0.data[0] * arg_1.data[0] + arg_0.data[1] * arg_1.data[1] + arg_0.data[2] * arg_1.data[2] + arg_0.data[3] * arg_1.data[3];
}

#define JML_dot_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                      \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2d: JML_dotVec2dVec2d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2f: JML_dotVec2fVec2f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3d: JML_dotVec3dVec3d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3f: JML_dotVec3fVec3f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4d: JML_dotVec4dVec4d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4f: JML_dotVec4fVec4f,             \
        default: (void (*)(void))0                \
    ),                                            \
    default: (void (*)(void))0                    \
)(arg_0, arg_1)

#define JML_dot(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_dot_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_DOT_H

#ifndef JML_WITHOUT_PREFIX

#define dot(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_dot_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
