#ifndef JML_FETAIL_CONSTRUCTORS_VEC2B_H
#define JML_FETAIL_CONSTRUCTORS_VEC2B_H

#include "jml/detail/types/vec2u.h"
#include "jml/detail/util.h"

static inline JML_Vec2u JML_vec2uBB(
    const unsigned arg_0,
    const unsigned arg_1
) {
    JML_Vec2u result;
    result.x = arg_0;
    result.y = arg_1;
    return result;
}

#define JML_vec2u_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    unsigned: _Generic(                             \
        (arg_1),                                    \
        unsigned: JML_vec2uBB,                      \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

#define JML_vec2u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_FETAIL_CONSTRUCTORS_VEC2B_H

#ifndef JML_WITHOUT_PREFIX

#define vec2u(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2u_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
