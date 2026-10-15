#ifndef JML_DETAIL_ARITHMETIC_NEG_H
#define JML_DETAIL_ARITHMETIC_NEG_H

#include "jml/detail/constructors/mat2x2d.h"
#include "jml/detail/constructors/mat2x2f.h"
#include "jml/detail/constructors/mat3x3d.h"
#include "jml/detail/constructors/mat3x3f.h"
#include "jml/detail/constructors/mat4x4d.h"
#include "jml/detail/constructors/mat4x4f.h"
#include "jml/detail/constructors/vec2d.h"
#include "jml/detail/constructors/vec2f.h"
#include "jml/detail/constructors/vec3d.h"
#include "jml/detail/constructors/vec3f.h"
#include "jml/detail/constructors/vec4d.h"
#include "jml/detail/constructors/vec4f.h"
#include "jml/detail/types/mat2x2d.h"
#include "jml/detail/types/mat2x2f.h"
#include "jml/detail/types/mat3x3d.h"
#include "jml/detail/types/mat3x3f.h"
#include "jml/detail/types/mat4x4d.h"
#include "jml/detail/types/mat4x4f.h"
#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"

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

static inline JML_Vec2d JML_negVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        -arg.x,
        -arg.data[1]
    );
}

static inline JML_Vec2f JML_negVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        -arg.x,
        -arg.data[1]
    );
}

static inline JML_Vec3d JML_negVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        -arg.x,
        -arg.y,
        -arg.z
    );
}

static inline JML_Vec3f JML_negVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        -arg.x,
        -arg.y,
        -arg.z
    );
}

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
    JML_Vec3d: JML_negVec3d,             \
    JML_Vec3f: JML_negVec3f,             \
    JML_Vec4d: JML_negVec4d,             \
    JML_Vec4f: JML_negVec4f,             \
    default: (void (*)(void))0           \
)(arg)

#define JML_neg(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_neg_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_ARITHMETIC_NEG_H

#ifndef JML_WITHOUT_PREFIX

#define neg(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_neg_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
