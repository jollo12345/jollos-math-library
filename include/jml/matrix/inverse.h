#ifndef JML_MATRIX_INVERSE_H
#define JML_MATRIX_INVERSE_H

#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/matrix/determinant.h"
#include "jml/types/mat2x2d.h"
#include "jml/types/mat2x2f.h"
#include "jml/types/mat3x3d.h"
#include "jml/types/mat3x3f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/util.h"

static inline JML_Mat2x2d JML_inverseMat2x2d(
    const JML_Mat2x2d arg
) {
    const double inv_det = 1.0 / JML_determinant(arg);

    const double r00 = arg.m11 * inv_det;
    const double r01 = -arg.m01 * inv_det;
    const double r10 = -arg.m10 * inv_det;
    const double r11 = arg.m00 * inv_det;

    return JML_mat2x2d(
        r00, r01,
        r10, r11
    );
}

static inline JML_Mat2x2f JML_inverseMat2x2f(
    const JML_Mat2x2f arg
) {
    const float inv_det = 1.0f / JML_determinant(arg);

    const float r00 = arg.m11 * inv_det;
    const float r01 = -arg.m01 * inv_det;
    const float r10 = -arg.m10 * inv_det;
    const float r11 = arg.m00 * inv_det;

    return JML_mat2x2f(
        r00, r01,
        r10, r11
    );
}

static inline JML_Mat3x3d JML_inverseMat3x3d(
    const JML_Mat3x3d arg
) {
    const double c00 = arg.m11 * arg.m22 - arg.m12 * arg.m21;
    const double c01 = arg.m12 * arg.m20 - arg.m10 * arg.m22;
    const double c02 = arg.m10 * arg.m21 - arg.m11 * arg.m20;
    const double c10 = arg.m02 * arg.m21 - arg.m01 * arg.m22;
    const double c11 = arg.m00 * arg.m22 - arg.m02 * arg.m20;
    const double c12 = arg.m01 * arg.m20 - arg.m00 * arg.m21;
    const double c20 = arg.m01 * arg.m12 - arg.m02 * arg.m11;
    const double c21 = arg.m02 * arg.m10 - arg.m00 * arg.m12;
    const double c22 = arg.m00 * arg.m11 - arg.m01 * arg.m10;

    const double inv_det = 1.0 / (arg.m00 * c00 + arg.m01 * c01 + arg.m02 * c02);

    const double r00 = c00 * inv_det, r01 = c10 * inv_det, r02 = c20 * inv_det;
    const double r10 = c01 * inv_det, r11 = c11 * inv_det, r12 = c21 * inv_det;
    const double r20 = c02 * inv_det, r21 = c12 * inv_det, r22 = c22 * inv_det;

    return JML_mat3x3d(
        r00, r01, r02,
        r10, r11, r12,
        r20, r21, r22
    );
}

static inline JML_Mat3x3f JML_inverseMat3x3f(
    const JML_Mat3x3f arg
) {
    const float c00 = arg.m11 * arg.m22 - arg.m12 * arg.m21;
    const float c01 = arg.m12 * arg.m20 - arg.m10 * arg.m22;
    const float c02 = arg.m10 * arg.m21 - arg.m11 * arg.m20;
    const float c10 = arg.m02 * arg.m21 - arg.m01 * arg.m22;
    const float c11 = arg.m00 * arg.m22 - arg.m02 * arg.m20;
    const float c12 = arg.m01 * arg.m20 - arg.m00 * arg.m21;
    const float c20 = arg.m01 * arg.m12 - arg.m02 * arg.m11;
    const float c21 = arg.m02 * arg.m10 - arg.m00 * arg.m12;
    const float c22 = arg.m00 * arg.m11 - arg.m01 * arg.m10;

    const float inv_det = 1.0f / (arg.m00 * c00 + arg.m01 * c01 + arg.m02 * c02);

    const float r00 = c00 * inv_det, r01 = c10 * inv_det, r02 = c20 * inv_det;
    const float r10 = c01 * inv_det, r11 = c11 * inv_det, r12 = c21 * inv_det;
    const float r20 = c02 * inv_det, r21 = c12 * inv_det, r22 = c22 * inv_det;

    return JML_mat3x3f(
        r00, r01, r02,
        r10, r11, r12,
        r20, r21, r22
    );
}

