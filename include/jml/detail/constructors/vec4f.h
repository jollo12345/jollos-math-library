#ifndef JML_DETAIL_CONSTRUCTORS_VEC4F_H
#define JML_DETAIL_CONSTRUCTORS_VEC4F_H

#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/util.h"

static inline JML_Vec4f JML_vec4fFVec3f(
    const float arg_0,
    const JML_Vec3f arg_1
) {
    JML_Vec4f result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    result.data[3] = arg_1.data[2];
    return result;
}

static inline JML_Vec4f JML_vec4fVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    JML_Vec4f result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1.data[0];
    result.data[3] = arg_1.data[1];
    return result;
}

static inline JML_Vec4f JML_vec4fVec3fF(
    const JML_Vec3f arg_0,
    const float arg_1
) {
    JML_Vec4f result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_0.data[2];
    result.data[3] = arg_1;
    return result;
}

#define JML_vec4f_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    float: _Generic(                                \
        (arg_1),                                    \
        JML_Vec3f: JML_vec4fFVec3f,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2f: _Generic(                            \
        (arg_1),                                    \
        JML_Vec2f: JML_vec4fVec2fVec2f,             \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec3f: _Generic(                            \
        (arg_1),                                    \
        float: JML_vec4fVec3fF,                     \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec4f JML_vec4fFFVec2f(
    const float arg_0,
    const float arg_1,
    const JML_Vec2f arg_2
) {
    JML_Vec4f result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2.data[0];
    result.data[3] = arg_2.data[1];
    return result;
}

static inline JML_Vec4f JML_vec4fFVec2fF(
    const float arg_0,
    const JML_Vec2f arg_1,
    const float arg_2
) {
    JML_Vec4f result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    result.data[3] = arg_2;
    return result;
}

static inline JML_Vec4f JML_vec4fVec2fFF(
    const JML_Vec2f arg_0,
    const float arg_1,
    const float arg_2
) {
    JML_Vec4f result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1;
    result.data[3] = arg_2;
    return result;
}

#define JML_vec4f_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    float: _Generic(                                       \
        (arg_1),                                           \
        float: _Generic(                                   \
            (arg_2),                                       \
            JML_Vec2f: JML_vec4fFFVec2f,                   \
            default: (void (*)(void))0                     \
        ),                                                 \
        JML_Vec2f: _Generic(                               \
            (arg_2),                                       \
            float: JML_vec4fFVec2fF,                       \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    JML_Vec2f: _Generic(                                   \
        (arg_1),                                           \
        float: _Generic(                                   \
            (arg_2),                                       \
            float: JML_vec4fVec2fFF,                       \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

static inline JML_Vec4f JML_vec4fFFFF(
    const float arg_0,
    const float arg_1,
    const float arg_2,
    const float arg_3
) {
    JML_Vec4f result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2;
    result.data[3] = arg_3;
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
                default: (void (*)(void))0                        \
            ),                                                    \
            default: (void (*)(void))0                            \
        ),                                                        \
        default: (void (*)(void))0                                \
    ),                                                            \
    default: (void (*)(void))0                                    \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_vec4f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC4F_H

#ifndef JML_WITHOUT_PREFIX

#define vec4f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
