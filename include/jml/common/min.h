#ifndef JML_EXPONENTIAL_MIN_H
#define JML_EXPONENTIAL_MIN_H

#include <math.h>

#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec2i.h"
#include "jml/constructors/vec2u.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec3i.h"
#include "jml/constructors/vec3u.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/constructors/vec4i.h"
#include "jml/constructors/vec4u.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec2i.h"
#include "jml/types/vec2u.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec3i.h"
#include "jml/types/vec3u.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/types/vec4i.h"
#include "jml/types/vec4u.h"
#include "jml/util.h"

[[nodiscard]]
static inline double JML_minDD(
    const double arg_0,
    const double arg_1
) {
    return fmin(arg_0, arg_1);
}

[[nodiscard]]
static inline float JML_minFF(
    const float arg_0,
    const float arg_1
) {
    return fminf(arg_0, arg_1);
}

[[nodiscard]]
static inline int JML_minII(
    const int arg_0,
    const int arg_1
) {
    return (arg_0 < arg_1 ? arg_0 : arg_1);
}

[[nodiscard]]
static inline int JML_minUU(
    const unsigned arg_0,
    const unsigned arg_1
) {
    return (arg_0 < arg_1 ? arg_0 : arg_1);
}

[[nodiscard]]
static inline JML_Vec2d JML_minVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        fmin(arg_0.x, arg_1.x),
        fmin(arg_0.y, arg_1.y)
    );
}

[[nodiscard]]
static inline JML_Vec2f JML_minVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        fminf(arg_0.x, arg_1.x),
        fminf(arg_0.y, arg_1.y)
    );
}

[[nodiscard]]
static inline JML_Vec2i JML_minVec2iVec2i(
    const JML_Vec2i arg_0,
    const JML_Vec2i arg_1
) {
    return JML_vec2i(
        (arg_0.x < arg_1.x ? arg_0.x : arg_1.x),
        (arg_0.y < arg_1.y ? arg_0.y : arg_1.y)
    );
}

[[nodiscard]]
static inline JML_Vec2u JML_minVec2uVec2u(
    const JML_Vec2u arg_0,
    const JML_Vec2u arg_1
) {
    return JML_vec2u(
        (arg_0.x < arg_1.x ? arg_0.x : arg_1.x),
        (arg_0.y < arg_1.y ? arg_0.y : arg_1.y)
    );
}

[[nodiscard]]
static inline JML_Vec3d JML_minVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        fmin(arg_0.x, arg_1.x),
        fmin(arg_0.y, arg_1.y),
        fmin(arg_0.z, arg_1.z)
    );
}

[[nodiscard]]
static inline JML_Vec3f JML_minVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        fminf(arg_0.x, arg_1.x),
        fminf(arg_0.y, arg_1.y), fminf(arg_0.z, arg_1.z)
    );
}

[[nodiscard]]
static inline JML_Vec3i JML_minVec3iVec3i(
    const JML_Vec3i arg_0,
    const JML_Vec3i arg_1
) {
    return JML_vec3i(
        (arg_0.x < arg_1.x ? arg_0.x : arg_1.x),
        (arg_0.y < arg_1.y ? arg_0.y : arg_1.y),
        (arg_0.z < arg_1.z ? arg_0.z : arg_1.z)
    );
}

[[nodiscard]]
static inline JML_Vec3u JML_minVec3uVec3u(
    const JML_Vec3u arg_0,
    const JML_Vec3u arg_1
) {
    return JML_vec3u(
        (arg_0.x < arg_1.x ? arg_0.x : arg_1.x),
        (arg_0.y < arg_1.y ? arg_0.y : arg_1.y),
        (arg_0.z < arg_1.z ? arg_0.z : arg_1.z)
    );
}

[[nodiscard]]
static inline JML_Vec4d JML_minVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        fmin(arg_0.x, arg_1.x),
        fmin(arg_0.y, arg_1.y),
        fmin(arg_0.z, arg_1.z),
        fmin(arg_0.w, arg_1.w)
    );
}

[[nodiscard]]
static inline JML_Vec4f JML_minVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        fminf(arg_0.x, arg_1.x),
        fminf(arg_0.y, arg_1.y),
        fminf(arg_0.z, arg_1.z),
        fminf(arg_0.w, arg_1.w)
    );
}

[[nodiscard]]
static inline JML_Vec4i JML_minVec4iVec4i(
    const JML_Vec4i arg_0,
    const JML_Vec4i arg_1
) {
    return JML_vec4i(
        (arg_0.x < arg_1.x ? arg_0.x : arg_1.x),
        (arg_0.y < arg_1.y ? arg_0.y : arg_1.y),
        (arg_0.z < arg_1.z ? arg_0.z : arg_1.z),
        (arg_0.w < arg_1.w ? arg_0.w : arg_1.w)
    );
}

[[nodiscard]]
static inline JML_Vec4u JML_minVec4uVec4u(
    const JML_Vec4u arg_0,
    const JML_Vec4u arg_1
) {
    return JML_vec4u(
        (arg_0.x < arg_1.x ? arg_0.x : arg_1.x),
        (arg_0.y < arg_1.y ? arg_0.y : arg_1.y),
        (arg_0.z < arg_1.z ? arg_0.z : arg_1.z),
        (arg_0.w < arg_1.w ? arg_0.w : arg_1.w)
    );
}

#define JML_min_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                      \
    double: _Generic(                             \
        (arg_1),                                  \
        double: JML_minDD,                        \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    float: _Generic(                              \
        (arg_1),                                  \
        float: JML_minFF,                         \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    int: _Generic(                                \
        (arg_1),                                  \
        int: JML_minII,                           \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    unsigned: _Generic(                           \
        (arg_1),                                  \
        unsigned: JML_minUU,                      \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2d: JML_minVec2dVec2d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2f: JML_minVec2fVec2f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2i: JML_minVec2iVec2i,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2u: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2u: JML_minVec2uVec2u,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3d: JML_minVec3dVec3d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3f: JML_minVec3fVec3f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3i: JML_minVec3iVec3i,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3u: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3u: JML_minVec3uVec3u,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4d: JML_minVec4dVec4d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4f: JML_minVec4fVec4f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4i: JML_minVec4iVec4i,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4u: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4u: JML_minVec4uVec4u,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    default: JML_INVALID_ARGUMENT_TYPES           \
)(arg_0, arg_1)

#define JML_min(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_min_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_EXPONENTIAL_MIN_H

#ifdef JML_WITHOUT_PREFIX

#define min(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_min_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
