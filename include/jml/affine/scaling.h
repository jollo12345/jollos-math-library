#ifndef JML_AFFINE_SCALING_H
#define JML_AFFINE_SCALING_H

#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

[[nodiscard]]
static inline JML_Mat4x4d JML_scalingDDD(
    const double x,
    const double y,
    const double z
) {
    return JML_mat4x4d(
        x, 0.0, 0.0, 0.0,
        0.0, y, 0.0, 0.0,
        0.0, 0.0, z, 0.0,
        0.0, 0.0, 0.0, 1.0
    );
}

[[nodiscard]]
static inline JML_Mat4x4f JML_scalingFFF(
    const float x,
    const float y,
    const float z
) {
    return JML_mat4x4f(
        x, 0.f, 0.f, 0.f,
        0.f, y, 0.f, 0.f,
        0.f, 0.f, z, 0.f,
        0.f, 0.f, 0.f, 1.f
    );
}

#define JML_scaling_GENERIC_3(x, y, z) _Generic( \
    (x),                                         \
    double: _Generic(                            \
        (y),                                     \
        double: _Generic(                        \
            (z),                                 \
            double: JML_scalingDDD,              \
            default: JML_INVALID_ARGUMENT_TYPES  \
        ),                                       \
        default: JML_INVALID_ARGUMENT_TYPES      \
    ),                                           \
    float: _Generic(                             \
        (y),                                     \
        float: _Generic(                         \
            (z),                                 \
            float: JML_scalingFFF,               \
            default: JML_INVALID_ARGUMENT_TYPES  \
        ),                                       \
        default: JML_INVALID_ARGUMENT_TYPES      \
    ),                                           \
    default: JML_INVALID_ARGUMENT_TYPES          \
)(x, y, z)

#define JML_scaling(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_scaling_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_AFFINE_SCALING_H

#ifdef JML_WITHOUT_PREFIX

#define scaling(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_scaling_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
