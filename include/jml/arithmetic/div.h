#ifndef JML_ARITHMETIC_DIV_H
#define JML_ARITHMETIC_DIV_H

#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec2i.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec3i.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/constructors/vec4i.h"
#include "jml/types/mat2x2d.h"
#include "jml/types/mat2x2f.h"
#include "jml/types/mat3x3d.h"
#include "jml/types/mat3x3f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec2i.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec3i.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/types/vec4i.h"
#include "jml/util.h"

static inline JML_Mat2x2d JML_divMat2x2dD(
    const JML_Mat2x2d arg_0,
    const double arg_1
) {
    return JML_mat2x2d(
        arg_0.m00 / arg_1,
        arg_0.m01 / arg_1,
        arg_0.m10 / arg_1,
        arg_0.m11 / arg_1
    );
}

static inline JML_Mat2x2f JML_divMat2x2fF(
    const JML_Mat2x2f arg_0,
    const float arg_1
) {
    return JML_mat2x2f(
        arg_0.m00 / arg_1,
        arg_0.m01 / arg_1,
        arg_0.m10 / arg_1,
        arg_0.m11 / arg_1
    );
}

static inline JML_Mat3x3d JML_divMat3x3dD(
    const JML_Mat3x3d arg_0,
    const double arg_1
) {
    return JML_mat3x3d(
        arg_0.m00 / arg_1,
        arg_0.m01 / arg_1,
        arg_0.m02 / arg_1,
        arg_0.m10 / arg_1,
        arg_0.m11 / arg_1,
        arg_0.m12 / arg_1,
        arg_0.m20 / arg_1,
        arg_0.m21 / arg_1,
        arg_0.m22 / arg_1
    );
}

static inline JML_Mat3x3f JML_divMat3x3fF(
    const JML_Mat3x3f arg_0,
    const float arg_1
) {
    return JML_mat3x3f(
        arg_0.m00 / arg_1,
        arg_0.m01 / arg_1,
        arg_0.m02 / arg_1,
        arg_0.m10 / arg_1,
        arg_0.m11 / arg_1,
        arg_0.m12 / arg_1,
        arg_0.m20 / arg_1,
        arg_0.m21 / arg_1,
        arg_0.m22 / arg_1
    );
}

static inline JML_Mat4x4d JML_divMat4x4dD(
    const JML_Mat4x4d arg_0,
    const double arg_1
) {
    return JML_mat4x4d(
        arg_0.m00 / arg_1,
        arg_0.m01 / arg_1,
        arg_0.m02 / arg_1,
        arg_0.m03 / arg_1,
        arg_0.m10 / arg_1,
        arg_0.m11 / arg_1,
        arg_0.m12 / arg_1,
        arg_0.m13 / arg_1,
        arg_0.m20 / arg_1,
        arg_0.m21 / arg_1,
        arg_0.m22 / arg_1,
        arg_0.m23 / arg_1,
        arg_0.m30 / arg_1,
        arg_0.m31 / arg_1,
        arg_0.m32 / arg_1,
        arg_0.m33 / arg_1
    );
}

static inline JML_Mat4x4f JML_divMat4x4fF(
    const JML_Mat4x4f arg_0,
    const float arg_1
) {
    return JML_mat4x4f(
        arg_0.m00 / arg_1,
        arg_0.m01 / arg_1,
        arg_0.m02 / arg_1,
        arg_0.m03 / arg_1,
        arg_0.m10 / arg_1,
        arg_0.m11 / arg_1,
        arg_0.m12 / arg_1,
        arg_0.m13 / arg_1,
        arg_0.m20 / arg_1,
        arg_0.m21 / arg_1,
        arg_0.m22 / arg_1,
        arg_0.m23 / arg_1,
        arg_0.m30 / arg_1,
        arg_0.m31 / arg_1,
        arg_0.m32 / arg_1,
        arg_0.m33 / arg_1
    );
}

static inline JML_Vec2d JML_divVec2dD(
    const JML_Vec2d arg_0,
    const double arg_1
) {
    return JML_vec2d(
        arg_0.x / arg_1,
        arg_0.y / arg_1
    );
}

