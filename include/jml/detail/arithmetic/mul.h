#ifndef JML_DETAIL_ARITHMETIC_MUL_H
#define JML_DETAIL_ARITHMETIC_MUL_H

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

static inline JML_Mat2x2d JML_mulDMat2x2d(
    const double arg_0,
    const JML_Mat2x2d arg_1
) {
    return JML_mat2x2d(
        arg_0 * arg_1.data[0][0],
        arg_0 * arg_1.data[0][1],
        arg_0 * arg_1.data[1][0],
        arg_0 * arg_1.data[1][1]
    );
}

static inline JML_Mat3x3d JML_mulDMat3x3d(
    const double arg_0,
    const JML_Mat3x3d arg_1
) {
    return JML_mat3x3d(
        arg_0 * arg_1.data[0][0],
        arg_0 * arg_1.data[0][1],
        arg_0 * arg_1.data[0][2],
        arg_0 * arg_1.data[1][0],
        arg_0 * arg_1.data[1][1],
        arg_0 * arg_1.data[1][2],
        arg_0 * arg_1.data[2][0],
        arg_0 * arg_1.data[2][1],
        arg_0 * arg_1.data[2][2]
    );
}

static inline JML_Mat4x4d JML_mulDMat4x4d(
    const double arg_0,
    const JML_Mat4x4d arg_1
) {
    return JML_mat4x4d(
        arg_0 * arg_1.data[0][0],
        arg_0 * arg_1.data[0][1],
        arg_0 * arg_1.data[0][2],
        arg_0 * arg_1.data[0][3],
        arg_0 * arg_1.data[1][0],
        arg_0 * arg_1.data[1][1],
        arg_0 * arg_1.data[1][2],
        arg_0 * arg_1.data[1][3],
        arg_0 * arg_1.data[2][0],
        arg_0 * arg_1.data[2][1],
        arg_0 * arg_1.data[2][2],
        arg_0 * arg_1.data[2][3],
        arg_0 * arg_1.data[3][0],
        arg_0 * arg_1.data[3][1],
        arg_0 * arg_1.data[3][2],
        arg_0 * arg_1.data[3][3]
    );
}

static inline JML_Vec2d JML_mulDVec2d(
    const double arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        arg_0 * arg_1.data[0],
        arg_0 * arg_1.data[1]
    );
}

static inline JML_Vec3d JML_mulDVec3d(
    const double arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        arg_0 * arg_1.data[0],
        arg_0 * arg_1.data[1],
        arg_0 * arg_1.data[2]
    );
}

static inline JML_Vec4d JML_mulDVec4d(
    const double arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        arg_0 * arg_1.data[0],
        arg_0 * arg_1.data[1],
        arg_0 * arg_1.data[2],
        arg_0 * arg_1.data[3]
    );
}

static inline float JML_mulFF(
    const float arg_0,
    const float arg_1
) {
    return arg_0 * arg_1;
}

static inline JML_Mat2x2f JML_mulFMat2x2f(
    const float arg_0,
    const JML_Mat2x2f arg_1
) {
    return JML_mat2x2f(
        arg_0 * arg_1.data[0][0],
        arg_0 * arg_1.data[0][1],
        arg_0 * arg_1.data[1][0],
        arg_0 * arg_1.data[1][1]
    );
}

static inline JML_Mat3x3f JML_mulFMat3x3f(
    const float arg_0,
    const JML_Mat3x3f arg_1
) {
    return JML_mat3x3f(
        arg_0 * arg_1.data[0][0],
        arg_0 * arg_1.data[0][1],
        arg_0 * arg_1.data[0][2],
        arg_0 * arg_1.data[1][0],
        arg_0 * arg_1.data[1][1],
        arg_0 * arg_1.data[1][2],
        arg_0 * arg_1.data[2][0],
        arg_0 * arg_1.data[2][1],
        arg_0 * arg_1.data[2][2]
    );
}

static inline JML_Mat4x4f JML_mulFMat4x4f(
    const float arg_0,
    const JML_Mat4x4f arg_1
) {
    return JML_mat4x4f(
        arg_0 * arg_1.data[0][0],
        arg_0 * arg_1.data[0][1],
        arg_0 * arg_1.data[0][2],
        arg_0 * arg_1.data[0][3],
        arg_0 * arg_1.data[1][0],
        arg_0 * arg_1.data[1][1],
        arg_0 * arg_1.data[1][2],
        arg_0 * arg_1.data[1][3],
        arg_0 * arg_1.data[2][0],
        arg_0 * arg_1.data[2][1],
        arg_0 * arg_1.data[2][2],
        arg_0 * arg_1.data[2][3],
        arg_0 * arg_1.data[3][0],
        arg_0 * arg_1.data[3][1],
        arg_0 * arg_1.data[3][2],
        arg_0 * arg_1.data[3][3]
    );
}

