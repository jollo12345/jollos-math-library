#ifndef JML_MATRIX_DETERMINANT_H
#define JML_MATRIX_DETERMINANT_H

#include "jml/types/mat2x2d.h"
#include "jml/types/mat2x2f.h"
#include "jml/types/mat3x3d.h"
#include "jml/types/mat3x3f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/util.h"

static inline double JML_determinantMat2x2d(
    const JML_Mat2x2d arg
) {
    return arg.m00 * arg.m11 - arg.m01 * arg.m10;
}

static inline float JML_determinantMat2x2f(
    const JML_Mat2x2f arg
) {
    return arg.m00 * arg.m11 - arg.m01 * arg.m10;
}

static inline double JML_determinantMat3x3d(
    const JML_Mat3x3d arg
) {
    return arg.m00 * (arg.m11 * arg.m22 - arg.m12 * arg.m21) - arg.m01 * (arg.m10 * arg.m22 - arg.m12 * arg.m20) + arg.m02 * (arg.m10 * arg.m21 - arg.m11 * arg.m20);
}

static inline float JML_determinantMat3x3f(
    const JML_Mat3x3f arg
) {
    return arg.m00 * (arg.m11 * arg.m22 - arg.m12 * arg.m21) - arg.m01 * (arg.m10 * arg.m22 - arg.m12 * arg.m20) + arg.m02 * (arg.m10 * arg.m21 - arg.m11 * arg.m20);
}

static inline double JML_determinantMat4x4d(
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

    return s0 * c5 - s1 * c4 + s2 * c3 + s3 * c2 - s4 * c1 + s5 * c0;
}

static inline float JML_determinantMat4x4f(
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

    return s0 * c5 - s1 * c4 + s2 * c3 + s3 * c2 - s4 * c1 + s5 * c0;
}

#define JML_determinant_GENERIC_1(arg) _Generic( \
    (arg),                                       \
    JML_Mat2x2d: JML_determinantMat2x2d,         \
    JML_Mat2x2f: JML_determinantMat2x2f,         \
    JML_Mat3x3d: JML_determinantMat3x3d,         \
    JML_Mat3x3f: JML_determinantMat3x3f,         \
    JML_Mat4x4d: JML_determinantMat4x4d,         \
    JML_Mat4x4f: JML_determinantMat4x4f,         \
    default: JML_INVALID_ARGUMENT_TYPES          \
)(arg)

#define JML_determinant(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_determinant_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_MATRIX_DETERMINANT_H

#ifdef JML_WITHOUT_PREFIX

#define determinant(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_determinant_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif