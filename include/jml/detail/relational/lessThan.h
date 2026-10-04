#ifndef JML_DETAIL_ARITHMETIC_LESS_THAN_H
#define JML_DETAIL_ARITHMETIC_LESS_THAN_H

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

static inline JML_Vec2b JML_lessThanVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2b(
        (bool)(arg_0.data[0] < arg_1.data[0]),
        (bool)(arg_0.data[1] < arg_1.data[1])
    );
}

static inline JML_Vec2b JML_lessThanVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2b(
        (bool)(arg_0.data[0] < arg_1.data[0]),
        (bool)(arg_0.data[1] < arg_1.data[1])
    );
}

static inline JML_Vec3b JML_lessThanVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3b(
        (bool)(arg_0.data[0] < arg_1.data[0]),
        (bool)(arg_0.data[1] < arg_1.data[1]),
        (bool)(arg_0.data[2] < arg_1.data[2])
    );
}

static inline JML_Vec3b JML_lessThanVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3b(
        (bool)(arg_0.data[0] < arg_1.data[0]),
        (bool)(arg_0.data[1] < arg_1.data[1]),
        (bool)(arg_0.data[2] < arg_1.data[2])
    );
}

static inline JML_Vec4b JML_lessThanVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4b(
        (bool)(arg_0.data[0] < arg_1.data[0]),
        (bool)(arg_0.data[1] < arg_1.data[1]),
        (bool)(arg_0.data[2] < arg_1.data[2]),
        (bool)(arg_0.data[3] < arg_1.data[3])
    );
}

static inline JML_Vec4b JML_lessThanVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4b(
        (bool)(arg_0.data[0] < arg_1.data[0]),
        (bool)(arg_0.data[1] < arg_1.data[1]),
        (bool)(arg_0.data[2] < arg_1.data[2]),
        (bool)(arg_0.data[3] < arg_1.data[3])
    );
}

#define JML_lessThan_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                           \
    JML_Vec2d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec2d: JML_lessThanVec2dVec2d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec2f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec2f: JML_lessThanVec2fVec2f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec3d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec3d: JML_lessThanVec3dVec3d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec3f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec3f: JML_lessThanVec3fVec3f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec4d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec4d: JML_lessThanVec4dVec4d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec4f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec4f: JML_lessThanVec4fVec4f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    default: (void (*)(void))0                         \
)(arg_0, arg_1)

#define JML_lessThan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_lessThan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_ARITHMETIC_LESS_THAN_H

#ifndef JML_WITHOUT_PREFIX

#define lessThan(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_lessThan_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
