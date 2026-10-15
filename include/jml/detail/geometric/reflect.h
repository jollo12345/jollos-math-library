#ifndef JML_DETAIL_GEOMETRIC_REFLECT_H
#define JML_DETAIL_GEOMETRIC_REFLECT_H

#include "jml/detail/arithmetic/add.h"
#include "jml/detail/arithmetic/sub.h"
#include "jml/detail/constructors/vec2d.h"
#include "jml/detail/constructors/vec2f.h"
#include "jml/detail/constructors/vec3d.h"
#include "jml/detail/constructors/vec3f.h"
#include "jml/detail/constructors/vec4d.h"
#include "jml/detail/constructors/vec4f.h"
#include "jml/detail/geometric/dot.h"
#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/util.h"

static inline JML_Vec2d JML_reflectVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.0 * JML_dot(arg_0, arg_1)));
}

static inline JML_Vec2f JML_reflectVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.f * JML_dot(arg_0, arg_1)));
}

static inline JML_Vec3d JML_reflectVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.0 * JML_dot(arg_0, arg_1)));
}

static inline JML_Vec3f JML_reflectVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.f * JML_dot(arg_0, arg_1)));
}

static inline JML_Vec4d JML_reflectVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.0 * JML_dot(arg_0, arg_1)));
}

static inline JML_Vec4f JML_reflectVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.f * JML_dot(arg_0, arg_1)));
}

#define JML_reflect_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                          \
    JML_Vec2d: _Generic(                              \
        (arg_1),                                      \
        JML_Vec2d: JML_reflectVec2dVec2d,             \
        default: (void (*)(void))0                    \
    ),                                                \
    JML_Vec2f: _Generic(                              \
        (arg_1),                                      \
        JML_Vec2f: JML_reflectVec2fVec2f,             \
        default: (void (*)(void))0                    \
    ),                                                \
    JML_Vec3d: _Generic(                              \
        (arg_1),                                      \
        JML_Vec3d: JML_reflectVec3dVec3d,             \
        default: (void (*)(void))0                    \
    ),                                                \
    JML_Vec3f: _Generic(                              \
        (arg_1),                                      \
        JML_Vec3f: JML_reflectVec3fVec3f,             \
        default: (void (*)(void))0                    \
    ),                                                \
    JML_Vec4d: _Generic(                              \
        (arg_1),                                      \
        JML_Vec4d: JML_reflectVec4dVec4d,             \
        default: (void (*)(void))0                    \
    ),                                                \
    JML_Vec4f: _Generic(                              \
        (arg_1),                                      \
        JML_Vec4f: JML_reflectVec4fVec4f,             \
        default: (void (*)(void))0                    \
    ),                                                \
    default: (void (*)(void))0                        \
)(arg_0, arg_1)

#define JML_reflect(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_reflect_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_REFLECT_H

#ifndef JML_WITHOUT_PREFIX

#define reflect(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_reflect_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