static inline JML_Vec2f JML_mulFVec2f(
    const float arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        arg_0 * arg_1.data[0],
        arg_0 * arg_1.data[1]
    );
}

static inline JML_Vec3f JML_mulFVec3f(
    const float arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        arg_0 * arg_1.data[0],
        arg_0 * arg_1.data[1],
        arg_0 * arg_1.data[2]
    );
}

static inline JML_Vec4f JML_mulFVec4f(
    const float arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        arg_0 * arg_1.data[0],
        arg_0 * arg_1.data[1],
        arg_0 * arg_1.data[2],
        arg_0 * arg_1.data[3]
    );
}

static inline JML_Mat2x2d JML_mulMat2x2dD(
    const JML_Mat2x2d arg_0,
    const double arg_1
) {
    return JML_mat2x2d(
        arg_0.data[0][0] * arg_1,
        arg_0.data[0][1] * arg_1,
        arg_0.data[1][0] * arg_1,
        arg_0.data[1][1] * arg_1
    );
}

static inline JML_Mat2x2d JML_mulMat2x2dMat2x2d(
    const JML_Mat2x2d arg_0,
    const JML_Mat2x2d arg_1
) {
    return JML_mat2x2d(
        arg_0.data[0][0] * arg_1.data[0][0] + arg_0.data[1][0] * arg_1.data[0][1],
        arg_0.data[0][1] * arg_1.data[0][0] + arg_0.data[1][1] * arg_1.data[0][1],
        arg_0.data[0][0] * arg_1.data[1][0] + arg_0.data[1][0] * arg_1.data[1][1],
        arg_0.data[0][1] * arg_1.data[1][0] + arg_0.data[1][1] * arg_1.data[1][1]
    );
}

static inline JML_Vec2d JML_mulMat2x2dVec2d(
    const JML_Mat2x2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        arg_0.data[0][0] * arg_1.data[0] + arg_0.data[1][0] * arg_1.data[1],
        arg_0.data[0][1] * arg_1.data[0] + arg_0.data[1][1] * arg_1.data[1]
    );
}

static inline JML_Mat2x2f JML_mulMat2x2fF(
    const JML_Mat2x2f arg_0,
    const float arg_1
) {
    return JML_mat2x2f(
        arg_0.data[0][0] * arg_1,
        arg_0.data[0][1] * arg_1,
        arg_0.data[1][0] * arg_1,
        arg_0.data[1][1] * arg_1
    );
}

static inline JML_Mat2x2f JML_mulMat2x2fMat2x2f(
    const JML_Mat2x2f arg_0,
    const JML_Mat2x2f arg_1
) {
    return JML_mat2x2f(
        arg_0.data[0][0] * arg_1.data[0][0] + arg_0.data[1][0] * arg_1.data[0][1],
        arg_0.data[0][1] * arg_1.data[0][0] + arg_0.data[1][1] * arg_1.data[0][1],
        arg_0.data[0][0] * arg_1.data[1][0] + arg_0.data[1][0] * arg_1.data[1][1],
        arg_0.data[0][1] * arg_1.data[1][0] + arg_0.data[1][1] * arg_1.data[1][1]
    );
}

static inline JML_Vec2f JML_mulMat2x2fVec2f(
    const JML_Mat2x2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        arg_0.data[0][0] * arg_1.data[0] + arg_0.data[1][0] * arg_1.data[1],
        arg_0.data[0][1] * arg_1.data[0] + arg_0.data[1][1] * arg_1.data[1]
    );
}

static inline JML_Mat3x3d JML_mulMat3x3dD(
    const JML_Mat3x3d arg_0,
    const double arg_1
) {
    return JML_mat3x3d(
        arg_0.data[0][0] * arg_1,
        arg_0.data[0][1] * arg_1,
        arg_0.data[0][2] * arg_1,
        arg_0.data[1][0] * arg_1,
        arg_0.data[1][1] * arg_1,
        arg_0.data[1][2] * arg_1,
        arg_0.data[2][0] * arg_1,
        arg_0.data[2][1] * arg_1,
        arg_0.data[2][2] * arg_1
    );
}

