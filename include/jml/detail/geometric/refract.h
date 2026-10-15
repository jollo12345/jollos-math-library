#ifndef JML_DETAIL_GEOMETRIC_REFRACT_H
#define JML_DETAIL_GEOMETRIC_REFRACT_H

#include "jml/detail/arithmetic/mul.h"
#include "jml/detail/arithmetic/sub.h"
#include "jml/detail/constructors/vec2d.h"
#include "jml/detail/constructors/vec2f.h"
#include "jml/detail/constructors/vec3d.h"
#include "jml/detail/constructors/vec3f.h"
#include "jml/detail/constructors/vec4d.h"
#include "jml/detail/constructors/vec4f.h"
#include "jml/detail/geometric/dot.h"
#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/util.h"

static inline JML_Vec2d JML_refractVec2dVec2dD(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1,
    const double arg_2
) {
    const double k = 1.0 - arg_2 * arg_2 * (1.0 - JML_dot(arg_0, arg_1) * JML_dot(arg_0, arg_1));
    if (k < 0.0) {
        return JML_vec2d(0.0, 0.0);
    }
    return JML_sub(JML_mul(arg_2, arg_0), JML_mul(arg_2 * JML_dot(arg_1, arg_0) + JML_DETAIL_SQRT_D(k), arg_1));
}

static inline JML_Vec2f JML_refractVec2fVec2fF(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1,
    const float arg_2
) {
    const float k = 1.f - arg_2 * arg_2 * (1.f - JML_dot(arg_0, arg_1) * JML_dot(arg_0, arg_1));
    if (k < 0.f) {
        return JML_vec2f(0.f, 0.f);
    }
    return JML_sub(JML_mul(arg_2, arg_0), JML_mul(arg_2 * JML_dot(arg_1, arg_0) + JML_DETAIL_SQRT_F(k), arg_1));
}

static inline JML_Vec3d JML_refractVec3dVec3dD(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1,
    const double arg_2
) {
    const double k = 1.0 - arg_2 * arg_2 * (1.0 - JML_dot(arg_0, arg_1) * JML_dot(arg_0, arg_1));
    if (k < 0.0) {
        return JML_vec3d(0.0, 0.0, 0.0);
    }
    return JML_sub(JML_mul(arg_2, arg_0), JML_mul(arg_2 * JML_dot(arg_1, arg_0) + JML_DETAIL_SQRT_D(k), arg_1));
}

static inline JML_Vec3f JML_refractVec3fVec3fF(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1,
    const float arg_2
) {
    const float k = 1.f - arg_2 * arg_2 * (1.f - JML_dot(arg_0, arg_1) * JML_dot(arg_0, arg_1));
    if (k < 0.f) {
        return JML_vec3f(0.f, 0.f, 0.f);
    }
    return JML_sub(JML_mul(arg_2, arg_0), JML_mul(arg_2 * JML_dot(arg_1, arg_0) + JML_DETAIL_SQRT_F(k), arg_1));
}

static inline JML_Vec4d JML_refractVec4dVec4dD(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1,
    const double arg_2
) {
    const double k = 1.0 - arg_2 * arg_2 * (1.0 - JML_dot(arg_0, arg_1) * JML_dot(arg_0, arg_1));
    if (k < 0.0) {
        return JML_vec4d(0.0, 0.0, 0.0, 0.0);
    }
    return JML_sub(JML_mul(arg_2, arg_0), JML_mul(arg_2 * JML_dot(arg_1, arg_0) + JML_DETAIL_SQRT_D(k), arg_1));
}

static inline JML_Vec4f JML_refractVec4fVec4fF(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1,
    const float arg_2
) {
    const float k = 1.f - arg_2 * arg_2 * (1.f - JML_dot(arg_0, arg_1) * JML_dot(arg_0, arg_1));
    if (k < 0.f) {
        return JML_vec4f(0.f, 0.f, 0.f, 0.f);
    }
    return JML_sub(JML_mul(arg_2, arg_0), JML_mul(arg_2 * JML_dot(arg_1, arg_0) + JML_DETAIL_SQRT_F(k), arg_1));
}

#define JML_refract_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                                 \
    JML_Vec2d: _Generic(                                     \
        (arg_1),                                             \
        JML_Vec2d: _Generic(                                 \
            (arg_2),                                         \
            double: JML_refractVec2dVec2dD,                  \
            default: (void (*)(void))0                       \
        ),                                                   \
        default: (void (*)(void))0                           \
    ),                                                       \
    JML_Vec2f: _Generic(                                     \
        (arg_1),                                             \
        JML_Vec2f: _Generic(                                 \
            (arg_2),                                         \
            float: JML_refractVec2fVec2fF,                   \
            default: (void (*)(void))0                       \
        ),                                                   \
        default: (void (*)(void))0                           \
    ),                                                       \
    JML_Vec3d: _Generic(                                     \
        (arg_1),                                             \
        JML_Vec3d: _Generic(                                 \
            (arg_2),                                         \
            double: JML_refractVec3dVec3dD,                  \
            default: (void (*)(void))0                       \
        ),                                                   \
        default: (void (*)(void))0                           \
    ),                                                       \
    JML_Vec3f: _Generic(                                     \
        (arg_1),                                             \
        JML_Vec3f: _Generic(                                 \
            (arg_2),                                         \
            float: JML_refractVec3fVec3fF,                   \
            default: (void (*)(void))0                       \
        ),                                                   \
        default: (void (*)(void))0                           \
    ),                                                       \
    JML_Vec4d: _Generic(                                     \
        (arg_1),                                             \
        JML_Vec4d: _Generic(                                 \
            (arg_2),                                         \
            double: JML_refractVec4dVec4dD,                  \
            default: (void (*)(void))0                       \
        ),                                                   \
        default: (void (*)(void))0                           \
    ),                                                       \
    JML_Vec4f: _Generic(                                     \
        (arg_1),                                             \
        JML_Vec4f: _Generic(                                 \
            (arg_2),                                         \
            float: JML_refractVec4fVec4fF,                   \
            default: (void (*)(void))0                       \
        ),                                                   \
        default: (void (*)(void))0                           \
    ),                                                       \
    default: (void (*)(void))0                               \
)(arg_0, arg_1, arg_2)

#define JML_refract(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_refract_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_REFRACT_H

#ifndef JML_WITHOUT_PREFIX

#define refract(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_refract_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
