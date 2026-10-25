#ifndef JML_ARITHMETIC_MUL_H
#define JML_ARITHMETIC_MUL_H

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

static inline JML_Mat2x2d JML_mulDMat2x2d(
    const double arg_0,
    const JML_Mat2x2d arg_1
) {
    return JML_mat2x2d(
        arg_0 * arg_1.m00,
        arg_0 * arg_1.m01,
        arg_0 * arg_1.m10,
        arg_0 * arg_1.m11
    );
}

static inline JML_Mat3x3d JML_mulDMat3x3d(
    const double arg_0,
    const JML_Mat3x3d arg_1
) {
    return JML_mat3x3d(
        arg_0 * arg_1.m00,
        arg_0 * arg_1.m01,
        arg_0 * arg_1.m02,
        arg_0 * arg_1.m10,
        arg_0 * arg_1.m11,
        arg_0 * arg_1.m12,
        arg_0 * arg_1.m20,
        arg_0 * arg_1.m21,
        arg_0 * arg_1.m22
    );
}

static inline JML_Mat4x4d JML_mulDMat4x4d(
    const double arg_0,
    const JML_Mat4x4d arg_1
) {
    return JML_mat4x4d(
        arg_0 * arg_1.m00,
        arg_0 * arg_1.m01,
        arg_0 * arg_1.m02,
        arg_0 * arg_1.m03,
        arg_0 * arg_1.m10,
        arg_0 * arg_1.m11,
        arg_0 * arg_1.m12,
        arg_0 * arg_1.m13,
        arg_0 * arg_1.m20,
        arg_0 * arg_1.m21,
        arg_0 * arg_1.m22,
        arg_0 * arg_1.m23,
        arg_0 * arg_1.m30,
        arg_0 * arg_1.m31,
        arg_0 * arg_1.m32,
        arg_0 * arg_1.m33
    );
}

static inline JML_Vec2d JML_mulDVec2d(
    const double arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y
    );
}

static inline JML_Vec3d JML_mulDVec3d(
    const double arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y,
        arg_0 * arg_1.z
    );
}

static inline JML_Vec4d JML_mulDVec4d(
    const double arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y,
        arg_0 * arg_1.z,
        arg_0 * arg_1.w
    );
}

static inline JML_Mat2x2f JML_mulFMat2x2f(
    const float arg_0,
    const JML_Mat2x2f arg_1
) {
    return JML_mat2x2f(
        arg_0 * arg_1.m00,
        arg_0 * arg_1.m01,
        arg_0 * arg_1.m10,
        arg_0 * arg_1.m11
    );
}

static inline JML_Mat3x3f JML_mulFMat3x3f(
    const float arg_0,
    const JML_Mat3x3f arg_1
) {
    return JML_mat3x3f(
        arg_0 * arg_1.m00,
        arg_0 * arg_1.m01,
        arg_0 * arg_1.m02,
        arg_0 * arg_1.m10,
        arg_0 * arg_1.m11,
        arg_0 * arg_1.m12,
        arg_0 * arg_1.m20,
        arg_0 * arg_1.m21,
        arg_0 * arg_1.m22
    );
}

static inline JML_Mat4x4f JML_mulFMat4x4f(
    const float arg_0,
    const JML_Mat4x4f arg_1
) {
    return JML_mat4x4f(
        arg_0 * arg_1.m00,
        arg_0 * arg_1.m01,
        arg_0 * arg_1.m02,
        arg_0 * arg_1.m03,
        arg_0 * arg_1.m10,
        arg_0 * arg_1.m11,
        arg_0 * arg_1.m12,
        arg_0 * arg_1.m13,
        arg_0 * arg_1.m20,
        arg_0 * arg_1.m21,
        arg_0 * arg_1.m22,
        arg_0 * arg_1.m23,
        arg_0 * arg_1.m30,
        arg_0 * arg_1.m31,
        arg_0 * arg_1.m32,
        arg_0 * arg_1.m33
    );
}

static inline JML_Vec2f JML_mulFVec2f(
    const float arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y
    );
}

static inline JML_Vec3f JML_mulFVec3f(
    const float arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y,
        arg_0 * arg_1.z
    );
}

static inline JML_Vec4f JML_mulFVec4f(
    const float arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y,
        arg_0 * arg_1.z,
        arg_0 * arg_1.w
    );
}

static inline JML_Vec2i JML_mulIVec2i(
    const int arg_0,
    const JML_Vec2i arg_1
) {
    return JML_vec2i(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y
    );
}

static inline JML_Vec3i JML_mulIVec3i(
    const int arg_0,
    const JML_Vec3i arg_1
) {
    return JML_vec3i(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y,
        arg_0 * arg_1.z
    );
}

