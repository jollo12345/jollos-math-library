#ifndef JML_CONSTRUCTORS_VEC4U_H
#define JML_CONSTRUCTORS_VEC4U_H

#include "jml/types/vec2u.h"
#include "jml/types/vec3u.h"
#include "jml/types/vec4u.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Vec4u JML_vec4uUVec3u(
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

[[nodiscard]]
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

[[nodiscard]]
static inline JML_Vec4u JML_vec4uVec3uU(
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
        JML_Vec3u: JML_vec4uUVec3u,                 \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2u: _Generic(                            \
        (arg_1),                                    \
        JML_Vec2u: JML_vec4uVec2uVec2u,             \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec3u: _Generic(                            \
        (arg_1),                                    \
        unsigned: JML_vec4uVec3uU,                  \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

[[nodiscard]]
static inline JML_Vec4u JML_vec4uUUVec2u(
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

[[nodiscard]]
static inline JML_Vec4u JML_vec4uUVec2uU(
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

[[nodiscard]]
static inline JML_Vec4u JML_vec4uVec2uUU(
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
            JML_Vec2u: JML_vec4uUUVec2u,                   \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        JML_Vec2u: _Generic(                               \
            (arg_2),                                       \
            unsigned: JML_vec4uUVec2uU,                    \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    JML_Vec2u: _Generic(                                   \
        (arg_1),                                           \
        unsigned: _Generic(                                \
            (arg_2),                                       \
            unsigned: JML_vec4uVec2uUU,                    \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    default: JML_INVALID_ARGUMENT_TYPES                    \
)(arg_0, arg_1, arg_2)

[[nodiscard]]
static inline JML_Vec4u JML_vec4uUUUU(
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
                unsigned: JML_vec4uUUUU,                          \
                default: JML_INVALID_ARGUMENT_TYPES               \
            ),                                                    \
            default: JML_INVALID_ARGUMENT_TYPES                   \
        ),                                                        \
        default: JML_INVALID_ARGUMENT_TYPES                       \
    ),                                                            \
    default: JML_INVALID_ARGUMENT_TYPES                           \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_vec4u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC4U_H

#ifdef JML_WITHOUT_PREFIX

#define vec4u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
