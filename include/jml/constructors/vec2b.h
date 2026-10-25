#ifndef JML_CONSTRUCTORS_VEC2B_H
#define JML_CONSTRUCTORS_VEC2B_H

#include "jml/types/vec2b.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Vec2b JML_vec2bBB(
    const bool arg_0,
    const bool arg_1
) {
    JML_Vec2b result;
    result.x = arg_0;
    result.y = arg_1;
    return result;
}

#define JML_vec2b_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    bool: _Generic(                                 \
        (arg_1),                                    \
        bool: JML_vec2bBB,                          \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

#define JML_vec2b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC2B_H

#ifdef JML_WITHOUT_PREFIX

#define vec2b(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2b_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
