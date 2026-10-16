#ifndef JML_DETAIL_CONSTRUCTORS_VEC4U_H
#define JML_DETAIL_CONSTRUCTORS_VEC4U_H

#include "jml/detail/types/vec2u.h"
#include "jml/detail/types/vec3u.h"
#include "jml/detail/types/vec4u.h"
#include "jml/detail/util.h"

static inline JML_Vec4u JML_vec4uFVec3u(
    const unsigned arg_0,
    const JML_Vec3u arg_1
) {
    JML_Vec4u result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    result.w = arg_1.z;
    return result;
}

static inline JML_Vec4u JML_vec4uVec2uVec2u(
    const JML_Vec2u arg_0,
    const JML_Vec2u arg_1
) {
    JML_Vec4u result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1.x;
    result.w = arg_1.y;
    return result;
}

static inline JML_Vec4u JML_vec4uVec3uF(
    const JML_Vec3u arg_0,
    const unsigned arg_1
) {
    JML_Vec4u result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_0.z;
    result.w = arg_1;
    return result;
}

#define JML_vec4u_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    unsigned: _Generic(                             \
        (arg_1),                                    \
        JML_Vec3u: JML_vec4uFVec3u,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2u: _Generic(                            \
        (arg_1),                                    \
        JML_Vec2u: JML_vec4uVec2uVec2u,             \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec3u: _Generic(                            \
        (arg_1),                                    \
        unsigned: JML_vec4uVec3uF,                  \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec4u JML_vec4uFFVec2u(
    const unsigned arg_0,
    const unsigned arg_1,
    const JML_Vec2u arg_2
) {
    JML_Vec4u result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2.x;
    result.w = arg_2.y;
    return result;
}

static inline JML_Vec4u JML_vec4uFVec2uF(
    const unsigned arg_0,
    const JML_Vec2u arg_1,
    const unsigned arg_2
) {
    JML_Vec4u result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    result.w = arg_2;
    return result;
}

static inline JML_Vec4u JML_vec4uVec2uFF(
    const JML_Vec2u arg_0,
    const unsigned arg_1,
    const unsigned arg_2
) {
    JML_Vec4u result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
    result.w = arg_2;
    return result;
}

#define JML_vec4u_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    unsigned: _Generic(                                    \
        (arg_1),                                           \
        unsigned: _Generic(                                \
            (arg_2),                                       \
            JML_Vec2u: JML_vec4uFFVec2u,                   \
            default: (void (*)(void))0                     \
        ),                                                 \
        JML_Vec2u: _Generic(                               \
            (arg_2),                                       \
            unsigned: JML_vec4uFVec2uF,                    \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    JML_Vec2u: _Generic(                                   \
        (arg_1),                                           \
        unsigned: _Generic(                                \
            (arg_2),                                       \
            unsigned: JML_vec4uVec2uFF,                    \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

static inline JML_Vec4u JML_vec4uFFFF(
    const unsigned arg_0,
    const unsigned arg_1,
    const unsigned arg_2,
    const unsigned arg_3
) {
    JML_Vec4u result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
    result.w = arg_3;
    return result;
}

#define JML_vec4u_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                      \
    unsigned: _Generic(                                           \
        (arg_1),                                                  \
        unsigned: _Generic(                                       \
            (arg_2),                                              \
            unsigned: _Generic(                                   \
                (arg_3),                                          \
                unsigned: JML_vec4uFFFF,                          \
                default: (void (*)(void))0                        \
            ),                                                    \
            default: (void (*)(void))0                            \
        ),                                                        \
        default: (void (*)(void))0                                \
    ),                                                            \
    default: (void (*)(void))0                                    \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_vec4u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC4U_H

#ifndef JML_WITHOUT_PREFIX

#define vec4u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