static inline JML_Vec4i JML_mulIVec4i(
    const int arg_0,
    const JML_Vec4i arg_1
) {
    return JML_vec4i(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y,
        arg_0 * arg_1.z,
        arg_0 * arg_1.w
    );
}

static inline JML_Vec2u JML_mulUVec2u(
    const unsigned arg_0,
    const JML_Vec2u arg_1
) {
    return JML_vec2u(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y
    );
}

static inline JML_Vec3u JML_mulUVec3u(
    const unsigned arg_0,
    const JML_Vec3u arg_1
) {
    return JML_vec3u(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y,
        arg_0 * arg_1.z
    );
}

static inline JML_Vec4u JML_mulUVec4u(
    const unsigned arg_0,
    const JML_Vec4u arg_1
) {
    return JML_vec4u(
        arg_0 * arg_1.x,
        arg_0 * arg_1.y,
        arg_0 * arg_1.z,
        arg_0 * arg_1.w
    );
}

static inline JML_Mat2x2d JML_mulMat2x2dD(
    const JML_Mat2x2d arg_0,
    const double arg_1
) {
    return JML_mat2x2d(
        arg_0.m00 * arg_1,
        arg_0.m01 * arg_1,
        arg_0.m10 * arg_1,
        arg_0.m11 * arg_1
    );
}

static inline JML_Mat2x2d JML_mulMat2x2dMat2x2d(
    const JML_Mat2x2d arg_0,
    const JML_Mat2x2d arg_1
) {
    return JML_mat2x2d(
        (arg_0.m00 * arg_1.m00) + (arg_0.m10 * arg_1.m01),
        (arg_0.m01 * arg_1.m00) + (arg_0.m11 * arg_1.m01),
        (arg_0.m00 * arg_1.m10) + (arg_0.m10 * arg_1.m11),
        (arg_0.m01 * arg_1.m10) + (arg_0.m11 * arg_1.m11)
    );
}

static inline JML_Vec2d JML_mulMat2x2dVec2d(
    const JML_Mat2x2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        (arg_0.m00 * arg_1.x) + (arg_0.m10 * arg_1.y),
        (arg_0.m01 * arg_1.x) + (arg_0.m11 * arg_1.y)
    );
}

static inline JML_Mat2x2f JML_mulMat2x2fF(
    const JML_Mat2x2f arg_0,
    const float arg_1
) {
    return JML_mat2x2f(
        arg_0.m00 * arg_1,
        arg_0.m01 * arg_1,
        arg_0.m10 * arg_1,
        arg_0.m11 * arg_1
    );
}

static inline JML_Mat2x2f JML_mulMat2x2fMat2x2f(
    const JML_Mat2x2f arg_0,
    const JML_Mat2x2f arg_1
) {
    return JML_mat2x2f(
        (arg_0.m00 * arg_1.m00) + (arg_0.m10 * arg_1.m01),
        (arg_0.m01 * arg_1.m00) + (arg_0.m11 * arg_1.m01),
        (arg_0.m00 * arg_1.m10) + (arg_0.m10 * arg_1.m11),
        (arg_0.m01 * arg_1.m10) + (arg_0.m11 * arg_1.m11)
    );
}

static inline JML_Vec2f JML_mulMat2x2fVec2f(
    const JML_Mat2x2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        (arg_0.m00 * arg_1.x) + (arg_0.m10 * arg_1.y),
        (arg_0.m01 * arg_1.x) + (arg_0.m11 * arg_1.y)
    );
}

static inline JML_Mat3x3d JML_mulMat3x3dD(
    const JML_Mat3x3d arg_0,
    const double arg_1
) {
    return JML_mat3x3d(
        arg_0.m00 * arg_1,
        arg_0.m01 * arg_1,
        arg_0.m02 * arg_1,
        arg_0.m10 * arg_1,
        arg_0.m11 * arg_1,
        arg_0.m12 * arg_1,
        arg_0.m20 * arg_1,
        arg_0.m21 * arg_1,
        arg_0.m22 * arg_1
    );
}

static inline JML_Mat3x3d JML_mulMat3x3dMat3x3d(
    const JML_Mat3x3d arg_0,
    const JML_Mat3x3d arg_1
) {
    return JML_mat3x3d(
        (arg_0.m00 * arg_1.m00) + (arg_0.m10 * arg_1.m01) + (arg_0.m20 * arg_1.m02),
        (arg_0.m01 * arg_1.m00) + (arg_0.m11 * arg_1.m01) + (arg_0.m21 * arg_1.m02),
        (arg_0.m02 * arg_1.m00) + (arg_0.m12 * arg_1.m01) + (arg_0.m22 * arg_1.m02),
        (arg_0.m00 * arg_1.m10) + (arg_0.m10 * arg_1.m11) + (arg_0.m20 * arg_1.m12),
        (arg_0.m01 * arg_1.m10) + (arg_0.m11 * arg_1.m11) + (arg_0.m21 * arg_1.m12),
        (arg_0.m02 * arg_1.m10) + (arg_0.m12 * arg_1.m11) + (arg_0.m22 * arg_1.m12),
        (arg_0.m00 * arg_1.m20) + (arg_0.m10 * arg_1.m21) + (arg_0.m20 * arg_1.m22),
        (arg_0.m01 * arg_1.m20) + (arg_0.m11 * arg_1.m21) + (arg_0.m21 * arg_1.m22),
        (arg_0.m02 * arg_1.m20) + (arg_0.m12 * arg_1.m21) + (arg_0.m22 * arg_1.m22)
    );
}

