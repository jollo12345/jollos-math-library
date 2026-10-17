#ifndef JML_RELATIONAL_ANY_H
#define JML_RELATIONAL_ANY_H

#include "jml/types/vec2b.h"
#include "jml/types/vec3b.h"
#include "jml/types/vec4b.h"
#include "jml/util.h"

static inline bool JML_anyVec2b(
    const JML_Vec2b arg
) {
    return (bool)(arg.x || arg.y);
}

static inline bool JML_anyVec3b(
    const JML_Vec3b arg
) {
    return (bool)(arg.x || arg.y || arg.z);
}

static inline bool JML_anyVec4b(
    const JML_Vec4b arg
) {
    return (bool)(arg.x || arg.y || arg.z || arg.w);
}

#define JML_any_GENERIC_1(arg) _Generic( \
    (arg),                               \
    JML_Vec2b: JML_anyVec2b,             \
    JML_Vec3b: JML_anyVec3b,             \
    JML_Vec4b: JML_anyVec4b,             \
    default: (void (*)(void))0           \
)(arg_0, arg_1)

#define JML_any(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_any_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_RELATIONAL_ANY_H

#ifndef JML_WITHOUT_PREFIX

#define any(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_any_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
