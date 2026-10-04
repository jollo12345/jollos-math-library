#ifndef JML_FETAIL_CONSTRUCTORS_VEC2B_H
#define JML_FETAIL_CONSTRUCTORS_VEC2B_H

#include "jml/detail/types/vec2f.h"
#include "jml/detail/util.h"

static inline JML_Vec2f JML_vec2fBB(
    const float arg_0,
    const float arg_1
) {
    JML_Vec2f result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    return result;
}

#define JML_vec2f_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    float: _Generic(                                \
        (arg_1),                                    \
        float: JML_vec2fBB,                         \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

#define JML_vec2f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_FETAIL_CONSTRUCTORS_VEC2B_H

#ifndef JML_WITHOUT_PREFIX

#define vec2f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