static inline JML_Vec3d JML_mulMat3x3dVec3d(
    const JML_Mat3x3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        (arg_0.m00 * arg_1.x) + (arg_0.m10 * arg_1.y) + (arg_0.m20 * arg_1.z),
        (arg_0.m01 * arg_1.x) + (arg_0.m11 * arg_1.y) + (arg_0.m21 * arg_1.z),
        (arg_0.m02 * arg_1.x) + (arg_0.m12 * arg_1.y) + (arg_0.m22 * arg_1.z)
    );
}

static inline JML_Mat3x3f JML_mulMat3x3fF(
    const JML_Mat3x3f arg_0,
    const float arg_1
) {
    return JML_mat3x3f(
        arg_0.m00 * arg_1,
        arg_0.m01 * arg_1,
        arg_0.m02 * arg_1,
        arg_0.m10 * arg_1,
        arg_0.m11 * arg_1,
        arg_0.m12 * arg_1,
        arg_0.m20 * arg_1,
        arg_0.m21 * arg_1,
        arg_0.m22 * arg_1
    );
}

static inline JML_Mat3x3f JML_mulMat3x3fMat3x3f(
    const JML_Mat3x3f arg_0,
    const JML_Mat3x3f arg_1
) {
    return JML_mat3x3f(
        (arg_0.m00 * arg_1.m00) + (arg_0.m10 * arg_1.m01) + (arg_0.m20 * arg_1.m02),
        (arg_0.m01 * arg_1.m00) + (arg_0.m11 * arg_1.m01) + (arg_0.m21 * arg_1.m02),
        (arg_0.m02 * arg_1.m00) + (arg_0.m12 * arg_1.m01) + (arg_0.m22 * arg_1.m02),
        (arg_0.m00 * arg_1.m10) + (arg_0.m10 * arg_1.m11) + (arg_0.m20 * arg_1.m12),
        (arg_0.m01 * arg_1.m10) + (arg_0.m11 * arg_1.m11) + (arg_0.m21 * arg_1.m12),
        (arg_0.m02 * arg_1.m10) + (arg_0.m12 * arg_1.m11) + (arg_0.m22 * arg_1.m12),
        (arg_0.m00 * arg_1.m20) + (arg_0.m10 * arg_1.m21) + (arg_0.m20 * arg_1.m22),
        (arg_0.m01 * arg_1.m20) + (arg_0.m11 * arg_1.m21) + (arg_0.m21 * arg_1.m22),
        (arg_0.m02 * arg_1.m20) + (arg_0.m12 * arg_1.m21) + (arg_0.m22 * arg_1.m22)
    );
}

static inline JML_Vec3f JML_mulMat3x3fVec3f(
    const JML_Mat3x3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        (arg_0.m00 * arg_1.x) + (arg_0.m10 * arg_1.y) + (arg_0.m20 * arg_1.z),
        (arg_0.m01 * arg_1.x) + (arg_0.m11 * arg_1.y) + (arg_0.m21 * arg_1.z),
        (arg_0.m02 * arg_1.x) + (arg_0.m12 * arg_1.y) + (arg_0.m22 * arg_1.z)
    );
}

static inline JML_Mat4x4d JML_mulMat4x4dD(
    const JML_Mat4x4d arg_0,
    const double arg_1
) {
    return JML_mat4x4d(
        arg_0.m00 * arg_1,
        arg_0.m01 * arg_1,
        arg_0.m02 * arg_1,
        arg_0.m03 * arg_1,
        arg_0.m10 * arg_1,
        arg_0.m11 * arg_1,
        arg_0.m12 * arg_1,
        arg_0.m13 * arg_1,
        arg_0.m20 * arg_1,
        arg_0.m21 * arg_1,
        arg_0.m22 * arg_1,
        arg_0.m23 * arg_1,
        arg_0.m30 * arg_1,
        arg_0.m31 * arg_1,
        arg_0.m32 * arg_1,
        arg_0.m33 * arg_1
    );
}

