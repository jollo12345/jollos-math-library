#ifndef JML_GEOMETRIC_CROSS_H
#define JML_GEOMETRIC_CROSS_H

#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Vec3d JML_crossVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        (arg_0.y * arg_1.z) - (arg_0.z * arg_1.y),
        (arg_0.z * arg_1.x) - (arg_0.x * arg_1.z),
        (arg_0.x * arg_1.y) - (arg_0.y * arg_1.x)
    );
}

[[nodiscard]]
static inline JML_Vec3f JML_crossVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        (arg_0.y * arg_1.z) - (arg_0.z * arg_1.y),
        (arg_0.z * arg_1.x) - (arg_0.x * arg_1.z),
        (arg_0.x * arg_1.y) - (arg_0.y * arg_1.x)
    );
}

#define JML_cross_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    JML_Vec3d: _Generic(                            \
        (arg_1),                                    \
        JML_Vec3d: JML_crossVec3dVec3d,             \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    JML_Vec3f: _Generic(                            \
        (arg_1),                                    \
        JML_Vec3f: JML_crossVec3fVec3f,             \
        default: JML_INVALID_ARGUMENT_TYPES         \
    ),                                              \
    default: JML_INVALID_ARGUMENT_TYPES             \
)(arg_0, arg_1)

#define JML_cross(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_cross_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_GEOMETRIC_CROSS_H

#ifdef JML_WITHOUT_PREFIX

#define cross(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_cross_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
