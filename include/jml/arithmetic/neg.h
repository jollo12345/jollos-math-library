#ifndef JML_ARITHMETIC_NEG_H
#define JML_ARITHMETIC_NEG_H

#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
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
#include "jml/types/mat2x2d.h"
#include "jml/types/mat2x2f.h"
#include "jml/types/mat3x3d.h"
#include "jml/types/mat3x3f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
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
static inline JML_Mat2x2d JML_negMat2x2d(
    const JML_Mat2x2d arg
) {
    return JML_mat2x2d(
        -arg.m00,
        -arg.m01,
        -arg.m10,
        -arg.m11
    );
}

[[nodiscard]]
static inline JML_Mat2x2f JML_negMat2x2f(
    const JML_Mat2x2f arg
) {
    return JML_mat2x2f(
        -arg.m00,
        -arg.m01,
        -arg.m10,
        -arg.m11
    );
}

[[nodiscard]]
static inline JML_Mat3x3d JML_negMat3x3d(
    const JML_Mat3x3d arg
) {
    return JML_mat3x3d(
        -arg.m00,
        -arg.m01,
        -arg.m02,
        -arg.m10,
        -arg.m11,
        -arg.m12,
        -arg.m20,
        -arg.m21,
        -arg.m22
    );
}

[[nodiscard]]
static inline JML_Mat3x3f JML_negMat3x3f(
    const JML_Mat3x3f arg
) {
    return JML_mat3x3f(
        -arg.m00,
        -arg.m01,
        -arg.m02,
        -arg.m10,
        -arg.m11,
        -arg.m12,
        -arg.m20,
        -arg.m21,
        -arg.m22
    );
}

[[nodiscard]]
static inline JML_Mat4x4d JML_negMat4x4d(
    const JML_Mat4x4d arg
) {
    return JML_mat4x4d(
        -arg.m00,
        -arg.m01,
        -arg.m02,
        -arg.m03,
        -arg.m10,
        -arg.m11,
        -arg.m12,
        -arg.m13,
        -arg.m20,
        -arg.m21,
        -arg.m22,
        -arg.m23,
        -arg.m30,
        -arg.m31,
        -arg.m32,
        -arg.m33
    );
}

[[nodiscard]]
static inline JML_Mat4x4f JML_negMat4x4f(
    const JML_Mat4x4f arg
) {
    return JML_mat4x4f(
        -arg.m00,
        -arg.m01,
        -arg.m02,
        -arg.m03,
        -arg.m10,
        -arg.m11,
        -arg.m12,
        -arg.m13,
        -arg.m20,
        -arg.m21,
        -arg.m22,
        -arg.m23,
        -arg.m30,
        -arg.m31,
        -arg.m32,
        -arg.m33
    );
}

[[nodiscard]]
static inline JML_Vec2d JML_negVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        -arg.x,
        -arg.y
    );
}

[[nodiscard]]
static inline JML_Vec2f JML_negVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        -arg.x,
        -arg.y
    );
}

[[nodiscard]]
static inline JML_Vec2i JML_negVec2i(
    const JML_Vec2i arg
) {
    return JML_vec2i(
        -arg.x,
        -arg.y
    );
}

[[nodiscard]]
static inline JML_Vec2u JML_negVec2u(
    const JML_Vec2u arg
) {
    return JML_vec2u(
        -arg.x,
        -arg.y
    );
}

[[nodiscard]]
static inline JML_Vec3d JML_negVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        -arg.x,
        -arg.y,
        -arg.z
    );
}

[[nodiscard]]
static inline JML_Vec3f JML_negVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        -arg.x,
        -arg.y,
        -arg.z
    );
}

[[nodiscard]]
static inline JML_Vec3i JML_negVec3i(
    const JML_Vec3i arg
) {
    return JML_vec3i(
        -arg.x,
        -arg.y,
        -arg.z
    );
}

[[nodiscard]]
static inline JML_Vec3u JML_negVec3u(
    const JML_Vec3u arg
) {
    return JML_vec3u(
        -arg.x,
        -arg.y,
        -arg.z
    );
}

[[nodiscard]]
static inline JML_Vec4d JML_negVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        -arg.x,
        -arg.y,
        -arg.z,
        -arg.w
    );
}

[[nodiscard]]
static inline JML_Vec4f JML_negVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        -arg.x,
        -arg.y,
        -arg.z,
        -arg.w
    );
}

[[nodiscard]]
static inline JML_Vec4i JML_negVec4i(
    const JML_Vec4i arg
) {
    return JML_vec4i(
        -arg.x,
        -arg.y,
        -arg.z,
        -arg.w
    );
}

[[nodiscard]]
static inline JML_Vec4u JML_negVec4u(
    const JML_Vec4u arg
) {
    return JML_vec4u(
        -arg.x,
        -arg.y,
        -arg.z,
        -arg.w
    );
}

#define JML_neg_GENERIC_1(arg) _Generic( \
    (arg),                               \
    JML_Mat2x2d: JML_negMat2x2d,         \
    JML_Mat2x2f: JML_negMat2x2f,         \
    JML_Mat3x3d: JML_negMat3x3d,         \
    JML_Mat3x3f: JML_negMat3x3f,         \
    JML_Mat4x4d: JML_negMat4x4d,         \
    JML_Mat4x4f: JML_negMat4x4f,         \
    JML_Vec2d: JML_negVec2d,             \
    JML_Vec2f: JML_negVec2f,             \
    JML_Vec2i: JML_negVec2i,             \
    JML_Vec2u: JML_negVec2u,             \
    JML_Vec3d: JML_negVec3d,             \
    JML_Vec3f: JML_negVec3f,             \
    JML_Vec3i: JML_negVec3i,             \
    JML_Vec3u: JML_negVec3u,             \
    JML_Vec4d: JML_negVec4d,             \
    JML_Vec4f: JML_negVec4f,             \
    JML_Vec4i: JML_negVec4i,             \
    JML_Vec4u: JML_negVec4u,             \
    default: JML_INVALID_ARGUMENT_TYPES  \
)(arg)

#define JML_neg(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_neg_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_ARITHMETIC_NEG_H

#ifdef JML_WITHOUT_PREFIX

#define neg(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_neg_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
