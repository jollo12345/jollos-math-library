#ifndef JML_DETAIL_CONSTRUCTORS_VEC3B_H
#define JML_DETAIL_CONSTRUCTORS_VEC3B_H

#include "jml/detail/types/vec2b.h"
#include "jml/detail/types/vec3b.h"
#include "jml/detail/util.h"

static inline JML_Vec3b JML_vec3bBVec2b(
    const bool arg_0,
    const JML_Vec2b arg_1
) {
    JML_Vec3b result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    return result;
}

static inline JML_Vec3b JML_vec3bVec2bB(
    const JML_Vec2b arg_0,
    const bool arg_1
) {
    JML_Vec3b result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1;
    return result;
}

#define JML_vec3b_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    bool: _Generic(                                 \
        (arg_1),                                    \
        JML_Vec2b: JML_vec3bBVec2b,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2b: _Generic(                            \
        (arg_1),                                    \
        bool: JML_vec3bVec2bB,                      \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec3b JML_vec3bBBB(
    const bool arg_0,
    const bool arg_1,
    const bool arg_2
) {
    JML_Vec3b result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2;
    return result;
}

#define JML_vec3b_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    bool: _Generic(                                        \
        (arg_1),                                           \
        bool: _Generic(                                    \
            (arg_2),                                       \
            bool: JML_vec3bBBB,                            \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

#define JML_vec3b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC3B_H

#ifndef JML_WITHOUT_PREFIX

#define vec3b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
