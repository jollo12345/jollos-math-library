#ifndef JML_CONSTRUCTORS_VEC3I_H
#define JML_CONSTRUCTORS_VEC3I_H

#include "jml/types/vec2i.h"
#include "jml/types/vec3i.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Vec3i JML_vec3iIVec2i(
    const int arg_0,
    const JML_Vec2i arg_1
) {
    JML_Vec3i result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    return result;
}

[[nodiscard]]
static inline JML_Vec3i JML_vec3iVec2iI(
    const JML_Vec2i arg_0,
    const int arg_1
) {
    JML_Vec3i result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
    return result;
}

#define JML_vec3i_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    int: _Generic(                                  \
        (arg_1),                                    \
        JML_Vec2i: JML_vec3iIVec2i,                 \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2i: _Generic(                            \
        (arg_1),                                    \
        int: JML_vec3iVec2iI,                       \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

[[nodiscard]]
static inline JML_Vec3i JML_vec3iIII(
    const int arg_0,
    const int arg_1,
    const int arg_2
) {
    JML_Vec3i result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
    return result;
}

#define JML_vec3i_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    int: _Generic(                                         \
        (arg_1),                                           \
        int: _Generic(                                     \
            (arg_2),                                       \
            int: JML_vec3iIII,                             \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    default: JML_INVALID_ARGUMENT_TYPES                    \
)(arg_0, arg_1, arg_2)

#define JML_vec3i(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3i_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC3I_H

#ifdef JML_WITHOUT_PREFIX

#define vec3i(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3i_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
