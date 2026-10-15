#ifndef JML_DETAIL_ARITHMETIC_GREATER_THAN_EQUAL_H
#define JML_DETAIL_ARITHMETIC_GREATER_THAN_EQUAL_H

#include "jml/detail/constructors/vec2b.h"
#include "jml/detail/constructors/vec3b.h"
#include "jml/detail/constructors/vec4b.h"
#include "jml/detail/types/vec2b.h"
#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3b.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec4b.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"

static inline JML_Vec2b JML_greaterThanEqualVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2b(
        (bool)(arg_0.x >= arg_1.x),
        (bool)(arg_0.y >= arg_1.y)
    );
}

static inline JML_Vec2b JML_greaterThanEqualVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2b(
        (bool)(arg_0.x >= arg_1.x),
        (bool)(arg_0.y >= arg_1.y)
    );
}

static inline JML_Vec3b JML_greaterThanEqualVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3b(
        (bool)(arg_0.x >= arg_1.x),
        (bool)(arg_0.y >= arg_1.y),
        (bool)(arg_0.z >= arg_1.z)
    );
}

static inline JML_Vec3b JML_greaterThanEqualVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3b(
        (bool)(arg_0.x >= arg_1.x),
        (bool)(arg_0.y >= arg_1.y),
        (bool)(arg_0.z >= arg_1.z)
    );
}

static inline JML_Vec4b JML_greaterThanEqualVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4b(
        (bool)(arg_0.x >= arg_1.x),
        (bool)(arg_0.y >= arg_1.y),
        (bool)(arg_0.z >= arg_1.z),
        (bool)(arg_0.w >= arg_1.w)
    );
}

static inline JML_Vec4b JML_greaterThanEqualVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4b(
        (bool)(arg_0.x >= arg_1.x),
        (bool)(arg_0.y >= arg_1.y),
        (bool)(arg_0.z >= arg_1.z),
        (bool)(arg_0.w >= arg_1.w)
    );
}

#define JML_greaterThanEqual_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                                   \
    JML_Vec2d: _Generic(                                       \
        (arg_1),                                               \
        JML_Vec2d: JML_greaterThanEqualVec2dVec2d,             \
        default: (void (*)(void))0                             \
    ),                                                         \
    JML_Vec2f: _Generic(                                       \
        (arg_1),                                               \
        JML_Vec2f: JML_greaterThanEqualVec2fVec2f,             \
        default: (void (*)(void))0                             \
    ),                                                         \
    JML_Vec3d: _Generic(                                       \
        (arg_1),                                               \
        JML_Vec3d: JML_greaterThanEqualVec3dVec3d,             \
        default: (void (*)(void))0                             \
    ),                                                         \
    JML_Vec3f: _Generic(                                       \
        (arg_1),                                               \
        JML_Vec3f: JML_greaterThanEqualVec3fVec3f,             \
        default: (void (*)(void))0                             \
    ),                                                         \
    JML_Vec4d: _Generic(                                       \
        (arg_1),                                               \
        JML_Vec4d: JML_greaterThanEqualVec4dVec4d,             \
        default: (void (*)(void))0                             \
    ),                                                         \
    JML_Vec4f: _Generic(                                       \
        (arg_1),                                               \
        JML_Vec4f: JML_greaterThanEqualVec4fVec4f,             \
        default: (void (*)(void))0                             \
    ),                                                         \
    default: (void (*)(void))0                                 \
)(arg_0, arg_1)

#define JML_greaterThanEqual(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_greaterThanEqual_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_ARITHMETIC_GREATER_THAN_EQUAL_H

#ifndef JML_WITHOUT_PREFIX

#define greaterThanEqual(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_greaterThanEqual_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