static inline JML_Mat4x4d JML_inverseMat4x4d(
    const JML_Mat4x4d arg
) {
    const double s0 = arg.m00 * arg.m11 - arg.m10 * arg.m01;
    const double s1 = arg.m00 * arg.m12 - arg.m10 * arg.m02;
    const double s2 = arg.m00 * arg.m13 - arg.m10 * arg.m03;
    const double s3 = arg.m01 * arg.m12 - arg.m11 * arg.m02;
    const double s4 = arg.m01 * arg.m13 - arg.m11 * arg.m03;
    const double s5 = arg.m02 * arg.m13 - arg.m12 * arg.m03;

    const double c5 = arg.m22 * arg.m33 - arg.m32 * arg.m23;
    const double c4 = arg.m21 * arg.m33 - arg.m31 * arg.m23;
    const double c3 = arg.m21 * arg.m32 - arg.m31 * arg.m22;
    const double c2 = arg.m20 * arg.m33 - arg.m30 * arg.m23;
    const double c1 = arg.m20 * arg.m32 - arg.m30 * arg.m22;
    const double c0 = arg.m20 * arg.m31 - arg.m30 * arg.m21;

    const double inv_det = 1.0 / (s0 * c5 - s1 * c4 + s2 * c3 + s3 * c2 - s4 * c1 + s5 * c0);

    const double r00 = (arg.m11 * c5 - arg.m12 * c4 + arg.m13 * c3) * inv_det;
    const double r01 = (-arg.m01 * c5 + arg.m02 * c4 - arg.m03 * c3) * inv_det;
    const double r02 = (arg.m31 * s5 - arg.m32 * s4 + arg.m33 * s3) * inv_det;
    const double r03 = (-arg.m21 * s5 + arg.m22 * s4 - arg.m23 * s3) * inv_det;

    const double r10 = (-arg.m10 * c5 + arg.m12 * c2 - arg.m13 * c1) * inv_det;
    const double r11 = (arg.m00 * c5 - arg.m02 * c2 + arg.m03 * c1) * inv_det;
    const double r12 = (-arg.m30 * s5 + arg.m32 * s2 - arg.m33 * s1) * inv_det;
    const double r13 = (arg.m20 * s5 - arg.m22 * s2 + arg.m23 * s1) * inv_det;

    const double r20 = (arg.m10 * c4 - arg.m11 * c2 + arg.m13 * c0) * inv_det;
    const double r21 = (-arg.m00 * c4 + arg.m01 * c2 - arg.m03 * c0) * inv_det;
    const double r22 = (arg.m30 * s4 - arg.m31 * s2 + arg.m33 * s0) * inv_det;
    const double r23 = (-arg.m20 * s4 + arg.m21 * s2 - arg.m23 * s0) * inv_det;

    const double r30 = (-arg.m10 * c3 + arg.m11 * c1 - arg.m12 * c0) * inv_det;
    const double r31 = (arg.m00 * c3 - arg.m01 * c1 + arg.m02 * c0) * inv_det;
    const double r32 = (-arg.m30 * s3 + arg.m31 * s1 - arg.m32 * s0) * inv_det;
    const double r33 = (arg.m20 * s3 - arg.m21 * s1 + arg.m22 * s0) * inv_det;

    return JML_mat4x4d(
        r00, r01, r02, r03,
        r10, r11, r12, r13,
        r20, r21, r22, r23,
        r30, r31, r32, r33
    );
}

