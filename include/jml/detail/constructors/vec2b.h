#ifndef JML_DETAIL_CONSTRUCTORS_VEC2B_H
#define JML_DETAIL_CONSTRUCTORS_VEC2B_H

#include "jml/detail/types/vec2b.h"
#include "jml/detail/util.h"

static inline JML_Vec2b JML_vec2bBB(
    const bool arg_0,
    const bool arg_1
) {
    JML_Vec2b result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    return result;
}

#define JML_vec2b_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    bool: _Generic(                                 \
        (arg_1),                                    \
        bool: JML_vec2bBB,                          \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

#define JML_vec2b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC2B_H

#ifndef JML_WITHOUT_PREFIX

#define vec2b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
