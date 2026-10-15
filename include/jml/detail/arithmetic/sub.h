#ifndef JML_DETAIL_ARITHMETIC_SUB_H
#define JML_DETAIL_ARITHMETIC_SUB_H

#include "jml/detail/constructors/mat2x2d.h"
#include "jml/detail/constructors/mat2x2f.h"
#include "jml/detail/constructors/mat3x3d.h"
#include "jml/detail/constructors/mat3x3f.h"
#include "jml/detail/constructors/mat4x4d.h"
#include "jml/detail/constructors/mat4x4f.h"
#include "jml/detail/constructors/vec2d.h"
#include "jml/detail/constructors/vec2f.h"
#include "jml/detail/constructors/vec2i.h"
#include "jml/detail/constructors/vec3d.h"
#include "jml/detail/constructors/vec3f.h"
#include "jml/detail/constructors/vec3i.h"
#include "jml/detail/constructors/vec4d.h"
#include "jml/detail/constructors/vec4f.h"
#include "jml/detail/constructors/vec4i.h"
#include "jml/detail/types/mat2x2d.h"
#include "jml/detail/types/mat2x2f.h"
#include "jml/detail/types/mat3x3d.h"
#include "jml/detail/types/mat3x3f.h"
#include "jml/detail/types/mat4x4d.h"
#include "jml/detail/types/mat4x4f.h"
#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec2f.h"
#include "jml/detail/types/vec2i.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/types/vec3i.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/types/vec4f.h"
#include "jml/detail/types/vec4i.h"

static inline JML_Mat2x2d JML_subMat2x2dMat2x2d(
    const JML_Mat2x2d arg_0,
    const JML_Mat2x2d arg_1
) {
    return JML_mat2x2d(
        arg_0.m00 - arg_1.m00,
        arg_0.m01 - arg_1.m01,
        arg_0.m10 - arg_1.m10,
        arg_0.m11 - arg_1.m11
    );
}

static inline JML_Mat2x2f JML_subMat2x2fMat2x2f(
    const JML_Mat2x2f arg_0,
    const JML_Mat2x2f arg_1
) {
    return JML_mat2x2f(
        arg_0.m00 - arg_1.m00,
        arg_0.m01 - arg_1.m01,
        arg_0.m10 - arg_1.m10,
        arg_0.m11 - arg_1.m11
    );
}

static inline JML_Mat3x3d JML_subMat3x3dMat3x3d(
    const JML_Mat3x3d arg_0,
    const JML_Mat3x3d arg_1
) {
    return JML_mat3x3d(
        arg_0.m00 - arg_1.m00,
        arg_0.m01 - arg_1.m01,
        arg_0.m02 - arg_1.m02,
        arg_0.m10 - arg_1.m10,
        arg_0.m11 - arg_1.m11,
        arg_0.m12 - arg_1.m12,
        arg_0.m20 - arg_1.m20,
        arg_0.m21 - arg_1.m21,
        arg_0.m22 - arg_1.m22
    );
}

static inline JML_Mat3x3f JML_subMat3x3fMat3x3f(
    const JML_Mat3x3f arg_0,
    const JML_Mat3x3f arg_1
) {
    return JML_mat3x3f(
        arg_0.m00 - arg_1.m00,
        arg_0.m01 - arg_1.m01,
        arg_0.m02 - arg_1.m02,
        arg_0.m10 - arg_1.m10,
        arg_0.m11 - arg_1.m11,
        arg_0.m12 - arg_1.m12,
        arg_0.m20 - arg_1.m20,
        arg_0.m21 - arg_1.m21,
        arg_0.m22 - arg_1.m22
    );
}

static inline JML_Mat4x4d JML_subMat4x4dMat4x4d(
    const JML_Mat4x4d arg_0,
    const JML_Mat4x4d arg_1
) {
    return JML_mat4x4d(
        arg_0.m00 - arg_1.m00,
        arg_0.m01 - arg_1.m01,
        arg_0.m02 - arg_1.m02,
        arg_0.m03 - arg_1.m03,
        arg_0.m10 - arg_1.m10,
        arg_0.m11 - arg_1.m11,
        arg_0.m12 - arg_1.m12,
        arg_0.m13 - arg_1.m13,
        arg_0.m20 - arg_1.m20,
        arg_0.m21 - arg_1.m21,
        arg_0.m22 - arg_1.m22,
        arg_0.m23 - arg_1.m23,
        arg_0.m30 - arg_1.m30,
        arg_0.m31 - arg_1.m31,
        arg_0.m32 - arg_1.m32,
        arg_0.m33 - arg_1.m33
    );
}