static inline JML_Mat4x4d JML_mulMat4x4dMat4x4d(
    const JML_Mat4x4d arg_0,
    const JML_Mat4x4d arg_1
) {
    return JML_mat4x4d(
        (arg_0.m00 * arg_1.m00) + (arg_0.m10 * arg_1.m01) + (arg_0.m20 * arg_1.m02) + (arg_0.m30 * arg_1.m03),
        (arg_0.m01 * arg_1.m00) + (arg_0.m11 * arg_1.m01) + (arg_0.m21 * arg_1.m02) + (arg_0.m31 * arg_1.m03),
        (arg_0.m02 * arg_1.m00) + (arg_0.m12 * arg_1.m01) + (arg_0.m22 * arg_1.m02) + (arg_0.m32 * arg_1.m03),
        (arg_0.m03 * arg_1.m00) + (arg_0.m13 * arg_1.m01) + (arg_0.m23 * arg_1.m02) + (arg_0.m33 * arg_1.m03),
        (arg_0.m00 * arg_1.m10) + (arg_0.m10 * arg_1.m11) + (arg_0.m20 * arg_1.m12) + (arg_0.m30 * arg_1.m13),
        (arg_0.m01 * arg_1.m10) + (arg_0.m11 * arg_1.m11) + (arg_0.m21 * arg_1.m12) + (arg_0.m31 * arg_1.m13),
        (arg_0.m02 * arg_1.m10) + (arg_0.m12 * arg_1.m11) + (arg_0.m22 * arg_1.m12) + (arg_0.m32 * arg_1.m13),
        (arg_0.m03 * arg_1.m10) + (arg_0.m13 * arg_1.m11) + (arg_0.m23 * arg_1.m12) + (arg_0.m33 * arg_1.m13),
        (arg_0.m00 * arg_1.m20) + (arg_0.m10 * arg_1.m21) + (arg_0.m20 * arg_1.m22) + (arg_0.m30 * arg_1.m23),
        (arg_0.m01 * arg_1.m20) + (arg_0.m11 * arg_1.m21) + (arg_0.m21 * arg_1.m22) + (arg_0.m31 * arg_1.m23),
        (arg_0.m02 * arg_1.m20) + (arg_0.m12 * arg_1.m21) + (arg_0.m22 * arg_1.m22) + (arg_0.m32 * arg_1.m23),
        (arg_0.m03 * arg_1.m20) + (arg_0.m13 * arg_1.m21) + (arg_0.m23 * arg_1.m22) + (arg_0.m33 * arg_1.m23),
        (arg_0.m00 * arg_1.m30) + (arg_0.m10 * arg_1.m31) + (arg_0.m20 * arg_1.m32) + (arg_0.m30 * arg_1.m33),
        (arg_0.m01 * arg_1.m30) + (arg_0.m11 * arg_1.m31) + (arg_0.m21 * arg_1.m32) + (arg_0.m31 * arg_1.m33),
        (arg_0.m02 * arg_1.m30) + (arg_0.m12 * arg_1.m31) + (arg_0.m22 * arg_1.m32) + (arg_0.m32 * arg_1.m33),
        (arg_0.m03 * arg_1.m30) + (arg_0.m13 * arg_1.m31) + (arg_0.m23 * arg_1.m32) + (arg_0.m33 * arg_1.m33)
    );
}

static inline JML_Vec4d JML_mulMat4x4dVec4d(
    const JML_Mat4x4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        (arg_0.m00 * arg_1.x) + (arg_0.m10 * arg_1.y) + (arg_0.m20 * arg_1.z) + (arg_0.m30 * arg_1.w),
        (arg_0.m01 * arg_1.x) + (arg_0.m11 * arg_1.y) + (arg_0.m21 * arg_1.z) + (arg_0.m31 * arg_1.w),
        (arg_0.m02 * arg_1.x) + (arg_0.m12 * arg_1.y) + (arg_0.m22 * arg_1.z) + (arg_0.m32 * arg_1.w),
        (arg_0.m03 * arg_1.x) + (arg_0.m13 * arg_1.y) + (arg_0.m23 * arg_1.z) + (arg_0.m33 * arg_1.w)
    );
}

static inline JML_Mat4x4f JML_mulMat4x4fF(
    const JML_Mat4x4f arg_0,
    const float arg_1
) {
    return JML_mat4x4f(
        arg_0.m00 * arg_1,
        arg_0.m01 * arg_1,
        arg_0.m02 * arg_1,
        arg_0.m03 * arg_1,
        arg_0.m10 * arg_1,
        arg_0.m11 * arg_1,
        arg_0.m12 * arg_1,
        arg_0.m13 * arg_1,
        arg_0.m20 * arg_1,
        arg_0.m21 * arg_1,
        arg_0.m22 * arg_1,
        arg_0.m23 * arg_1,
        arg_0.m30 * arg_1,
        arg_0.m31 * arg_1,
        arg_0.m32 * arg_1,
        arg_0.m33 * arg_1
    );
}

