#ifndef JML_MATRIX_TRANSPOSE_H
#define JML_MATRIX_TRANSPOSE_H

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
#include "jml/util.h"

static inline JML_Mat2x2d JML_transposeMat2x2d(
    const JML_Mat2x2d arg
) {
    return JML_mat2x2d(
        arg.m00, arg.m10,
        arg.m01, arg.m11
    );
}

static inline JML_Mat2x2f JML_transposeMat2x2f(
    const JML_Mat2x2f arg
) {
    return JML_mat2x2f(
        arg.m00, arg.m10,
        arg.m01, arg.m11
    );
}

static inline JML_Mat3x3d JML_transposeMat3x3d(
    const JML_Mat3x3d arg
) {
    return JML_mat3x3d(
        arg.m00, arg.m10, arg.m20,
        arg.m01, arg.m11, arg.m21,
        arg.m02, arg.m12, arg.m22
    );
}

static inline JML_Mat3x3f JML_transposeMat3x3f(
    const JML_Mat3x3f arg
) {
    return JML_mat3x3f(
        arg.m00, arg.m10, arg.m20,
        arg.m01, arg.m11, arg.m21,
        arg.m02, arg.m12, arg.m22
    );
}

static inline JML_Mat4x4d JML_transposeMat4x4d(
    const JML_Mat4x4d arg
) {
    return JML_mat4x4d(
        arg.m00, arg.m10, arg.m20, arg.m30,
        arg.m01, arg.m11, arg.m21, arg.m31,
        arg.m02, arg.m12, arg.m22, arg.m32,
        arg.m03, arg.m13, arg.m23, arg.m33
    );
}

static inline JML_Mat4x4f JML_transposeMat4x4f(
    const JML_Mat4x4f arg
) {
    return JML_mat4x4f(
        arg.m00, arg.m10, arg.m20, arg.m30,
        arg.m01, arg.m11, arg.m21, arg.m31,
        arg.m02, arg.m12, arg.m22, arg.m32,
        arg.m03, arg.m13, arg.m23, arg.m33
    );
}

#define JML_transpose_GENERIC_1(arg) _Generic( \
    (arg),                                     \
    JML_Mat2x2d: JML_transposeMat2x2d,         \
    JML_Mat2x2f: JML_transposeMat2x2f,         \
    JML_Mat3x3d: JML_transposeMat3x3d,         \
    JML_Mat3x3f: JML_transposeMat3x3f,         \
    JML_Mat4x4d: JML_transposeMat4x4d,         \
    JML_Mat4x4f: JML_transposeMat4x4f,         \
    default: JML_INVALID_ARGUMENT_TYPES        \
)(arg)

#define JML_transpose(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_transpose_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_MATRIX_TRANSPOSE_H

#ifdef JML_WITHOUT_PREFIX

#define transpose(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_transpose_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif