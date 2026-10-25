#ifndef JML_CONSTRUCTORS_VEC3U_H
#define JML_CONSTRUCTORS_VEC3U_H

#include "jml/types/vec2u.h"
#include "jml/types/vec3u.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Vec3u JML_vec3uUVec2u(
    const unsigned arg_0,
    const JML_Vec2u arg_1
) {
    JML_Vec3u result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    return result;
}

[[nodiscard]]
static inline JML_Vec3u JML_vec3uVec2uU(
    const JML_Vec2u arg_0,
    const unsigned arg_1
) {
    JML_Vec3u result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
    return result;
}

#define JML_vec3u_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    unsigned: _Generic(                             \
        (arg_1),                                    \
        JML_Vec2u: JML_vec3uUVec2u,                 \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2u: _Generic(                            \
        (arg_1),                                    \
        unsigned: JML_vec3uVec2uU,                  \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

[[nodiscard]]
static inline JML_Vec3u JML_vec3uUUU(
    const unsigned arg_0,
    const unsigned arg_1,
    const unsigned arg_2
) {
    JML_Vec3u result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
    return result;
}

#define JML_vec3u_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    unsigned: _Generic(                                    \
        (arg_1),                                           \
        unsigned: _Generic(                                \
            (arg_2),                                       \
            unsigned: JML_vec3uUUU,                        \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    default: JML_INVALID_ARGUMENT_TYPES                    \
)(arg_0, arg_1, arg_2)

#define JML_vec3u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC3U_H

#ifdef JML_WITHOUT_PREFIX

#define vec3u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