static inline JML_Vec2f JML_divVec2fF(
    const JML_Vec2f arg_0,
    const float arg_1
) {
    return JML_vec2f(
        arg_0.x / arg_1,
        arg_0.y / arg_1
    );
}

static inline JML_Vec2i JML_divVec2iI(
    const JML_Vec2i arg_0,
    const int arg_1
) {
    return JML_vec2i(
        arg_0.x / arg_1,
        arg_0.y / arg_1
    );
}

static inline JML_Vec2u JML_divVec2uU(
    const JML_Vec2u arg_0,
    const unsigned arg_1
) {
    return JML_vec2u(
        arg_0.x / arg_1,
        arg_0.y / arg_1
    );
}

static inline JML_Vec3d JML_divVec3dD(
    const JML_Vec3d arg_0,
    const double arg_1
) {
    return JML_vec3d(
        arg_0.x / arg_1,
        arg_0.y / arg_1,
        arg_0.z / arg_1
    );
}

static inline JML_Vec3f JML_divVec3fF(
    const JML_Vec3f arg_0,
    const float arg_1
) {
    return JML_vec3f(
        arg_0.x / arg_1,
        arg_0.y / arg_1,
        arg_0.z / arg_1
    );
}

static inline JML_Vec3i JML_divVec3iI(
    const JML_Vec3i arg_0,
    const int arg_1
) {
    return JML_vec3i(
        arg_0.x / arg_1,
        arg_0.y / arg_1,
        arg_0.z / arg_1
    );
}

static inline JML_Vec3u JML_divVec3uU(
    const JML_Vec3u arg_0,
    const unsigned arg_1
) {
    return JML_vec3u(
        arg_0.x / arg_1,
        arg_0.y / arg_1,
        arg_0.z / arg_1
    );
}

static inline JML_Vec4d JML_divVec4dD(
    const JML_Vec4d arg_0,
    const double arg_1
) {
    return JML_vec4d(
        arg_0.x / arg_1,
        arg_0.y / arg_1,
        arg_0.z / arg_1,
        arg_0.w / arg_1
    );
}

static inline JML_Vec4f JML_divVec4fF(
    const JML_Vec4f arg_0,
    const float arg_1
) {
    return JML_vec4f(
        arg_0.x / arg_1,
        arg_0.y / arg_1,
        arg_0.z / arg_1,
        arg_0.w / arg_1
    );
}

static inline JML_Vec4i JML_divVec4iI(
    const JML_Vec4i arg_0,
    const int arg_1
) {
    return JML_vec4i(
        arg_0.x / arg_1,
        arg_0.y / arg_1,
        arg_0.z / arg_1,
        arg_0.w / arg_1
    );
}

static inline JML_Vec4u JML_divVec4uU(
    const JML_Vec4u arg_0,
    const unsigned arg_1
) {
    return JML_vec4u(
        arg_0.x / arg_1,
        arg_0.y / arg_1,
        arg_0.z / arg_1,
        arg_0.w / arg_1
    );
}

#define JML_div_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                      \
    JML_Mat2x2d: _Generic(                        \
        (arg_1),                                  \
        double: JML_divMat2x2dD,                  \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat2x2f: _Generic(                        \
        (arg_1),                                  \
        float: JML_divMat2x2fF,                   \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3d: _Generic(                        \
        (arg_1),                                  \
        double: JML_divMat3x3dD,                  \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3f: _Generic(                        \
        (arg_1),                                  \
        float: JML_divMat3x3fF,                   \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4d: _Generic(                        \
        (arg_1),                                  \
        double: JML_divMat4x4dD,                  \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4f: _Generic(                        \
        (arg_1),                                  \
        float: JML_divMat4x4fF,                   \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        double: JML_divVec2dD,                    \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec2fF,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2i: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec2iI,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2u: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec2uU,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        double: JML_divVec3dD,                    \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec3fF,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3i: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec3iI,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3u: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec3uU,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        double: JML_divVec4dD,                    \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec4fF,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4i: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec4iI,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4u: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec4uU,                     \
        default: (void (*)(void))0                \
    ),                                            \
    default: (void (*)(void))0                    \
)(arg_0, arg_1)

#define JML_div(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_div_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_ARITHMETIC_DIV_H

#ifndef JML_WITHOUT_PREFIX

#define div(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_div_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
