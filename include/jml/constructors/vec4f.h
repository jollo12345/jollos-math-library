#ifndef JML_CONSTRUCTORS_VEC4F_H
#define JML_CONSTRUCTORS_VEC4F_H

#include "jml/types/vec2f.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

static inline JML_Vec4f JML_vec4fFVec3f(
    const float arg_0,
    const JML_Vec3f arg_1
) {
    JML_Vec4f result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    result.w = arg_1.z;
    return result;
}

static inline JML_Vec4f JML_vec4fVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    JML_Vec4f result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1.x;
    result.w = arg_1.y;
    return result;
}

static inline JML_Vec4f JML_vec4fVec3fF(
    const JML_Vec3f arg_0,
    const float arg_1
) {
    JML_Vec4f result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_0.z;
    result.w = arg_1;
    return result;
}

#define JML_vec4f_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    float: _Generic(                                \
        (arg_1),                                    \
        JML_Vec3f: JML_vec4fFVec3f,                 \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec2f: _Generic(                            \
        (arg_1),                                    \
        JML_Vec2f: JML_vec4fVec2fVec2f,             \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec3f: _Generic(                            \
        (arg_1),                                    \
        float: JML_vec4fVec3fF,                     \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

static inline JML_Vec4f JML_vec4fFFVec2f(
    const float arg_0,
    const float arg_1,
    const JML_Vec2f arg_2
) {
    JML_Vec4f result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2.x;
    result.w = arg_2.y;
    return result;
}

static inline JML_Vec4f JML_vec4fFVec2fF(
    const float arg_0,
    const JML_Vec2f arg_1,
    const float arg_2
) {
    JML_Vec4f result;
    result.x = arg_0;
    result.y = arg_1.x;
    result.z = arg_1.y;
    result.w = arg_2;
    return result;
}

static inline JML_Vec4f JML_vec4fVec2fFF(
    const JML_Vec2f arg_0,
    const float arg_1,
    const float arg_2
) {
    JML_Vec4f result;
    result.x = arg_0.x;
    result.y = arg_0.y;
    result.z = arg_1;
    result.w = arg_2;
    return result;
}

#define JML_vec4f_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    float: _Generic(                                       \
        (arg_1),                                           \
        float: _Generic(                                   \
            (arg_2),                                       \
            JML_Vec2f: JML_vec4fFFVec2f,                   \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        JML_Vec2f: _Generic(                               \
            (arg_2),                                       \
            float: JML_vec4fFVec2fF,                       \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    JML_Vec2f: _Generic(                                   \
        (arg_1),                                           \
        float: _Generic(                                   \
            (arg_2),                                       \
            float: JML_vec4fVec2fFF,                       \
            default: JML_INVALID_ARGUMENT_TYPES            \
        ),                                                 \
        default: JML_INVALID_ARGUMENT_TYPES                \
    ),                                                     \
    default: JML_INVALID_ARGUMENT_TYPES                    \
)(arg_0, arg_1, arg_2)

static inline JML_Vec4f JML_vec4fFFFF(
    const float arg_0,
    const float arg_1,
    const float arg_2,
    const float arg_3
) {
    JML_Vec4f result;
    result.x = arg_0;
    result.y = arg_1;
    result.z = arg_2;
    result.w = arg_3;
    return result;
}

#define JML_vec4f_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                      \
    float: _Generic(                                              \
        (arg_1),                                                  \
        float: _Generic(                                          \
            (arg_2),                                              \
            float: _Generic(                                      \
                (arg_3),                                          \
                float: JML_vec4fFFFF,                             \
                default: JML_INVALID_ARGUMENT_TYPES               \
            ),                                                    \
            default: JML_INVALID_ARGUMENT_TYPES                   \
        ),                                                        \
        default: JML_INVALID_ARGUMENT_TYPES                       \
    ),                                                            \
    default: JML_INVALID_ARGUMENT_TYPES                           \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_vec4f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC4F_H

#ifdef JML_WITHOUT_PREFIX

#define vec4f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