static inline JML_Mat3x3d JML_mulMat3x3dMat3x3d(
    const JML_Mat3x3d arg_0,
    const JML_Mat3x3d arg_1
) {
    return JML_mat3x3d(
        arg_0.data[0][0] * arg_1.data[0][0] + arg_0.data[1][0] * arg_1.data[0][1] + arg_0.data[2][0] * arg_1.data[0][2],
        arg_0.data[0][1] * arg_1.data[0][0] + arg_0.data[1][1] * arg_1.data[0][1] + arg_0.data[2][1] * arg_1.data[0][2],
        arg_0.data[0][2] * arg_1.data[0][0] + arg_0.data[1][2] * arg_1.data[0][1] + arg_0.data[2][2] * arg_1.data[0][2],
        arg_0.data[0][0] * arg_1.data[1][0] + arg_0.data[1][0] * arg_1.data[1][1] + arg_0.data[2][0] * arg_1.data[1][2],
        arg_0.data[0][1] * arg_1.data[1][0] + arg_0.data[1][1] * arg_1.data[1][1] + arg_0.data[2][1] * arg_1.data[1][2],
        arg_0.data[0][2] * arg_1.data[1][0] + arg_0.data[1][2] * arg_1.data[1][1] + arg_0.data[2][2] * arg_1.data[1][2],
        arg_0.data[0][0] * arg_1.data[2][0] + arg_0.data[1][0] * arg_1.data[2][1] + arg_0.data[2][0] * arg_1.data[2][2],
        arg_0.data[0][1] * arg_1.data[2][0] + arg_0.data[1][1] * arg_1.data[2][1] + arg_0.data[2][1] * arg_1.data[2][2],
        arg_0.data[0][2] * arg_1.data[2][0] + arg_0.data[1][2] * arg_1.data[2][1] + arg_0.data[2][2] * arg_1.data[2][2]
    );
}

static inline JML_Vec3d JML_mulMat3x3dVec3d(
    const JML_Mat3x3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        arg_0.data[0][0] * arg_1.data[0] + arg_0.data[1][0] * arg_1.data[1] + arg_0.data[2][0] * arg_1.data[2],
        arg_0.data[0][1] * arg_1.data[0] + arg_0.data[1][1] * arg_1.data[1] + arg_0.data[2][1] * arg_1.data[2],
        arg_0.data[0][2] * arg_1.data[0] + arg_0.data[1][2] * arg_1.data[1] + arg_0.data[2][2] * arg_1.data[2]
    );
}

static inline JML_Mat3x3f JML_mulMat3x3fF(
    const JML_Mat3x3f arg_0,
    const float arg_1
) {
    return JML_mat3x3f(
        arg_0.data[0][0] * arg_1,
        arg_0.data[0][1] * arg_1,
        arg_0.data[0][2] * arg_1,
        arg_0.data[1][0] * arg_1,
        arg_0.data[1][1] * arg_1,
        arg_0.data[1][2] * arg_1,
        arg_0.data[2][0] * arg_1,
        arg_0.data[2][1] * arg_1,
        arg_0.data[2][2] * arg_1
    );
}

static inline JML_Mat3x3f JML_mulMat3x3fMat3x3f(
    const JML_Mat3x3f arg_0,
    const JML_Mat3x3f arg_1
) {
    return JML_mat3x3f(
        arg_0.data[0][0] * arg_1.data[0][0] + arg_0.data[1][0] * arg_1.data[0][1] + arg_0.data[2][0] * arg_1.data[0][2],
        arg_0.data[0][1] * arg_1.data[0][0] + arg_0.data[1][1] * arg_1.data[0][1] + arg_0.data[2][1] * arg_1.data[0][2],
        arg_0.data[0][2] * arg_1.data[0][0] + arg_0.data[1][2] * arg_1.data[0][1] + arg_0.data[2][2] * arg_1.data[0][2],
        arg_0.data[0][0] * arg_1.data[1][0] + arg_0.data[1][0] * arg_1.data[1][1] + arg_0.data[2][0] * arg_1.data[1][2],
        arg_0.data[0][1] * arg_1.data[1][0] + arg_0.data[1][1] * arg_1.data[1][1] + arg_0.data[2][1] * arg_1.data[1][2],
        arg_0.data[0][2] * arg_1.data[1][0] + arg_0.data[1][2] * arg_1.data[1][1] + arg_0.data[2][2] * arg_1.data[1][2],
        arg_0.data[0][0] * arg_1.data[2][0] + arg_0.data[1][0] * arg_1.data[2][1] + arg_0.data[2][0] * arg_1.data[2][2],
        arg_0.data[0][1] * arg_1.data[2][0] + arg_0.data[1][1] * arg_1.data[2][1] + arg_0.data[2][1] * arg_1.data[2][2],
        arg_0.data[0][2] * arg_1.data[2][0] + arg_0.data[1][2] * arg_1.data[2][1] + arg_0.data[2][2] * arg_1.data[2][2]
    );
}

