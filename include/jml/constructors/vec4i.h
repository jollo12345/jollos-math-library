#ifndef JML_CONSTRUCTORS_VEC4I_H
#define JML_CONSTRUCTORS_VEC4I_H

#include "jml/types/vec2i.h"
#include "jml/types/vec3i.h"
#include "jml/types/vec4i.h"
#include "jml/util.h"

static inline JML_Vec4i JML_vec4iIVec3i(
    const int arg_0,
    const JML_Vec3i arg_1
) {
    JML_Vec4i result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    result.w = arg_1.z;
    return result;
}

static inline JML_Vec4i JML_vec4iVec2iVec2i(
    const JML_Vec2i arg_0,
    const JML_Vec2i arg_1
) {
    JML_Vec4i result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1.x;
    result.w = arg_1.y;
    return result;
}

static inline JML_Vec4i JML_vec4iVec3iI(
    const JML_Vec3i arg_0,
    const int arg_1
) {
    JML_Vec4i result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_0.z;
    result.w = arg_1;
    return result;
}

#define JML_vec4i_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    int: _Generic(                                  \
        (arg_1),                                    \
        JML_Vec3i: JML_vec4iIVec3i,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2i: _Generic(                            \
        (arg_1),                                    \
        JML_Vec2i: JML_vec4iVec2iVec2i,             \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec3i: _Generic(                            \
        (arg_1),                                    \
        int: JML_vec4iVec3iI,                       \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec4i JML_vec4iIIVec2i(
    const int arg_0,
    const int arg_1,
    const JML_Vec2i arg_2
) {
    JML_Vec4i result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2.x;
    result.w = arg_2.y;
    return result;
}

static inline JML_Vec4i JML_vec4iIVec2iI(
    const int arg_0,
    const JML_Vec2i arg_1,
    const int arg_2
) {
    JML_Vec4i result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    result.w = arg_2;
    return result;
}

static inline JML_Vec4i JML_vec4iVec2iII(
    const JML_Vec2i arg_0,
    const int arg_1,
    const int arg_2
) {
    JML_Vec4i result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
    result.w = arg_2;
    return result;
}

#define JML_vec4i_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    int: _Generic(                                         \
        (arg_1),                                           \
        int: _Generic(                                     \
            (arg_2),                                       \
            JML_Vec2i: JML_vec4iIIVec2i,                   \
            default: (void (*)(void))0                     \
        ),                                                 \
        JML_Vec2i: _Generic(                               \
            (arg_2),                                       \
            int: JML_vec4iIVec2iI,                         \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    JML_Vec2i: _Generic(                                   \
        (arg_1),                                           \
        int: _Generic(                                     \
            (arg_2),                                       \
            int: JML_vec4iVec2iII,                         \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

static inline JML_Vec4i JML_vec4iIIII(
    const int arg_0,
    const int arg_1,
    const int arg_2,
    const int arg_3
) {
    JML_Vec4i result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
    result.w = arg_3;
    return result;
}

#define JML_vec4i_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                      \
    int: _Generic(                                                \
        (arg_1),                                                  \
        int: _Generic(                                            \
            (arg_2),                                              \
            int: _Generic(                                        \
                (arg_3),                                          \
                int: JML_vec4iIIII,                               \
                default: (void (*)(void))0                        \
            ),                                                    \
            default: (void (*)(void))0                            \
        ),                                                        \
        default: (void (*)(void))0                                \
    ),                                                            \
    default: (void (*)(void))0                                    \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_vec4i(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4i_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC4I_H

#ifdef JML_WITHOUT_PREFIX

#define vec4i(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4i_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