static inline JML_Mat4x4f JML_mulMat4x4fMat4x4f(
    const JML_Mat4x4f arg_0,
    const JML_Mat4x4f arg_1
) {
    return JML_mat4x4f(
        (arg_0.m00 * arg_1.m00) + (arg_0.m10 * arg_1.m01) + (arg_0.m20 * arg_1.m02) + (arg_0.m30 * arg_1.m03),
        (arg_0.m01 * arg_1.m00) + (arg_0.m11 * arg_1.m01) + (arg_0.m21 * arg_1.m02) + (arg_0.m31 * arg_1.m03),
        (arg_0.m02 * arg_1.m00) + (arg_0.m12 * arg_1.m01) + (arg_0.m22 * arg_1.m02) + (arg_0.m32 * arg_1.m03),
        (arg_0.m03 * arg_1.m00) + (arg_0.m13 * arg_1.m01) + (arg_0.m23 * arg_1.m02) + (arg_0.m33 * arg_1.m03),
        (arg_0.m00 * arg_1.m10) + (arg_0.m10 * arg_1.m11) + (arg_0.m20 * arg_1.m12) + (arg_0.m30 * arg_1.m13),
        (arg_0.m01 * arg_1.m10) + (arg_0.m11 * arg_1.m11) + (arg_0.m21 * arg_1.m12) + (arg_0.m31 * arg_1.m13),
        (arg_0.m02 * arg_1.m10) + (arg_0.m12 * arg_1.m11) + (arg_0.m22 * arg_1.m12) + (arg_0.m32 * arg_1.m13),
        (arg_0.m03 * arg_1.m10) + (arg_0.m13 * arg_1.m11) + (arg_0.m23 * arg_1.m12) + (arg_0.m33 * arg_1.m13),
        (arg_0.m00 * arg_1.m20) + (arg_0.m10 * arg_1.m21) + (arg_0.m20 * arg_1.m22) + (arg_0.m30 * arg_1.m23),
        (arg_0.m01 * arg_1.m20) + (arg_0.m11 * arg_1.m21) + (arg_0.m21 * arg_1.m22) + (arg_0.m31 * arg_1.m23),
        (arg_0.m02 * arg_1.m20) + (arg_0.m12 * arg_1.m21) + (arg_0.m22 * arg_1.m22) + (arg_0.m32 * arg_1.m23),
        (arg_0.m03 * arg_1.m20) + (arg_0.m13 * arg_1.m21) + (arg_0.m23 * arg_1.m22) + (arg_0.m33 * arg_1.m23),
        (arg_0.m00 * arg_1.m30) + (arg_0.m10 * arg_1.m31) + (arg_0.m20 * arg_1.m32) + (arg_0.m30 * arg_1.m33),
        (arg_0.m01 * arg_1.m30) + (arg_0.m11 * arg_1.m31) + (arg_0.m21 * arg_1.m32) + (arg_0.m31 * arg_1.m33),
        (arg_0.m02 * arg_1.m30) + (arg_0.m12 * arg_1.m31) + (arg_0.m22 * arg_1.m32) + (arg_0.m32 * arg_1.m33),
        (arg_0.m03 * arg_1.m30) + (arg_0.m13 * arg_1.m31) + (arg_0.m23 * arg_1.m32) + (arg_0.m33 * arg_1.m33)
    );
}

static inline JML_Vec4f JML_mulMat4x4fVec4f(
    const JML_Mat4x4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        (arg_0.m00 * arg_1.x) + (arg_0.m10 * arg_1.y) + (arg_0.m20 * arg_1.z) + (arg_0.m30 * arg_1.w),
        (arg_0.m01 * arg_1.x) + (arg_0.m11 * arg_1.y) + (arg_0.m21 * arg_1.z) + (arg_0.m31 * arg_1.w),
        (arg_0.m02 * arg_1.x) + (arg_0.m12 * arg_1.y) + (arg_0.m22 * arg_1.z) + (arg_0.m32 * arg_1.w),
        (arg_0.m03 * arg_1.x) + (arg_0.m13 * arg_1.y) + (arg_0.m23 * arg_1.z) + (arg_0.m33 * arg_1.w)
    );
}

static inline JML_Vec2d JML_mulVec2dD(
    const JML_Vec2d arg_0,
    const double arg_1
) {
    return JML_vec2d(
        arg_0.x * arg_1,
        arg_0.y * arg_1
    );
}

static inline JML_Vec2d JML_mulVec2dMat2x2d(
    const JML_Vec2d arg_0,
    const JML_Mat2x2d arg_1
) {
    return JML_vec2d(
        (arg_0.x * arg_1.m00) + (arg_0.y * arg_1.m01),
        (arg_0.x * arg_1.m10) + (arg_0.y * arg_1.m11)
    );
}

