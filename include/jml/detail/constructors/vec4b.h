#ifndef JML_DETAIL_CONSTRUCTORS_VEC4B_H
#define JML_DETAIL_CONSTRUCTORS_VEC4B_H

#include "jml/detail/types/vec2b.h"
#include "jml/detail/types/vec3b.h"
#include "jml/detail/types/vec4b.h"
#include "jml/detail/util.h"

static inline JML_Vec4b JML_vec4bBVec3b(
    const bool arg_0,
    const JML_Vec3b arg_1
) {
    JML_Vec4b result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    result.data[3] = arg_1.data[2];
    return result;
}

static inline JML_Vec4b JML_vec4bVec2bVec2b(
    const JML_Vec2b arg_0,
    const JML_Vec2b arg_1
) {
    JML_Vec4b result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1.data[0];
    result.data[3] = arg_1.data[1];
    return result;
}

static inline JML_Vec4b JML_vec4bVec3bB(
    const JML_Vec3b arg_0,
    const bool arg_1
) {
    JML_Vec4b result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_0.data[2];
    result.data[3] = arg_1;
    return result;
}

#define JML_vec4b_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    bool: _Generic(                                 \
        (arg_1),                                    \
        JML_Vec3b: JML_vec4bBVec3b,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2b: _Generic(                            \
        (arg_1),                                    \
        JML_Vec2b: JML_vec4bVec2bVec2b,             \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec3b: _Generic(                            \
        (arg_1),                                    \
        bool: JML_vec4bVec3bB,                      \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec4b JML_vec4bBBVec2b(
    const bool arg_0,
    const bool arg_1,
    const JML_Vec2b arg_2
) {
    JML_Vec4b result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2.data[0];
    result.data[3] = arg_2.data[1];
    return result;
}

static inline JML_Vec4b JML_vec4bBVec2bB(
    const bool arg_0,
    const JML_Vec2b arg_1,
    const bool arg_2
) {
    JML_Vec4b result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    result.data[3] = arg_2;
    return result;
}

static inline JML_Vec4b JML_vec4bVec2bBB(
    const JML_Vec2b arg_0,
    const bool arg_1,
    const bool arg_2
) {
    JML_Vec4b result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1;
    result.data[3] = arg_2;
    return result;
}

#define JML_vec4b_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    bool: _Generic(                                        \
        (arg_1),                                           \
        bool: _Generic(                                    \
            (arg_2),                                       \
            JML_Vec2b: JML_vec4bBBVec2b,                   \
            default: (void (*)(void))0                     \
        ),                                                 \
        JML_Vec2b: _Generic(                               \
            (arg_2),                                       \
            bool: JML_vec4bBVec2bB,                        \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    JML_Vec2b: _Generic(                                   \
        (arg_1),                                           \
        bool: _Generic(                                    \
            (arg_2),                                       \
            bool: JML_vec4bVec2bBB,                        \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

static inline JML_Vec4b JML_vec4bBBBB(
    const bool arg_0,
    const bool arg_1,
    const bool arg_2,
    const bool arg_3
) {
    JML_Vec4b result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2;
    result.data[3] = arg_3;
    return result;
}

#define JML_vec4b_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                      \
    bool: _Generic(                                               \
        (arg_1),                                                  \
        bool: _Generic(                                           \
            (arg_2),                                              \
            bool: _Generic(                                       \
                (arg_3),                                          \
                bool: JML_vec4bBBBB,                              \
                default: (void (*)(void))0                        \
            ),                                                    \
            default: (void (*)(void))0                            \
        ),                                                        \
        default: (void (*)(void))0                                \
    ),                                                            \
    default: (void (*)(void))0                                    \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_vec4b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC4B_H

#ifndef JML_WITHOUT_PREFIX

#define vec4b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