static inline JML_Vec3f JML_mulMat3x3fVec3f(
    const JML_Mat3x3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        arg_0.data[0][0] * arg_1.data[0] + arg_0.data[1][0] * arg_1.data[1] + arg_0.data[2][0] * arg_1.data[2],
        arg_0.data[0][1] * arg_1.data[0] + arg_0.data[1][1] * arg_1.data[1] + arg_0.data[2][1] * arg_1.data[2],
        arg_0.data[0][2] * arg_1.data[0] + arg_0.data[1][2] * arg_1.data[1] + arg_0.data[2][2] * arg_1.data[2]
    );
}

static inline JML_Mat4x4d JML_mulMat4x4dD(
    const JML_Mat4x4d arg_0,
    const double arg_1
) {
    return JML_mat4x4d(
        arg_0.data[0][0] * arg_1,
        arg_0.data[0][1] * arg_1,
        arg_0.data[0][2] * arg_1,
        arg_0.data[0][3] * arg_1,
        arg_0.data[1][0] * arg_1,
        arg_0.data[1][1] * arg_1,
        arg_0.data[1][2] * arg_1,
        arg_0.data[1][3] * arg_1,
        arg_0.data[2][0] * arg_1,
        arg_0.data[2][1] * arg_1,
        arg_0.data[2][2] * arg_1,
        arg_0.data[2][3] * arg_1,
        arg_0.data[3][0] * arg_1,
        arg_0.data[3][1] * arg_1,
        arg_0.data[3][2] * arg_1,
        arg_0.data[3][3] * arg_1
    );
}

static inline JML_Mat4x4d JML_mulMat4x4dMat4x4d(
    const JML_Mat4x4d arg_0,
    const JML_Mat4x4d arg_1
) {
    return JML_mat4x4d(
        arg_0.data[0][0] * arg_1.data[0][0] + arg_0.data[1][0] * arg_1.data[0][1] + arg_0.data[2][0] * arg_1.data[0][2] + arg_0.data[3][0] * arg_1.data[0][3],
        arg_0.data[0][1] * arg_1.data[0][0] + arg_0.data[1][1] * arg_1.data[0][1] + arg_0.data[2][1] * arg_1.data[0][2] + arg_0.data[3][1] * arg_1.data[0][3],
        arg_0.data[0][2] * arg_1.data[0][0] + arg_0.data[1][2] * arg_1.data[0][1] + arg_0.data[2][2] * arg_1.data[0][2] + arg_0.data[3][2] * arg_1.data[0][3],
        arg_0.data[0][3] * arg_1.data[0][0] + arg_0.data[1][3] * arg_1.data[0][1] + arg_0.data[2][3] * arg_1.data[0][2] + arg_0.data[3][3] * arg_1.data[0][3],
        arg_0.data[0][0] * arg_1.data[1][0] + arg_0.data[1][0] * arg_1.data[1][1] + arg_0.data[2][0] * arg_1.data[1][2] + arg_0.data[3][0] * arg_1.data[1][3],
        arg_0.data[0][1] * arg_1.data[1][0] + arg_0.data[1][1] * arg_1.data[1][1] + arg_0.data[2][1] * arg_1.data[1][2] + arg_0.data[3][1] * arg_1.data[1][3],
        arg_0.data[0][2] * arg_1.data[1][0] + arg_0.data[1][2] * arg_1.data[1][1] + arg_0.data[2][2] * arg_1.data[1][2] + arg_0.data[3][2] * arg_1.data[1][3],
        arg_0.data[0][3] * arg_1.data[1][0] + arg_0.data[1][3] * arg_1.data[1][1] + arg_0.data[2][3] * arg_1.data[1][2] + arg_0.data[3][3] * arg_1.data[1][3],
        arg_0.data[0][0] * arg_1.data[2][0] + arg_0.data[1][0] * arg_1.data[2][1] + arg_0.data[2][0] * arg_1.data[2][2] + arg_0.data[3][0] * arg_1.data[2][3],
        arg_0.data[0][1] * arg_1.data[2][0] + arg_0.data[1][1] * arg_1.data[2][1] + arg_0.data[2][1] * arg_1.data[2][2] + arg_0.data[3][1] * arg_1.data[2][3],
        arg_0.data[0][2] * arg_1.data[2][0] + arg_0.data[1][2] * arg_1.data[2][1] + arg_0.data[2][2] * arg_1.data[2][2] + arg_0.data[3][2] * arg_1.data[2][3],
        arg_0.data[0][3] * arg_1.data[2][0] + arg_0.data[1][3] * arg_1.data[2][1] + arg_0.data[2][3] * arg_1.data[2][2] + arg_0.data[3][3] * arg_1.data[2][3],
        arg_0.data[0][0] * arg_1.data[3][0] + arg_0.data[1][0] * arg_1.data[3][1] + arg_0.data[2][0] * arg_1.data[3][2] + arg_0.data[3][0] * arg_1.data[3][3],
        arg_0.data[0][1] * arg_1.data[3][0] + arg_0.data[1][1] * arg_1.data[3][1] + arg_0.data[2][1] * arg_1.data[3][2] + arg_0.data[3][1] * arg_1.data[3][3],
        arg_0.data[0][2] * arg_1.data[3][0] + arg_0.data[1][2] * arg_1.data[3][1] + arg_0.data[2][2] * arg_1.data[3][2] + arg_0.data[3][2] * arg_1.data[3][3],
        arg_0.data[0][3] * arg_1.data[3][0] + arg_0.data[1][3] * arg_1.data[3][1] + arg_0.data[2][3] * arg_1.data[3][2] + arg_0.data[3][3] * arg_1.data[3][3]
    );
}

