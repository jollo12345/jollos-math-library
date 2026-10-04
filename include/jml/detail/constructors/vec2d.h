#ifndef JML_DETAIL_CONSTRUCTORS_VEC2D_H
#define JML_DETAIL_CONSTRUCTORS_VEC2D_H

#include "jml/detail/types/vec2d.h"
#include "jml/detail/util.h"

static inline JML_Vec2d JML_vec2dDD(
    const double arg_0,
    const double arg_1
) {
    JML_Vec2d result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    return result;
}

#define JML_vec2d_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    double: _Generic(                               \
        (arg_1),                                    \
        double: JML_vec2dDD,                        \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

#define JML_vec2d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC2D_H

#ifndef JML_WITHOUT_PREFIX

#define vec2d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec2d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