static inline JML_Vec2d JML_mulVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y
    );
}

static inline JML_Vec2f JML_mulVec2fF(
    const JML_Vec2f arg_0,
    const float arg_1
) {
    return JML_vec2f(
        arg_0.x * arg_1,
        arg_0.y * arg_1
    );
}

static inline JML_Vec2f JML_mulVec2fMat2x2f(
    const JML_Vec2f arg_0,
    const JML_Mat2x2f arg_1
) {
    return JML_vec2f(
        (arg_0.x * arg_1.m00) + (arg_0.y * arg_1.m01),
        (arg_0.x * arg_1.m10) + (arg_0.y * arg_1.m11)
    );
}

static inline JML_Vec2f JML_mulVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y
    );
}

static inline JML_Vec2i JML_mulVec2iI(
    const JML_Vec2i arg_0,
    const int arg_1
) {
    return JML_vec2i(
        arg_0.x * arg_1,
        arg_0.y * arg_1
    );
}

static inline JML_Vec2i JML_mulVec2iVec2i(
    const JML_Vec2i arg_0,
    const JML_Vec2i arg_1
) {
    return JML_vec2i(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y
    );
}

static inline JML_Vec2u JML_mulVec2uU(
    const JML_Vec2u arg_0,
    const unsigned arg_1
) {
    return JML_vec2u(
        arg_0.x * arg_1,
        arg_0.y * arg_1
    );
}

static inline JML_Vec2u JML_mulVec2uVec2u(
    const JML_Vec2u arg_0,
    const JML_Vec2u arg_1
) {
    return JML_vec2u(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y
    );
}

static inline JML_Vec3d JML_mulVec3dD(
    const JML_Vec3d arg_0,
    const double arg_1
) {
    return JML_vec3d(
        arg_0.x * arg_1,
        arg_0.y * arg_1,
        arg_0.z * arg_1
    );
}

static inline JML_Vec3d JML_mulVec3dMat3x3d(
    const JML_Vec3d arg_0,
    const JML_Mat3x3d arg_1
) {
    return JML_vec3d(
        (arg_0.x * arg_1.m00) + (arg_0.y * arg_1.m01) + (arg_0.z * arg_1.m02),
        (arg_0.x * arg_1.m10) + (arg_0.y * arg_1.m11) + (arg_0.z * arg_1.m12),
        (arg_0.x * arg_1.m20) + (arg_0.y * arg_1.m21) + (arg_0.z * arg_1.m22)
    );
}

static inline JML_Vec3d JML_mulVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y,
        arg_0.z * arg_1.z
    );
}

static inline JML_Vec3f JML_mulVec3fF(
    const JML_Vec3f arg_0,
    const float arg_1
) {
    return JML_vec3f(
        arg_0.x * arg_1,
        arg_0.y * arg_1,
        arg_0.z * arg_1
    );
}

static inline JML_Vec3f JML_mulVec3fMat3x3f(
    const JML_Vec3f arg_0,
    const JML_Mat3x3f arg_1
) {
    return JML_vec3f(
        (arg_0.x * arg_1.m00) + (arg_0.y * arg_1.m01) + (arg_0.z * arg_1.m02),
        (arg_0.x * arg_1.m10) + (arg_0.y * arg_1.m11) + (arg_0.z * arg_1.m12),
        (arg_0.x * arg_1.m20) + (arg_0.y * arg_1.m21) + (arg_0.z * arg_1.m22)
    );
}

static inline JML_Vec3f JML_mulVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y,
        arg_0.z * arg_1.z
    );
}

static inline JML_Vec3i JML_mulVec3iI(
    const JML_Vec3i arg_0,
    const int arg_1
) {
    return JML_vec3i(
        arg_0.x * arg_1,
        arg_0.y * arg_1,
        arg_0.z * arg_1
    );
}

static inline JML_Vec3i JML_mulVec3iVec3i(
    const JML_Vec3i arg_0,
    const JML_Vec3i arg_1
) {
    return JML_vec3i(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y,
        arg_0.z * arg_1.z
    );
}

static inline JML_Vec3u JML_mulVec3uU(
    const JML_Vec3u arg_0,
    const unsigned arg_1
) {
    return JML_vec3u(
        arg_0.x * arg_1,
        arg_0.y * arg_1,
        arg_0.z * arg_1
    );
}

static inline JML_Vec3u JML_mulVec3uVec3u(
    const JML_Vec3u arg_0,
    const JML_Vec3u arg_1
) {
    return JML_vec3u(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y,
        arg_0.z * arg_1.z
    );
}