static inline JML_Vec4d JML_mulMat4x4dVec4d(
    const JML_Mat4x4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        arg_0.data[0][0] * arg_1.data[0] + arg_0.data[1][0] * arg_1.data[1] + arg_0.data[2][0] * arg_1.data[2] + arg_0.data[3][0] * arg_1.data[3],
        arg_0.data[0][1] * arg_1.data[0] + arg_0.data[1][1] * arg_1.data[1] + arg_0.data[2][1] * arg_1.data[2] + arg_0.data[3][1] * arg_1.data[3],
        arg_0.data[0][2] * arg_1.data[0] + arg_0.data[1][2] * arg_1.data[1] + arg_0.data[2][2] * arg_1.data[2] + arg_0.data[3][2] * arg_1.data[3],
        arg_0.data[0][3] * arg_1.data[0] + arg_0.data[1][3] * arg_1.data[1] + arg_0.data[2][3] * arg_1.data[2] + arg_0.data[3][3] * arg_1.data[3]
    );
}

static inline JML_Mat4x4f JML_mulMat4x4fF(
    const JML_Mat4x4f arg_0,
    const float arg_1
) {
    return JML_mat4x4f(
        arg_0.data[0][0] * arg_1,
        arg_0.data[0][1] * arg_1,
        arg_0.data[0][2] * arg_1,
        arg_0.data[0][3] * arg_1,
        arg_0.data[1][0] * arg_1,
        arg_0.data[1][1] * arg_1,
        arg_0.data[1][2] * arg_1,
        arg_0.data[1][3] * arg_1,
        arg_0.data[2][0] * arg_1,
        arg_0.data[2][1] * arg_1,
        arg_0.data[2][2] * arg_1,
        arg_0.data[2][3] * arg_1,
        arg_0.data[3][0] * arg_1,
        arg_0.data[3][1] * arg_1,
        arg_0.data[3][2] * arg_1,
        arg_0.data[3][3] * arg_1
    );
}