static inline JML_Mat4x4f JML_inverseMat4x4f(
    const JML_Mat4x4f arg
) {
    const float s0 = arg.m00 * arg.m11 - arg.m10 * arg.m01;
    const float s1 = arg.m00 * arg.m12 - arg.m10 * arg.m02;
    const float s2 = arg.m00 * arg.m13 - arg.m10 * arg.m03;
    const float s3 = arg.m01 * arg.m12 - arg.m11 * arg.m02;
    const float s4 = arg.m01 * arg.m13 - arg.m11 * arg.m03;
    const float s5 = arg.m02 * arg.m13 - arg.m12 * arg.m03;

    const float c5 = arg.m22 * arg.m33 - arg.m32 * arg.m23;
    const float c4 = arg.m21 * arg.m33 - arg.m31 * arg.m23;
    const float c3 = arg.m21 * arg.m32 - arg.m31 * arg.m22;
    const float c2 = arg.m20 * arg.m33 - arg.m30 * arg.m23;
    const float c1 = arg.m20 * arg.m32 - arg.m30 * arg.m22;
    const float c0 = arg.m20 * arg.m31 - arg.m30 * arg.m21;

    const float inv_det = 1.0f / (s0 * c5 - s1 * c4 + s2 * c3 + s3 * c2 - s4 * c1 + s5 * c0);

    const float r00 = (arg.m11 * c5 - arg.m12 * c4 + arg.m13 * c3) * inv_det;
    const float r01 = (-arg.m01 * c5 + arg.m02 * c4 - arg.m03 * c3) * inv_det;
    const float r02 = (arg.m31 * s5 - arg.m32 * s4 + arg.m33 * s3) * inv_det;
    const float r03 = (-arg.m21 * s5 + arg.m22 * s4 - arg.m23 * s3) * inv_det;

    const float r10 = (-arg.m10 * c5 + arg.m12 * c2 - arg.m13 * c1) * inv_det;
    const float r11 = (arg.m00 * c5 - arg.m02 * c2 + arg.m03 * c1) * inv_det;
    const float r12 = (-arg.m30 * s5 + arg.m32 * s2 - arg.m33 * s1) * inv_det;
    const float r13 = (arg.m20 * s5 - arg.m22 * s2 + arg.m23 * s1) * inv_det;

    const float r20 = (arg.m10 * c4 - arg.m11 * c2 + arg.m13 * c0) * inv_det;
    const float r21 = (-arg.m00 * c4 + arg.m01 * c2 - arg.m03 * c0) * inv_det;
    const float r22 = (arg.m30 * s4 - arg.m31 * s2 + arg.m33 * s0) * inv_det;
    const float r23 = (-arg.m20 * s4 + arg.m21 * s2 - arg.m23 * s0) * inv_det;

    const float r30 = (-arg.m10 * c3 + arg.m11 * c1 - arg.m12 * c0) * inv_det;
    const float r31 = (arg.m00 * c3 - arg.m01 * c1 + arg.m02 * c0) * inv_det;
    const float r32 = (-arg.m30 * s3 + arg.m31 * s1 - arg.m32 * s0) * inv_det;
    const float r33 = (arg.m20 * s3 - arg.m21 * s1 + arg.m22 * s0) * inv_det;

    return JML_mat4x4f(
        r00, r01, r02, r03,
        r10, r11, r12, r13,
        r20, r21, r22, r23,
        r30, r31, r32, r33
    );
}

#define JML_inverse_GENERIC_1(arg) _Generic( \
    (arg),                                   \
    JML_Mat2x2d: JML_inverseMat2x2d,         \
    JML_Mat2x2f: JML_inverseMat2x2f,         \
    JML_Mat3x3d: JML_inverseMat3x3d,         \
    JML_Mat3x3f: JML_inverseMat3x3f,         \
    JML_Mat4x4d: JML_inverseMat4x4d,         \
    JML_Mat4x4f: JML_inverseMat4x4f,         \
    default: (void (*)(void))0               \
)(arg)

#define JML_inverse(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_inverse_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_MATRIX_INVERSE_H

#ifdef JML_WITHOUT_PREFIX

#define inverse(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_inverse_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif