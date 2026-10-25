#ifndef JML_CONSTRUCTORS_VEC3F_H
#define JML_CONSTRUCTORS_VEC3F_H

#include "jml/types/vec2f.h"
#include "jml/types/vec3f.h"
#include "jml/util.h"

static inline JML_Vec3f JML_vec3fFVec2f(
    const float arg_0,
    const JML_Vec2f arg_1
) {
    JML_Vec3f result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    return result;
}

static inline JML_Vec3f JML_vec3fVec2fF(
    const JML_Vec2f arg_0,
    const float arg_1
) {
    JML_Vec3f result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
    return result;
}

#define JML_vec3f_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    float: _Generic(                                \
        (arg_1),                                    \
        JML_Vec2f: JML_vec3fFVec2f,                 \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2f: _Generic(                            \
        (arg_1),                                    \
        float: JML_vec3fVec2fF,                     \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

static inline JML_Vec3f JML_vec3fFFF(
    const float arg_0,
    const float arg_1,
    const float arg_2
) {
    JML_Vec3f result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
    return result;
}

#define JML_vec3f_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    float: _Generic(                                       \
        (arg_1),                                           \
        float: _Generic(                                   \
            (arg_2),                                       \
            float: JML_vec3fFFF,                           \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    default: JML_INVALID_ARGUMENT_TYPES                    \
)(arg_0, arg_1, arg_2)

#define JML_vec3f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC3F_H

#ifdef JML_WITHOUT_PREFIX

#define vec3f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
