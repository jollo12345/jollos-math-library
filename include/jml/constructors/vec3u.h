#ifndef JML_CONSTRUCTORS_VEC3U_H
#define JML_CONSTRUCTORS_VEC3U_H

#include "jml/types/vec2u.h"
#include "jml/types/vec3u.h"
#include "jml/util.h"

static inline JML_Vec3u JML_vec3uFVec2u(
    const unsigned arg_0,
    const JML_Vec2u arg_1
) {
    JML_Vec3u result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    return result;
}

static inline JML_Vec3u JML_vec3uVec2uF(
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
        JML_Vec2u: JML_vec3uFVec2u,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2u: _Generic(                            \
        (arg_1),                                    \
        unsigned: JML_vec3uVec2uF,                  \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec3u JML_vec3uFFF(
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
            unsigned: JML_vec3uFFF,                        \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

#define JML_vec3u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC3U_H

#ifndef JML_WITHOUT_PREFIX

#define vec3u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
