#ifndef JML_CONSTRUCTORS_VEC3B_H
#define JML_CONSTRUCTORS_VEC3B_H

#include "jml/types/vec2b.h"
#include "jml/types/vec3b.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Vec3b JML_vec3bBVec2b(
    const bool arg_0,
    const JML_Vec2b arg_1
) {
    JML_Vec3b result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    return result;
}

[[nodiscard]]
static inline JML_Vec3b JML_vec3bVec2bB(
    const JML_Vec2b arg_0,
    const bool arg_1
) {
    JML_Vec3b result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
    return result;
}

#define JML_vec3b_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    bool: _Generic(                                 \
        (arg_1),                                    \
        JML_Vec2b: JML_vec3bBVec2b,                 \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2b: _Generic(                            \
        (arg_1),                                    \
        bool: JML_vec3bVec2bB,                      \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

[[nodiscard]]
static inline JML_Vec3b JML_vec3bBBB(
    const bool arg_0,
    const bool arg_1,
    const bool arg_2
) {
    JML_Vec3b result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
    return result;
}

#define JML_vec3b_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    bool: _Generic(                                        \
        (arg_1),                                           \
        bool: _Generic(                                    \
            (arg_2),                                       \
            bool: JML_vec3bBBB,                            \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    default: JML_INVALID_ARGUMENT_TYPES                    \
)(arg_0, arg_1, arg_2)

#define JML_vec3b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC3B_H

#ifdef JML_WITHOUT_PREFIX

#define vec3b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