static inline JML_Vec4d JML_mulVec4dD(
    const JML_Vec4d arg_0,
    const double arg_1
) {
    return JML_vec4d(
        arg_0.x * arg_1,
        arg_0.y * arg_1,
        arg_0.z * arg_1,
        arg_0.w * arg_1
    );
}

static inline JML_Vec4d JML_mulVec4dMat4x4d(
    const JML_Vec4d arg_0,
    const JML_Mat4x4d arg_1
) {
    return JML_vec4d(
        (arg_0.x * arg_1.m00) + (arg_0.y * arg_1.m01) + (arg_0.z * arg_1.m02) + (arg_0.w * arg_1.m03),
        (arg_0.x * arg_1.m10) + (arg_0.y * arg_1.m11) + (arg_0.z * arg_1.m12) + (arg_0.w * arg_1.m13),
        (arg_0.x * arg_1.m20) + (arg_0.y * arg_1.m21) + (arg_0.z * arg_1.m22) + (arg_0.w * arg_1.m23),
        (arg_0.x * arg_1.m30) + (arg_0.y * arg_1.m31) + (arg_0.z * arg_1.m32) + (arg_0.w * arg_1.m33)
    );
}

static inline JML_Vec4d JML_mulVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y,
        arg_0.z * arg_1.z,
        arg_0.w * arg_1.w
    );
}

static inline JML_Vec4f JML_mulVec4fF(
    const JML_Vec4f arg_0,
    const float arg_1
) {
    return JML_vec4f(
        arg_0.x * arg_1,
        arg_0.y * arg_1,
        arg_0.z * arg_1,
        arg_0.w * arg_1
    );
}

static inline JML_Vec4f JML_mulVec4fMat4x4f(
    const JML_Vec4f arg_0,
    const JML_Mat4x4f arg_1
) {
    return JML_vec4f(
        (arg_0.x * arg_1.m00) + (arg_0.y * arg_1.m01) + (arg_0.z * arg_1.m02) + (arg_0.w * arg_1.m03),
        (arg_0.x * arg_1.m10) + (arg_0.y * arg_1.m11) + (arg_0.z * arg_1.m12) + (arg_0.w * arg_1.m13),
        (arg_0.x * arg_1.m20) + (arg_0.y * arg_1.m21) + (arg_0.z * arg_1.m22) + (arg_0.w * arg_1.m23),
        (arg_0.x * arg_1.m30) + (arg_0.y * arg_1.m31) + (arg_0.z * arg_1.m32) + (arg_0.w * arg_1.m33)
    );
}

static inline JML_Vec4f JML_mulVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y,
        arg_0.z * arg_1.z,
        arg_0.w * arg_1.w
    );
}

static inline JML_Vec4i JML_mulVec4iI(
    const JML_Vec4i arg_0,
    const int arg_1
) {
    return JML_vec4i(
        arg_0.x * arg_1,
        arg_0.y * arg_1,
        arg_0.z * arg_1,
        arg_0.w * arg_1
    );
}

static inline JML_Vec4i JML_mulVec4iVec4i(
    const JML_Vec4i arg_0,
    const JML_Vec4i arg_1
) {
    return JML_vec4i(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y,
        arg_0.z * arg_1.z,
        arg_0.w * arg_1.w
    );
}

static inline JML_Vec4u JML_mulVec4uU(
    const JML_Vec4u arg_0,
    const int arg_1
) {
    return JML_vec4u(
        arg_0.x * arg_1,
        arg_0.y * arg_1,
        arg_0.z * arg_1,
        arg_0.w * arg_1
    );
}

static inline JML_Vec4u JML_mulVec4uVec4u(
    const JML_Vec4u arg_0,
    const JML_Vec4u arg_1
) {
    return JML_vec4u(
        arg_0.x * arg_1.x,
        arg_0.y * arg_1.y,
        arg_0.z * arg_1.z,
        arg_0.w * arg_1.w
    );
}

