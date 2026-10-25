#ifndef JML_CONSTRUCTORS_VEC2I_H
#define JML_CONSTRUCTORS_VEC2I_H

#include "jml/types/vec2i.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Vec2i JML_vec2iII(
    const int arg_0,
    const int arg_1
) {
    JML_Vec2i result;
    result.x = arg_0;
    result.y = arg_1;
    return result;
}

#define JML_vec2i_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    int: _Generic(                                  \
        (arg_1),                                    \
        int: JML_vec2iII,                           \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

#define JML_vec2i(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2i_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_CONSTRUCTORS_VEC2I_H

#ifdef JML_WITHOUT_PREFIX

#define vec2i(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2i_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
