#ifndef JML_DETAIL_ARITHMETIC_NOT_EQUAL_H
#define JML_DETAIL_ARITHMETIC_NOT_EQUAL_H

#include "jml/detail/constructors/vec2b.h"
#include "jml/detail/constructors/vec3b.h"
#include "jml/detail/constructors/vec4b.h"
#include "jml/detail/types/vec2b.h"
#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec2i.h"
#include "jml/detail/types/vec2u.h"
#include "jml/detail/types/vec3b.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec3i.h"
#include "jml/detail/types/vec3u.h"
#include "jml/detail/types/vec4b.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/types/vec4i.h"
#include "jml/detail/types/vec4u.h"

static inline JML_Vec2b JML_notEqualVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y)
    );
}

static inline JML_Vec2b JML_notEqualVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y)
    );
}

static inline JML_Vec2b JML_notEqualVec2iVec2i(
    const JML_Vec2i arg_0,
    const JML_Vec2i arg_1
) {
    return JML_vec2b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y)
    );
}

static inline JML_Vec2b JML_notEqualVec2uVec2u(
    const JML_Vec2u arg_0,
    const JML_Vec2u arg_1
) {
    return JML_vec2b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y)
    );
}

static inline JML_Vec3b JML_notEqualVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y),
        (bool)(arg_0.z != arg_1.z)
    );
}

static inline JML_Vec3b JML_notEqualVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y),
        (bool)(arg_0.z != arg_1.z)
    );
}

static inline JML_Vec3b JML_notEqualVec3iVec3i(
    const JML_Vec3i arg_0,
    const JML_Vec3i arg_1
) {
    return JML_vec3b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y),
        (bool)(arg_0.z != arg_1.z)
    );
}

static inline JML_Vec3b JML_notEqualVec3uVec3u(
    const JML_Vec3u arg_0,
    const JML_Vec3u arg_1
) {
    return JML_vec3b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y),
        (bool)(arg_0.z != arg_1.z)
    );
}

static inline JML_Vec4b JML_notEqualVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y),
        (bool)(arg_0.z != arg_1.z),
        (bool)(arg_0.w != arg_1.w)
    );
}

static inline JML_Vec4b JML_notEqualVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y),
        (bool)(arg_0.z != arg_1.z),
        (bool)(arg_0.w != arg_1.w)
    );
}

static inline JML_Vec4b JML_notEqualVec4iVec4i(
    const JML_Vec4i arg_0,
    const JML_Vec4i arg_1
) {
    return JML_vec4b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y),
        (bool)(arg_0.z != arg_1.z),
        (bool)(arg_0.w != arg_1.w)
    );
}

static inline JML_Vec4b JML_notEqualVec4uVec4u(
    const JML_Vec4u arg_0,
    const JML_Vec4u arg_1
) {
    return JML_vec4b(
        (bool)(arg_0.x != arg_1.x),
        (bool)(arg_0.y != arg_1.y),
        (bool)(arg_0.z != arg_1.z),
        (bool)(arg_0.w != arg_1.w)
    );
}

#define JML_notEqual_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                           \
    JML_Vec2d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec2d: JML_notEqualVec2dVec2d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec2f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec2f: JML_notEqualVec2fVec2f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec2i: _Generic(                               \
        (arg_1),                                       \
        JML_Vec2i: JML_notEqualVec2iVec2i,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec2u: _Generic(                               \
        (arg_1),                                       \
        JML_Vec2u: JML_notEqualVec2uVec2u,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec3d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec3d: JML_notEqualVec3dVec3d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec3f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec3f: JML_notEqualVec3fVec3f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec3i: _Generic(                               \
        (arg_1),                                       \
        JML_Vec3i: JML_notEqualVec3iVec3i,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec3u: _Generic(                               \
        (arg_1),                                       \
        JML_Vec3u: JML_notEqualVec3uVec3u,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec4d: _Generic(                               \
        (arg_1),                                       \
        JML_Vec4d: JML_notEqualVec4dVec4d,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec4f: _Generic(                               \
        (arg_1),                                       \
        JML_Vec4f: JML_notEqualVec4fVec4f,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec4i: _Generic(                               \
        (arg_1),                                       \
        JML_Vec4i: JML_notEqualVec4iVec4i,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    JML_Vec4u: _Generic(                               \
        (arg_1),                                       \
        JML_Vec4u: JML_notEqualVec4uVec4u,             \
        default: (void (*)(void))0                     \
    ),                                                 \
    default: (void (*)(void))0                         \
)(arg_0, arg_1)

#define JML_notEqual(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_notEqual_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_ARITHMETIC_NOT_EQUAL_H

#ifndef JML_WITHOUT_PREFIX

#define notEqual(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_notEqual_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
