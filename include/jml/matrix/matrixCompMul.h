#ifndef JML_MATRIX_MATRIX_COMP_MUL_H
#define JML_MATRIX_MATRIX_COMP_MUL_H

#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/types/mat2x2d.h"
#include "jml/types/mat2x2f.h"
#include "jml/types/mat3x3d.h"
#include "jml/types/mat3x3f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

static inline JML_Mat2x2d JML_matrixCompMulMat2x2dMat2x2d(
    const JML_Mat2x2d arg_1,
    const JML_Mat2x2d arg_2
) {
    return JML_mat2x2d(
        arg_1.m00 * arg_2.m00, arg_1.m01 * arg_2.m01,
        arg_1.m10 * arg_2.m10, arg_1.m11 * arg_2.m11
    );
}

static inline JML_Mat2x2f JML_matrixCompMulMat2x2fMat2x2f(
    const JML_Mat2x2f arg_1,
    const JML_Mat2x2f arg_2
) {
    return JML_mat2x2f(
        arg_1.m00 * arg_2.m00, arg_1.m01 * arg_2.m01,
        arg_1.m10 * arg_2.m10, arg_1.m11 * arg_2.m11
    );
}

static inline JML_Mat3x3d JML_matrixCompMulMat3x3dMat3x3d(
    const JML_Mat3x3d arg_1,
    const JML_Mat3x3d arg_2
) {
    return JML_mat3x3d(
        arg_1.m00 * arg_2.m00, arg_1.m01 * arg_2.m01, arg_1.m02 * arg_2.m02,
        arg_1.m10 * arg_2.m10, arg_1.m11 * arg_2.m11, arg_1.m12 * arg_2.m12,
        arg_1.m20 * arg_2.m20, arg_1.m21 * arg_2.m21, arg_1.m22 * arg_2.m22
    );
}

static inline JML_Mat3x3f JML_matrixCompMulMat3x3fMat3x3f(
    const JML_Mat3x3f arg_1,
    const JML_Mat3x3f arg_2
) {
    return JML_mat3x3f(
        arg_1.m00 * arg_2.m00, arg_1.m01 * arg_2.m01, arg_1.m02 * arg_2.m02,
        arg_1.m10 * arg_2.m10, arg_1.m11 * arg_2.m11, arg_1.m12 * arg_2.m12,
        arg_1.m20 * arg_2.m20, arg_1.m21 * arg_2.m21, arg_1.m22 * arg_2.m22
    );
}

static inline JML_Mat4x4d JML_matrixCompMulMat4x4dMat4x4d(
    const JML_Mat4x4d arg_1,
    const JML_Mat4x4d arg_2
) {
    return JML_mat4x4d(
        arg_1.m00 * arg_2.m00, arg_1.m01 * arg_2.m01, arg_1.m02 * arg_2.m02, arg_1.m03 * arg_2.m03,
        arg_1.m10 * arg_2.m10, arg_1.m11 * arg_2.m11, arg_1.m12 * arg_2.m12, arg_1.m13 * arg_2.m13,
        arg_1.m20 * arg_2.m20, arg_1.m21 * arg_2.m21, arg_1.m22 * arg_2.m22, arg_1.m23 * arg_2.m23,
        arg_1.m30 * arg_2.m30, arg_1.m31 * arg_2.m31, arg_1.m32 * arg_2.m32, arg_1.m33 * arg_2.m33
    );
}

static inline JML_Mat4x4f JML_matrixCompMulMat4x4fMat4x4f(
    const JML_Mat4x4f arg_1,
    const JML_Mat4x4f arg_2
) {
    return JML_mat4x4f(
        arg_1.m00 * arg_2.m00, arg_1.m01 * arg_2.m01, arg_1.m02 * arg_2.m02, arg_1.m03 * arg_2.m03,
        arg_1.m10 * arg_2.m10, arg_1.m11 * arg_2.m11, arg_1.m12 * arg_2.m12, arg_1.m13 * arg_2.m13,
        arg_1.m20 * arg_2.m20, arg_1.m21 * arg_2.m21, arg_1.m22 * arg_2.m22, arg_1.m23 * arg_2.m23,
        arg_1.m30 * arg_2.m30, arg_1.m31 * arg_2.m31, arg_1.m32 * arg_2.m32, arg_1.m33 * arg_2.m33
    );
}

#define JML_matrixCompMul_GENERIC_2(arg_1, arg_2) _Generic( \
    (arg_1),                                                \
    JML_Mat2x2d: _Generic(                                  \
        (arg_2),                                            \
        JML_Mat2x2d: JML_matrixCompMulMat2x2dMat2x2d,       \
        default: JML_INVALID_ARGUMENT_TYPES                 \
    ),                                                      \
    JML_Mat2x2f: _Generic(                                  \
        (arg_2),                                            \
        JML_Mat2x2f: JML_matrixCompMulMat2x2fMat2x2f,       \
        default: JML_INVALID_ARGUMENT_TYPES                 \
    ),                                                      \
    JML_Mat3x3d: _Generic(                                  \
        (arg_2),                                            \
        JML_Mat3x3d: JML_matrixCompMulMat3x3dMat3x3d,       \
        default: JML_INVALID_ARGUMENT_TYPES                 \
    ),                                                      \
    JML_Mat3x3f: _Generic(                                  \
        (arg_2),                                            \
        JML_Mat3x3f: JML_matrixCompMulMat3x3fMat3x3f,       \
        default: JML_INVALID_ARGUMENT_TYPES                 \
    ),                                                      \
    JML_Mat4x4d: _Generic(                                  \
        (arg_2),                                            \
        JML_Mat4x4d: JML_matrixCompMulMat4x4dMat4x4d,       \
        default: JML_INVALID_ARGUMENT_TYPES                 \
    ),                                                      \
    JML_Mat4x4f: _Generic(                                  \
        (arg_2),                                            \
        JML_Mat4x4f: JML_matrixCompMulMat4x4fMat4x4f,       \
        default: JML_INVALID_ARGUMENT_TYPES                 \
    ),                                                      \
    default: JML_INVALID_ARGUMENT_TYPES                     \
)(arg_1, arg_2)

#define JML_matrixCompMul(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_matrixCompMul_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_MATRIX_MATRIX_COMP_MUL_H

#ifdef JML_WITHOUT_PREFIX

#define matrixCompMul(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_matrixCompMul_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif