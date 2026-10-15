#ifndef JML_DETAIL_ARITHMETIC_ALL_H
#define JML_DETAIL_ARITHMETIC_ALL_H

#include "jml/detail/types/vec2b.h"
#include "jml/detail/types/vec3b.h"
#include "jml/detail/types/vec4b.h"

static inline bool JML_allVec2b(
    const JML_Vec2b arg
) {
    return (bool)(arg.x && arg.y);
}

static inline bool JML_allVec3b(
    const JML_Vec3b arg
) {
    return (bool)(arg.x && arg.y && arg.z);
}

static inline bool JML_allVec4b(
    const JML_Vec4b arg
) {
    return (bool)(arg.x && arg.y && arg.z && arg.w);
}

#define JML_all_GENERIC_1(arg) _Generic( \
    (arg),                               \
    JML_Vec2b: JML_allVec2b,             \
    JML_Vec3b: JML_allVec3b,             \
    JML_Vec4b: JML_allVec4b,             \
    default: (void (*)(void))0           \
)(arg_0, arg_1)

#define JML_all(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_all_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_ARITHMETIC_ALL_H

#ifndef JML_WITHOUT_PREFIX

#define all(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_all_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