static inline JML_Mat4x4f JML_subMat4x4fMat4x4f(
    const JML_Mat4x4f arg_0,
    const JML_Mat4x4f arg_1
) {
    return JML_mat4x4f(
        arg_0.m00 - arg_1.m00,
        arg_0.m01 - arg_1.m01,
        arg_0.m02 - arg_1.m02,
        arg_0.m03 - arg_1.m03,
        arg_0.m10 - arg_1.m10,
        arg_0.m11 - arg_1.m11,
        arg_0.m12 - arg_1.m12,
        arg_0.m13 - arg_1.m13,
        arg_0.m20 - arg_1.m20,
        arg_0.m21 - arg_1.m21,
        arg_0.m22 - arg_1.m22,
        arg_0.m23 - arg_1.m23,
        arg_0.m30 - arg_1.m30,
        arg_0.m31 - arg_1.m31,
        arg_0.m32 - arg_1.m32,
        arg_0.m33 - arg_1.m33
    );
}

static inline JML_Vec2d JML_subVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y
    );
}

static inline JML_Vec2f JML_subVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y
    );
}

static inline JML_Vec2i JML_subVec2iVec2i(
    const JML_Vec2i arg_0,
    const JML_Vec2i arg_1
) {
    return JML_vec2i(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y
    );
}

static inline JML_Vec3d JML_subVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y,
        arg_0.z - arg_1.z
    );
}

static inline JML_Vec3f JML_subVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y,
        arg_0.z - arg_1.z
    );
}

static inline JML_Vec3i JML_subVec3iVec3i(
    const JML_Vec3i arg_0,
    const JML_Vec3i arg_1
) {
    return JML_vec3i(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y,
        arg_0.z - arg_1.z
    );
}

static inline JML_Vec4d JML_subVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y,
        arg_0.z - arg_1.z,
        arg_0.w - arg_1.w
    );
}

static inline JML_Vec4f JML_subVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y,
        arg_0.z - arg_1.z,
        arg_0.w - arg_1.w
    );
}

static inline JML_Vec4i JML_subVec4iVec4i(
    const JML_Vec4i arg_0,
    const JML_Vec4i arg_1
) {
    return JML_vec4i(
        arg_0.x - arg_1.x,
        arg_0.y - arg_1.y,
        arg_0.z - arg_1.z,
        arg_0.w - arg_1.w
    );
}

#define JML_sub_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                      \
    JML_Mat2x2d: _Generic(                        \
        (arg_1),                                  \
        JML_Mat2x2d: JML_subMat2x2dMat2x2d,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat2x2f: _Generic(                        \
        (arg_1),                                  \
        JML_Mat2x2f: JML_subMat2x2fMat2x2f,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3d: _Generic(                        \
        (arg_1),                                  \
        JML_Mat3x3d: JML_subMat3x3dMat3x3d,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3f: _Generic(                        \
        (arg_1),                                  \
        JML_Mat3x3f: JML_subMat3x3fMat3x3f,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4d: _Generic(                        \
        (arg_1),                                  \
        JML_Mat4x4d: JML_subMat4x4dMat4x4d,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4f: _Generic(                        \
        (arg_1),                                  \
        JML_Mat4x4f: JML_subMat4x4fMat4x4f,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2d: JML_subVec2dVec2d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2f: JML_subVec2fVec2f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2i: JML_subVec2iVec2i,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3d: JML_subVec3dVec3d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3f: JML_subVec3fVec3f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3i: JML_subVec3iVec3i,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4d: JML_subVec4dVec4d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4f: JML_subVec4fVec4f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4i: JML_subVec4iVec4i,             \
        default: (void (*)(void))0                \
    ),                                            \
    default: (void (*)(void))0                    \
)(arg_0, arg_1)

#define JML_sub(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_sub_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_ARITHMETIC_SUB_H

#ifndef JML_WITHOUT_PREFIX

#define sub(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_sub_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