#define JML_mul_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                      \
    double: _Generic(                             \
        (arg_1),                                  \
        JML_Mat2x2d: JML_mulDMat2x2d,             \
        JML_Mat3x3d: JML_mulDMat3x3d,             \
        JML_Mat4x4d: JML_mulDMat4x4d,             \
        JML_Vec2d: JML_mulDVec2d,                 \
        JML_Vec3d: JML_mulDVec3d,                 \
        JML_Vec4d: JML_mulDVec4d,                 \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    float: _Generic(                              \
        (arg_1),                                  \
        JML_Mat2x2f: JML_mulFMat2x2f,             \
        JML_Mat3x3f: JML_mulFMat3x3f,             \
        JML_Mat4x4f: JML_mulFMat4x4f,             \
        JML_Vec2f: JML_mulFVec2f,                 \
        JML_Vec3f: JML_mulFVec3f,                 \
        JML_Vec4f: JML_mulFVec4f,                 \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    int: _Generic(                                \
        (arg_1),                                  \
        JML_Vec2i: JML_mulIVec2i,                 \
        JML_Vec3i: JML_mulIVec3i,                 \
        JML_Vec4i: JML_mulIVec4i,                 \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    unsigned: _Generic(                           \
        (arg_1),                                  \
        JML_Vec2u: JML_mulUVec2u,                 \
        JML_Vec3u: JML_mulUVec3u,                 \
        JML_Vec4u: JML_mulUVec4u,                 \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Mat2x2d: _Generic(                        \
        (arg_1),                                  \
        double: JML_mulMat2x2dD,                  \
        JML_Mat2x2d: JML_mulMat2x2dMat2x2d,       \
        JML_Vec2d: JML_mulMat2x2dVec2d,           \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Mat2x2f: _Generic(                        \
        (arg_1),                                  \
        float: JML_mulMat2x2fF,                   \
        JML_Mat2x2f: JML_mulMat2x2fMat2x2f,       \
        JML_Vec2f: JML_mulMat2x2fVec2f,           \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Mat3x3d: _Generic(                        \
        (arg_1),                                  \
        double: JML_mulMat3x3dD,                  \
        JML_Mat3x3d: JML_mulMat3x3dMat3x3d,       \
        JML_Vec3d: JML_mulMat3x3dVec3d,           \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Mat3x3f: _Generic(                        \
        (arg_1),                                  \
        float: JML_mulMat3x3fF,                   \
        JML_Mat3x3f: JML_mulMat3x3fMat3x3f,       \
        JML_Vec3f: JML_mulMat3x3fVec3f,           \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Mat4x4d: _Generic(                        \
        (arg_1),                                  \
        double: JML_mulMat4x4dD,                  \
        JML_Mat4x4d: JML_mulMat4x4dMat4x4d,       \
        JML_Vec4d: JML_mulMat4x4dVec4d,           \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Mat4x4f: _Generic(                        \
        (arg_1),                                  \
        float: JML_mulMat4x4fF,                   \
        JML_Mat4x4f: JML_mulMat4x4fMat4x4f,       \
        JML_Vec4f: JML_mulMat4x4fVec4f,           \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        double: JML_mulVec2dD,                    \
        JML_Mat2x2d: JML_mulVec2dMat2x2d,         \
        JML_Vec2d: JML_mulVec2dVec2d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        float: JML_mulVec2fF,                     \
        JML_Mat2x2f: JML_mulVec2fMat2x2f,         \
        JML_Vec2f: JML_mulVec2fVec2f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2i: _Generic(                          \
        (arg_1),                                  \
        int: JML_mulVec2iI,                       \
        JML_Vec2i: JML_mulVec2iVec2i,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec2u: _Generic(                          \
        (arg_1),                                  \
        unsigned: JML_mulVec2uU,                  \
        JML_Vec2u: JML_mulVec2uVec2u,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        double: JML_mulVec3dD,                    \
        JML_Mat3x3d: JML_mulVec3dMat3x3d,         \
        JML_Vec3d: JML_mulVec3dVec3d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        float: JML_mulVec3fF,                     \
        JML_Mat3x3f: JML_mulVec3fMat3x3f,         \
        JML_Vec3f: JML_mulVec3fVec3f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3i: _Generic(                          \
        (arg_1),                                  \
        int: JML_mulVec3iI,                       \
        JML_Vec3i: JML_mulVec3iVec3i,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec3u: _Generic(                          \
        (arg_1),                                  \
        unsigned: JML_mulVec3uU,                  \
        JML_Vec3u: JML_mulVec3uVec3u,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        double: JML_mulVec4dD,                    \
        JML_Mat4x4d: JML_mulVec4dMat4x4d,         \
        JML_Vec4d: JML_mulVec4dVec4d,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        float: JML_mulVec4fF,                     \
        JML_Mat4x4f: JML_mulVec4fMat4x4f,         \
        JML_Vec4f: JML_mulVec4fVec4f,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4i: _Generic(                          \
        (arg_1),                                  \
        int: JML_mulVec4iI,                       \
        JML_Vec4i: JML_mulVec4iVec4i,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    JML_Vec4u: _Generic(                          \
        (arg_1),                                  \
        unsigned: JML_mulVec4uU,                  \
        JML_Vec4u: JML_mulVec4uVec4u,             \
        default: JML_INVALID_ARGUMENT_TYPES       \
    ),                                            \
    default: JML_INVALID_ARGUMENT_TYPES           \
)(arg_0, arg_1)

#define JML_mul(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mul_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_ARITHMETIC_MUL_H

#ifdef JML_WITHOUT_PREFIX

#define mul(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mul_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