static inline JML_Mat4x4f JML_mulMat4x4fMat4x4f(
    const JML_Mat4x4f arg_0,
    const JML_Mat4x4f arg_1
) {
    return JML_mat4x4f(
        arg_0.data[0][0] * arg_1.data[0][0] + arg_0.data[1][0] * arg_1.data[0][1] + arg_0.data[2][0] * arg_1.data[0][2] + arg_0.data[3][0] * arg_1.data[0][3],
        arg_0.data[0][1] * arg_1.data[0][0] + arg_0.data[1][1] * arg_1.data[0][1] + arg_0.data[2][1] * arg_1.data[0][2] + arg_0.data[3][1] * arg_1.data[0][3],
        arg_0.data[0][2] * arg_1.data[0][0] + arg_0.data[1][2] * arg_1.data[0][1] + arg_0.data[2][2] * arg_1.data[0][2] + arg_0.data[3][2] * arg_1.data[0][3],
        arg_0.data[0][3] * arg_1.data[0][0] + arg_0.data[1][3] * arg_1.data[0][1] + arg_0.data[2][3] * arg_1.data[0][2] + arg_0.data[3][3] * arg_1.data[0][3],
        arg_0.data[0][0] * arg_1.data[1][0] + arg_0.data[1][0] * arg_1.data[1][1] + arg_0.data[2][0] * arg_1.data[1][2] + arg_0.data[3][0] * arg_1.data[1][3],
        arg_0.data[0][1] * arg_1.data[1][0] + arg_0.data[1][1] * arg_1.data[1][1] + arg_0.data[2][1] * arg_1.data[1][2] + arg_0.data[3][1] * arg_1.data[1][3],
        arg_0.data[0][2] * arg_1.data[1][0] + arg_0.data[1][2] * arg_1.data[1][1] + arg_0.data[2][2] * arg_1.data[1][2] + arg_0.data[3][2] * arg_1.data[1][3],
        arg_0.data[0][3] * arg_1.data[1][0] + arg_0.data[1][3] * arg_1.data[1][1] + arg_0.data[2][3] * arg_1.data[1][2] + arg_0.data[3][3] * arg_1.data[1][3],
        arg_0.data[0][0] * arg_1.data[2][0] + arg_0.data[1][0] * arg_1.data[2][1] + arg_0.data[2][0] * arg_1.data[2][2] + arg_0.data[3][0] * arg_1.data[2][3],
        arg_0.data[0][1] * arg_1.data[2][0] + arg_0.data[1][1] * arg_1.data[2][1] + arg_0.data[2][1] * arg_1.data[2][2] + arg_0.data[3][1] * arg_1.data[2][3],
        arg_0.data[0][2] * arg_1.data[2][0] + arg_0.data[1][2] * arg_1.data[2][1] + arg_0.data[2][2] * arg_1.data[2][2] + arg_0.data[3][2] * arg_1.data[2][3],
        arg_0.data[0][3] * arg_1.data[2][0] + arg_0.data[1][3] * arg_1.data[2][1] + arg_0.data[2][3] * arg_1.data[2][2] + arg_0.data[3][3] * arg_1.data[2][3],
        arg_0.data[0][0] * arg_1.data[3][0] + arg_0.data[1][0] * arg_1.data[3][1] + arg_0.data[2][0] * arg_1.data[3][2] + arg_0.data[3][0] * arg_1.data[3][3],
        arg_0.data[0][1] * arg_1.data[3][0] + arg_0.data[1][1] * arg_1.data[3][1] + arg_0.data[2][1] * arg_1.data[3][2] + arg_0.data[3][1] * arg_1.data[3][3],
        arg_0.data[0][2] * arg_1.data[3][0] + arg_0.data[1][2] * arg_1.data[3][1] + arg_0.data[2][2] * arg_1.data[3][2] + arg_0.data[3][2] * arg_1.data[3][3],
        arg_0.data[0][3] * arg_1.data[3][0] + arg_0.data[1][3] * arg_1.data[3][1] + arg_0.data[2][3] * arg_1.data[3][2] + arg_0.data[3][3] * arg_1.data[3][3]
    );
}

static inline JML_Vec4f JML_mulMat4x4fVec4f(
    const JML_Mat4x4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        arg_0.data[0][0] * arg_1.data[0] + arg_0.data[1][0] * arg_1.data[1] + arg_0.data[2][0] * arg_1.data[2] + arg_0.data[3][0] * arg_1.data[3],
        arg_0.data[0][1] * arg_1.data[0] + arg_0.data[1][1] * arg_1.data[1] + arg_0.data[2][1] * arg_1.data[2] + arg_0.data[3][1] * arg_1.data[3],
        arg_0.data[0][2] * arg_1.data[0] + arg_0.data[1][2] * arg_1.data[1] + arg_0.data[2][2] * arg_1.data[2] + arg_0.data[3][2] * arg_1.data[3],
        arg_0.data[0][3] * arg_1.data[0] + arg_0.data[1][3] * arg_1.data[1] + arg_0.data[2][3] * arg_1.data[2] + arg_0.data[3][3] * arg_1.data[3]
    );
}

static inline JML_Vec2d JML_mulVec2dD(
    const JML_Vec2d arg_0,
    const double arg_1
) {
    return JML_vec2d(
        arg_0.data[0] * arg_1,
        arg_0.data[1] * arg_1
    );
}

static inline JML_Vec2d JML_mulVec2dMat2x2d(
    const JML_Vec2d arg_0,
    const JML_Mat2x2d arg_1
) {
    return JML_vec2d(
        arg_0.data[0] * arg_1.data[0][0] + arg_0.data[1] * arg_1.data[0][1],
        arg_0.data[0] * arg_1.data[1][0] + arg_0.data[1] * arg_1.data[1][1]
    );
}

static inline JML_Vec2d JML_mulVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        arg_0.data[0] * arg_1.data[0],
        arg_0.data[1] * arg_1.data[1]
    );
}

static inline JML_Vec2f JML_mulVec2fF(
    const JML_Vec2f arg_0,
    const float arg_1
) {
    return JML_vec2f(
        arg_0.data[0] * arg_1,
        arg_0.data[1] * arg_1
    );
}

static inline JML_Vec2f JML_mulVec2fMat2x2f(
    const JML_Vec2f arg_0,
    const JML_Mat2x2f arg_1
) {
    return JML_vec2f(
        arg_0.data[0] * arg_1.data[0][0] + arg_0.data[1] * arg_1.data[0][1],
        arg_0.data[0] * arg_1.data[1][0] + arg_0.data[1] * arg_1.data[1][1]
    );
}

