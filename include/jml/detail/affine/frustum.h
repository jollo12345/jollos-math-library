#ifndef JML_DETAIL_AFFINE_FRUSTUM_H
#define JML_DETAIL_AFFINE_FRUSTUM_H

#include "jml/detail/constructors/mat4x4d.h"
#include "jml/detail/constructors/mat4x4f.h"
#include "jml/detail/types/mat4x4d.h"
#include "jml/detail/types/mat4x4f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"

static inline JML_Mat4x4d JML_frustumDDDDDD(
    const double left,
    const double right,
    const double bottom,
    const double top,
    const double near,
    const double far
) {
    const double rl = right - left;
    const double tb = top - bottom;
    const double fn = far - near;

    return JML_mat4x4d(
        2.0 * near / rl, 0.0, 0.0, 0.0,
        0.0, 2.0 * near / tb, 0.0, 0.0,
        (right + left) / rl, (top + bottom) / tb, -(far + near) / fn, -1.0,
        0.0, 0.0, -2.0 * far * near / fn, 0.0
    );
}

static inline JML_Mat4x4f JML_frustumFFFFFF(
    const float left,
    const float right,
    const float bottom,
    const float top,
    const float near,
    const float far
) {
    const float rl = right - left;
    const float tb = top - bottom;
    const float fn = far - near;

    return JML_mat4x4f(
        2.f * near / rl, 0.f, 0.f, 0.f,
        0.f, 2.f * near / tb, 0.f, 0.f,
        (right + left) / rl, (top + bottom) / tb, -(far + near) / fn, -1.f,
        0.f, 0.f, -2.f * far * near / fn, 0.f
    );
}

#define JML_frustum_GENERIC_6(left, right, bottom, top, near, far) _Generic( \
    (left),                                                                  \
    double: _Generic(                                                        \
        (right),                                                             \
        double: _Generic(                                                    \
            (bottom),                                                        \
            double: _Generic(                                                \
                (top),                                                       \
                double: _Generic(                                            \
                    (near),                                                  \
                    double: _Generic(                                        \
                        (far),                                               \
                        double: JML_frustumDDDDDD,                           \
                        default: (void (*)(void))0                           \
                    ),                                                       \
                    default: (void (*)(void))0                               \
                ),                                                           \
                default: (void (*)(void))0                                   \
            ),                                                               \
            default: (void (*)(void))0                                       \
        ),                                                                   \
        default: (void (*)(void))0                                           \
    ),                                                                       \
    float: _Generic(                                                         \
        (right),                                                             \
        float: _Generic(                                                     \
            (bottom),                                                        \
            float: _Generic(                                                 \
                (top),                                                       \
                float: _Generic(                                             \
                    (near),                                                  \
                    float: _Generic(                                         \
                        (far),                                               \
                        float: JML_frustumFFFFFF,                            \
                        default: (void (*)(void))0                           \
                    ),                                                       \
                    default: (void (*)(void))0                               \
                ),                                                           \
                default: (void (*)(void))0                                   \
            ),                                                               \
            default: (void (*)(void))0                                       \
        ),                                                                   \
        default: (void (*)(void))0                                           \
    ),                                                                       \
    default: (void (*)(void))0                                               \
)(left, right, bottom, top, near, far)

#define JML_frustum(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_frustum_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_AFFINE_FRUSTUM_H

#ifndef JML_WITHOUT_PREFIX

#define frustum(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_frustum_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif