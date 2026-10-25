#ifndef JML_GEOMETRIC_REFLECT_H
#define JML_GEOMETRIC_REFLECT_H

#include "jml/arithmetic/add.h"
#include "jml/arithmetic/mul.h"
#include "jml/arithmetic/sub.h"
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/geometric/dot.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Vec2d JML_reflectVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.0 * JML_dot(arg_0, arg_1)));
}

[[nodiscard]]
static inline JML_Vec2f JML_reflectVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.f * JML_dot(arg_0, arg_1)));
}

[[nodiscard]]
static inline JML_Vec3d JML_reflectVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.0 * JML_dot(arg_0, arg_1)));
}

[[nodiscard]]
static inline JML_Vec3f JML_reflectVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.f * JML_dot(arg_0, arg_1)));
}

[[nodiscard]]
static inline JML_Vec4d JML_reflectVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_sub(arg_0, JML_mul(arg_1, 2.0 * JML_dot(arg_0, arg_1)));
}

[[nodiscard]]
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
        default: JML_INVALID_ARGUMENT_TYPES           \
    ),                                                \
    JML_Vec2f: _Generic(                              \
        (arg_1),                                      \
        JML_Vec2f: JML_reflectVec2fVec2f,             \
        default: JML_INVALID_ARGUMENT_TYPES           \
    ),                                                \
    JML_Vec3d: _Generic(                              \
        (arg_1),                                      \
        JML_Vec3d: JML_reflectVec3dVec3d,             \
        default: JML_INVALID_ARGUMENT_TYPES           \
    ),                                                \
    JML_Vec3f: _Generic(                              \
        (arg_1),                                      \
        JML_Vec3f: JML_reflectVec3fVec3f,             \
        default: JML_INVALID_ARGUMENT_TYPES           \
    ),                                                \
    JML_Vec4d: _Generic(                              \
        (arg_1),                                      \
        JML_Vec4d: JML_reflectVec4dVec4d,             \
        default: JML_INVALID_ARGUMENT_TYPES           \
    ),                                                \
    JML_Vec4f: _Generic(                              \
        (arg_1),                                      \
        JML_Vec4f: JML_reflectVec4fVec4f,             \
        default: JML_INVALID_ARGUMENT_TYPES           \
    ),                                                \
    default: JML_INVALID_ARGUMENT_TYPES               \
)(arg_0, arg_1)

#define JML_reflect(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_reflect_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_GEOMETRIC_REFLECT_H

#ifdef JML_WITHOUT_PREFIX

#define reflect(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_reflect_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
