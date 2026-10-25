#ifndef JML_CONSTRUCTORS_VEC4B_H
#define JML_CONSTRUCTORS_VEC4B_H

#include "jml/types/vec2b.h"
#include "jml/types/vec3b.h"
#include "jml/types/vec4b.h"
#include "jml/util.h"

static inline JML_Vec4b JML_vec4bBVec3b(
    const bool arg_0,
    const JML_Vec3b arg_1
) {
    JML_Vec4b result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    result.w = arg_1.z;
    return result;
}

static inline JML_Vec4b JML_vec4bVec2bVec2b(
    const JML_Vec2b arg_0,
    const JML_Vec2b arg_1
) {
    JML_Vec4b result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1.x;
    result.w = arg_1.y;
    return result;
}

static inline JML_Vec4b JML_vec4bVec3bB(
    const JML_Vec3b arg_0,
    const bool arg_1
) {
    JML_Vec4b result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_0.z;
    result.w = arg_1;
    return result;
}

#define JML_vec4b_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    bool: _Generic(                                 \
        (arg_1),                                    \
        JML_Vec3b: JML_vec4bBVec3b,                 \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2b: _Generic(                            \
        (arg_1),                                    \
        JML_Vec2b: JML_vec4bVec2bVec2b,             \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec3b: _Generic(                            \
        (arg_1),                                    \
        bool: JML_vec4bVec3bB,                      \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

static inline JML_Vec4b JML_vec4bBBVec2b(
    const bool arg_0,
    const bool arg_1,
    const JML_Vec2b arg_2
) {
    JML_Vec4b result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2.x;
    result.w = arg_2.y;
    return result;
}

static inline JML_Vec4b JML_vec4bBVec2bB(
    const bool arg_0,
    const JML_Vec2b arg_1,
    const bool arg_2
) {
    JML_Vec4b result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    result.w = arg_2;
    return result;
}

static inline JML_Vec4b JML_vec4bVec2bBB(
    const JML_Vec2b arg_0,
    const bool arg_1,
    const bool arg_2
) {
    JML_Vec4b result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
    result.w = arg_2;
    return result;
}

#define JML_vec4b_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    bool: _Generic(                                        \
        (arg_1),                                           \
        bool: _Generic(                                    \
            (arg_2),                                       \
            JML_Vec2b: JML_vec4bBBVec2b,                   \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        JML_Vec2b: _Generic(                               \
            (arg_2),                                       \
            bool: JML_vec4bBVec2bB,                        \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    JML_Vec2b: _Generic(                                   \
        (arg_1),                                           \
        bool: _Generic(                                    \
            (arg_2),                                       \
            bool: JML_vec4bVec2bBB,                        \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    default: JML_INVALID_ARGUMENT_TYPES                    \
)(arg_0, arg_1, arg_2)

static inline JML_Vec4b JML_vec4bBBBB(
    const bool arg_0,
    const bool arg_1,
    const bool arg_2,
    const bool arg_3
) {
    JML_Vec4b result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
    result.w = arg_3;
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
                default: JML_INVALID_ARGUMENT_TYPES               \
            ),                                                    \
            default: JML_INVALID_ARGUMENT_TYPES                   \
        ),                                                        \
        default: JML_INVALID_ARGUMENT_TYPES                       \
    ),                                                            \
    default: JML_INVALID_ARGUMENT_TYPES                           \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_vec4b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC4B_H

#ifdef JML_WITHOUT_PREFIX

#define vec4b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