static inline JML_Vec2f JML_mulVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        arg_0.data[0] * arg_1.data[0],
        arg_0.data[1] * arg_1.data[1]
    );
}

static inline JML_Vec3d JML_mulVec3dD(
    const JML_Vec3d arg_0,
    const double arg_1
) {
    return JML_vec3d(
        arg_0.data[0] * arg_1,
        arg_0.data[1] * arg_1,
        arg_0.data[2] * arg_1
    );
}

static inline JML_Vec3d JML_mulVec3dMat3x3d(
    const JML_Vec3d arg_0,
    const JML_Mat3x3d arg_1
) {
    return JML_vec3d(
        arg_0.data[0] * arg_1.data[0][0] + arg_0.data[1] * arg_1.data[0][1] + arg_0.data[2] * arg_1.data[0][2],
        arg_0.data[0] * arg_1.data[1][0] + arg_0.data[1] * arg_1.data[1][1] + arg_0.data[2] * arg_1.data[1][2],
        arg_0.data[0] * arg_1.data[2][0] + arg_0.data[1] * arg_1.data[2][1] + arg_0.data[2] * arg_1.data[2][2]
    );
}

static inline JML_Vec3d JML_mulVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        arg_0.data[0] * arg_1.data[0],
        arg_0.data[1] * arg_1.data[1],
        arg_0.data[2] * arg_1.data[2]
    );
}

static inline JML_Vec3f JML_mulVec3fF(
    const JML_Vec3f arg_0,
    const float arg_1
) {
    return JML_vec3f(
        arg_0.data[0] * arg_1,
        arg_0.data[1] * arg_1,
        arg_0.data[2] * arg_1
    );
}

static inline JML_Vec3f JML_mulVec3fMat3x3f(
    const JML_Vec3f arg_0,
    const JML_Mat3x3f arg_1
) {
    return JML_vec3f(
        arg_0.data[0] * arg_1.data[0][0] + arg_0.data[1] * arg_1.data[0][1] + arg_0.data[2] * arg_1.data[0][2],
        arg_0.data[0] * arg_1.data[1][0] + arg_0.data[1] * arg_1.data[1][1] + arg_0.data[2] * arg_1.data[1][2],
        arg_0.data[0] * arg_1.data[2][0] + arg_0.data[1] * arg_1.data[2][1] + arg_0.data[2] * arg_1.data[2][2]
    );
}

static inline JML_Vec3f JML_mulVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        arg_0.data[0] * arg_1.data[0],
        arg_0.data[1] * arg_1.data[1],
        arg_0.data[2] * arg_1.data[2]
    );
}

static inline JML_Vec4d JML_mulVec4dD(
    const JML_Vec4d arg_0,
    const double arg_1
) {
    return JML_vec4d(
        arg_0.data[0] * arg_1,
        arg_0.data[1] * arg_1,
        arg_0.data[2] * arg_1,
        arg_0.data[3] * arg_1
    );
}

static inline JML_Vec4d JML_mulVec4dMat4x4d(
    const JML_Vec4d arg_0,
    const JML_Mat4x4d arg_1
) {
    return JML_vec4d(
        arg_0.data[0] * arg_1.data[0][0] + arg_0.data[1] * arg_1.data[0][1] + arg_0.data[2] * arg_1.data[0][2] + arg_0.data[3] * arg_1.data[0][3],
        arg_0.data[0] * arg_1.data[1][0] + arg_0.data[1] * arg_1.data[1][1] + arg_0.data[2] * arg_1.data[1][2] + arg_0.data[3] * arg_1.data[1][3],
        arg_0.data[0] * arg_1.data[2][0] + arg_0.data[1] * arg_1.data[2][1] + arg_0.data[2] * arg_1.data[2][2] + arg_0.data[3] * arg_1.data[2][3],
        arg_0.data[0] * arg_1.data[3][0] + arg_0.data[1] * arg_1.data[3][1] + arg_0.data[2] * arg_1.data[3][2] + arg_0.data[3] * arg_1.data[3][3]
    );
}

static inline JML_Vec4d JML_mulVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        arg_0.data[0] * arg_1.data[0],
        arg_0.data[1] * arg_1.data[1],
        arg_0.data[2] * arg_1.data[2],
        arg_0.data[3] * arg_1.data[3]
    );
}

static inline JML_Vec4f JML_mulVec4fF(
    const JML_Vec4f arg_0,
    const float arg_1
) {
    return JML_vec4f(
        arg_0.data[0] * arg_1,
        arg_0.data[1] * arg_1,
        arg_0.data[2] * arg_1,
        arg_0.data[3] * arg_1
    );
}

static inline JML_Vec4f JML_mulVec4fMat4x4f(
    const JML_Vec4f arg_0,
    const JML_Mat4x4f arg_1
) {
    return JML_vec4f(
        arg_0.data[0] * arg_1.data[0][0] + arg_0.data[1] * arg_1.data[0][1] + arg_0.data[2] * arg_1.data[0][2] + arg_0.data[3] * arg_1.data[0][3],
        arg_0.data[0] * arg_1.data[1][0] + arg_0.data[1] * arg_1.data[1][1] + arg_0.data[2] * arg_1.data[1][2] + arg_0.data[3] * arg_1.data[1][3],
        arg_0.data[0] * arg_1.data[2][0] + arg_0.data[1] * arg_1.data[2][1] + arg_0.data[2] * arg_1.data[2][2] + arg_0.data[3] * arg_1.data[2][3],
        arg_0.data[0] * arg_1.data[3][0] + arg_0.data[1] * arg_1.data[3][1] + arg_0.data[2] * arg_1.data[3][2] + arg_0.data[3] * arg_1.data[3][3]
    );
}

static inline JML_Vec4f JML_mulVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        arg_0.data[0] * arg_1.data[0],
        arg_0.data[1] * arg_1.data[1],
        arg_0.data[2] * arg_1.data[2],
        arg_0.data[3] * arg_1.data[3]
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
        default: (void (*)(void))0                \
    ),                                            \
    float: _Generic(                              \
        (arg_1),                                  \
        JML_Mat2x2f: JML_mulFMat2x2f,             \
        JML_Mat3x3f: JML_mulFMat3x3f,             \
        JML_Mat4x4f: JML_mulFMat4x4f,             \
        JML_Vec2f: JML_mulFVec2f,                 \
        JML_Vec3f: JML_mulFVec3f,                 \
        JML_Vec4f: JML_mulFVec4f,                 \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat2x2d: _Generic(                        \
        (arg_1),                                  \
        double: JML_mulMat2x2dD,                  \
        JML_Mat2x2d: JML_mulMat2x2dMat2x2d,       \
        JML_Vec2d: JML_mulMat2x2dVec2d,           \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat2x2f: _Generic(                        \
        (arg_1),                                  \
        float: JML_mulMat2x2fF,                   \
        JML_Mat2x2f: JML_mulMat2x2fMat2x2f,       \
        JML_Vec2f: JML_mulMat2x2fVec2f,           \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3d: _Generic(                        \
        (arg_1),                                  \
        double: JML_mulMat3x3dD,                  \
        JML_Mat3x3d: JML_mulMat3x3dMat3x3d,       \
        JML_Vec3d: JML_mulMat3x3dVec3d,           \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3f: _Generic(                        \
        (arg_1),                                  \
        float: JML_mulMat3x3fF,                   \
        JML_Mat3x3f: JML_mulMat3x3fMat3x3f,       \
        JML_Vec3f: JML_mulMat3x3fVec3f,           \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4d: _Generic(                        \
        (arg_1),                                  \
        double: JML_mulMat4x4dD,                  \
        JML_Mat4x4d: JML_mulMat4x4dMat4x4d,       \
        JML_Vec4d: JML_mulMat4x4dVec4d,           \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4f: _Generic(                        \
        (arg_1),                                  \
        float: JML_mulMat4x4fF,                   \
        JML_Mat4x4f: JML_mulMat4x4fMat4x4f,       \
        JML_Vec4f: JML_mulMat4x4fVec4f,           \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        double: JML_mulVec2dD,                    \
        JML_Mat2x2d: JML_mulVec2dMat2x2d,         \
        JML_Vec2d: JML_mulVec2dVec2d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        float: JML_mulVec2fF,                     \
        JML_Mat2x2f: JML_mulVec2fMat2x2f,         \
        JML_Vec2f: JML_mulVec2fVec2f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        double: JML_mulVec3dD,                    \
        JML_Mat3x3d: JML_mulVec3dMat3x3d,         \
        JML_Vec3d: JML_mulVec3dVec3d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        float: JML_mulVec3fF,                     \
        JML_Mat3x3f: JML_mulVec3fMat3x3f,         \
        JML_Vec3f: JML_mulVec3fVec3f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        double: JML_mulVec4dD,                    \
        JML_Mat4x4d: JML_mulVec4dMat4x4d,         \
        JML_Vec4d: JML_mulVec4dVec4d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        float: JML_mulVec4fF,                     \
        JML_Mat4x4f: JML_mulVec4fMat4x4f,         \
        JML_Vec4f: JML_mulVec4fVec4f,             \
        default: (void (*)(void))0                \
    ),                                            \
    default: (void (*)(void))0                    \
)(arg_0, arg_1)

#define JML_mul(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mul_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_ARITHMETIC_MUL_H

#ifndef JML_WITHOUT_PREFIX

#define mul(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mul_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
