#ifndef JML_DETAIL_CONSTRUCTORS_VEC3F_H
#define JML_DETAIL_CONSTRUCTORS_VEC3F_H

#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/util.h"

static inline JML_Vec3f JML_vec3fFVec2f(
    const float arg_0,
    const JML_Vec2f arg_1
) {
    JML_Vec3f result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    return result;
}

static inline JML_Vec3f JML_vec3fVec2fF(
    const JML_Vec2f arg_0,
    const float arg_1
) {
    JML_Vec3f result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1;
    return result;
}

#define JML_vec3f_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    float: _Generic(                                \
        (arg_1),                                    \
        JML_Vec2f: JML_vec3fFVec2f,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2f: _Generic(                            \
        (arg_1),                                    \
        float: JML_vec3fVec2fF,                     \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec3f JML_vec3fFFF(
    const float arg_0,
    const float arg_1,
    const float arg_2
) {
    JML_Vec3f result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2;
    return result;
}

#define JML_vec3f_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    float: _Generic(                                       \
        (arg_1),                                           \
        float: _Generic(                                   \
            (arg_2),                                       \
            float: JML_vec3fFFF,                           \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

#define JML_vec3f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC3F_H

#ifndef JML_WITHOUT_PREFIX

#define vec3f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec3f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
