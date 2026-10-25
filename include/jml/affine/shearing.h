#ifndef JML_AFFINE_SHEARING_H
#define JML_AFFINE_SHEARING_H

#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/util.h"

static inline JML_Mat4x4d JML_shearingDDDDDD(
    const double xy,
    const double xz,
    const double yx,
    const double yz,
    const double zx,
    const double zy
) {
    return JML_mat4x4d(
        1.0, yx, zx, 0.0,
        xy, 1.0, zy, 0.0,
        xz, yz, 1.0, 0.0,
        0.0, 0.0, 0.0, 1.0
    );
}

static inline JML_Mat4x4f JML_shearingFFFFFF(
    const float xy,
    const float xz,
    const float yx,
    const float yz,
    const float zx,
    const float zy
) {
    return JML_mat4x4f(
        1.f, yx, zx, 0.f,
        xy, 1.f, zy, 0.f,
        xz, yz, 1.f, 0.f,
        0.f, 0.f, 0.f, 1.f
    );
}

#define JML_shearing_GENERIC_6(xy, xz, yx, yz, zx, zy) _Generic( \
    (xy),                                                        \
    double: _Generic(                                            \
        (xz),                                                    \
        double: _Generic(                                        \
            (yx),                                                \
            double: _Generic(                                    \
                (yz),                                            \
                double: _Generic(                                \
                    (zx),                                        \
                    double: _Generic(                            \
                        (zy),                                    \
                        double: JML_shearingDDDDDD,              \
                        default: JML_INVALID_ARGUMENT_TYPES      \
                    ),                                           \
                    default: JML_INVALID_ARGUMENT_TYPES          \
                ),                                               \
                default: JML_INVALID_ARGUMENT_TYPES              \
            ),                                                   \
            default: JML_INVALID_ARGUMENT_TYPES                  \
        ),                                                       \
        default: JML_INVALID_ARGUMENT_TYPES                      \
    ),                                                           \
    float: _Generic(                                             \
        (xz),                                                    \
        float: _Generic(                                         \
            (yx),                                                \
            float: _Generic(                                     \
                (yz),                                            \
                float: _Generic(                                 \
                    (zx),                                        \
                    float: _Generic(                             \
                        (zy),                                    \
                        float: JML_shearingFFFFFF,               \
                        default: JML_INVALID_ARGUMENT_TYPES      \
                    ),                                           \
                    default: JML_INVALID_ARGUMENT_TYPES          \
                ),                                               \
                default: JML_INVALID_ARGUMENT_TYPES              \
            ),                                                   \
            default: JML_INVALID_ARGUMENT_TYPES                  \
        ),                                                       \
        default: JML_INVALID_ARGUMENT_TYPES                      \
    ),                                                           \
    default: JML_INVALID_ARGUMENT_TYPES                          \
)(xy, xz, yx, yz, zx, zy)

#define JML_shearing(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_shearing_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_AFFINE_SHEARING_H

#ifdef JML_WITHOUT_PREFIX

#define shearing(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_shearing_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif