#ifndef JML_ARITHMETIC_ADD_H
#define JML_ARITHMETIC_ADD_H

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

static inline JML_Mat2x2d JML_addMat2x2dMat2x2d(
    const JML_Mat2x2d arg_0,
    const JML_Mat2x2d arg_1
) {
    return JML_mat2x2d(
        arg_0.m00 + arg_1.m00,
        arg_0.m01 + arg_1.m01,
        arg_0.m10 + arg_1.m10,
        arg_0.m11 + arg_1.m11
    );
}

static inline JML_Mat2x2f JML_addMat2x2fMat2x2f(
    const JML_Mat2x2f arg_0,
    const JML_Mat2x2f arg_1
) {
    return JML_mat2x2f(
        arg_0.m00 + arg_1.m00,
        arg_0.m01 + arg_1.m01,
        arg_0.m10 + arg_1.m10,
        arg_0.m11 + arg_1.m11
    );
}

static inline JML_Mat3x3d JML_addMat3x3dMat3x3d(
    const JML_Mat3x3d arg_0,
    const JML_Mat3x3d arg_1
) {
    return JML_mat3x3d(
        arg_0.m00 + arg_1.m00,
        arg_0.m01 + arg_1.m01,
        arg_0.m02 + arg_1.m02,
        arg_0.m10 + arg_1.m10,
        arg_0.m11 + arg_1.m11,
        arg_0.m12 + arg_1.m12,
        arg_0.m20 + arg_1.m20,
        arg_0.m21 + arg_1.m21,
        arg_0.m22 + arg_1.m22
    );
}

static inline JML_Mat3x3f JML_addMat3x3fMat3x3f(
    const JML_Mat3x3f arg_0,
    const JML_Mat3x3f arg_1
) {
    return JML_mat3x3f(
        arg_0.m00 + arg_1.m00,
        arg_0.m01 + arg_1.m01,
        arg_0.m02 + arg_1.m02,
        arg_0.m10 + arg_1.m10,
        arg_0.m11 + arg_1.m11,
        arg_0.m12 + arg_1.m12,
        arg_0.m20 + arg_1.m20,
        arg_0.m21 + arg_1.m21,
        arg_0.m22 + arg_1.m22
    );
}

static inline JML_Mat4x4d JML_addMat4x4dMat4x4d(
    const JML_Mat4x4d arg_0,
    const JML_Mat4x4d arg_1
) {
    return JML_mat4x4d(
        arg_0.m00 + arg_1.m00,
        arg_0.m01 + arg_1.m01,
        arg_0.m02 + arg_1.m02,
        arg_0.m03 + arg_1.m03,
        arg_0.m10 + arg_1.m10,
        arg_0.m11 + arg_1.m11,
        arg_0.m12 + arg_1.m12,
        arg_0.m13 + arg_1.m13,
        arg_0.m20 + arg_1.m20,
        arg_0.m21 + arg_1.m21,
        arg_0.m22 + arg_1.m22,
        arg_0.m23 + arg_1.m23,
        arg_0.m30 + arg_1.m30,
        arg_0.m31 + arg_1.m31,
        arg_0.m32 + arg_1.m32,
        arg_0.m33 + arg_1.m33
    );
}

static inline JML_Mat4x4f JML_addMat4x4fMat4x4f(
    const JML_Mat4x4f arg_0,
    const JML_Mat4x4f arg_1
) {
    return JML_mat4x4f(
        arg_0.m00 + arg_1.m00,
        arg_0.m01 + arg_1.m01,
        arg_0.m02 + arg_1.m02,
        arg_0.m03 + arg_1.m03,
        arg_0.m10 + arg_1.m10,
        arg_0.m11 + arg_1.m11,
        arg_0.m12 + arg_1.m12,
        arg_0.m13 + arg_1.m13,
        arg_0.m20 + arg_1.m20,
        arg_0.m21 + arg_1.m21,
        arg_0.m22 + arg_1.m22,
        arg_0.m23 + arg_1.m23,
        arg_0.m30 + arg_1.m30,
        arg_0.m31 + arg_1.m31,
        arg_0.m32 + arg_1.m32,
        arg_0.m33 + arg_1.m33
    );
}

static inline JML_Vec2d JML_addVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    return JML_vec2d(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y
    );
}

static inline JML_Vec2f JML_addVec2fVec2f(
    const JML_Vec2f arg_0,
    const JML_Vec2f arg_1
) {
    return JML_vec2f(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y
    );
}

static inline JML_Vec2i JML_addVec2iVec2i(
    const JML_Vec2i arg_0,
    const JML_Vec2i arg_1
) {
    return JML_vec2i(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y
    );
}

static inline JML_Vec2u JML_addVec2uVec2u(
    const JML_Vec2u arg_0,
    const JML_Vec2u arg_1
) {
    return JML_vec2u(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y
    );
}

static inline JML_Vec3d JML_addVec3dVec3d(
    const JML_Vec3d arg_0,
    const JML_Vec3d arg_1
) {
    return JML_vec3d(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y,
        arg_0.z + arg_1.z
    );
}

static inline JML_Vec3f JML_addVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1
) {
    return JML_vec3f(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y,
        arg_0.z + arg_1.z
    );
}

static inline JML_Vec3i JML_addVec3iVec3i(
    const JML_Vec3i arg_0,
    const JML_Vec3i arg_1
) {
    return JML_vec3i(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y,
        arg_0.z + arg_1.z
    );
}

static inline JML_Vec3u JML_addVec3uVec3u(
    const JML_Vec3u arg_0,
    const JML_Vec3u arg_1
) {
    return JML_vec3u(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y,
        arg_0.z + arg_1.z
    );
}

static inline JML_Vec4d JML_addVec4dVec4d(
    const JML_Vec4d arg_0,
    const JML_Vec4d arg_1
) {
    return JML_vec4d(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y,
        arg_0.z + arg_1.z,
        arg_0.w + arg_1.w
    );
}

static inline JML_Vec4f JML_addVec4fVec4f(
    const JML_Vec4f arg_0,
    const JML_Vec4f arg_1
) {
    return JML_vec4f(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y,
        arg_0.z + arg_1.z,
        arg_0.w + arg_1.w
    );
}

static inline JML_Vec4i JML_addVec4iVec4i(
    const JML_Vec4i arg_0,
    const JML_Vec4i arg_1
) {
    return JML_vec4i(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y,
        arg_0.z + arg_1.z,
        arg_0.w + arg_1.w
    );
}

static inline JML_Vec4u JML_addVec4uVec4u(
    const JML_Vec4u arg_0,
    const JML_Vec4u arg_1
) {
    return JML_vec4u(
        arg_0.x + arg_1.x,
        arg_0.y + arg_1.y,
        arg_0.z + arg_1.z,
        arg_0.w + arg_1.w
    );
}

#define JML_add_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                      \
    JML_Mat2x2d: _Generic(                        \
        (arg_1),                                  \
        JML_Mat2x2d: JML_addMat2x2dMat2x2d,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat2x2f: _Generic(                        \
        (arg_1),                                  \
        JML_Mat2x2f: JML_addMat2x2fMat2x2f,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3d: _Generic(                        \
        (arg_1),                                  \
        JML_Mat3x3d: JML_addMat3x3dMat3x3d,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3f: _Generic(                        \
        (arg_1),                                  \
        JML_Mat3x3f: JML_addMat3x3fMat3x3f,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4d: _Generic(                        \
        (arg_1),                                  \
        JML_Mat4x4d: JML_addMat4x4dMat4x4d,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4f: _Generic(                        \
        (arg_1),                                  \
        JML_Mat4x4f: JML_addMat4x4fMat4x4f,       \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2d: JML_addVec2dVec2d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2f: JML_addVec2fVec2f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2i: JML_addVec2iVec2i,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2u: _Generic(                          \
        (arg_1),                                  \
        JML_Vec2u: JML_addVec2uVec2u,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3d: JML_addVec3dVec3d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3f: JML_addVec3fVec3f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3i: JML_addVec3iVec3i,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3u: _Generic(                          \
        (arg_1),                                  \
        JML_Vec3u: JML_addVec3uVec3u,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4d: JML_addVec4dVec4d,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4f: JML_addVec4fVec4f,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4i: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4i: JML_addVec4iVec4i,             \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4u: _Generic(                          \
        (arg_1),                                  \
        JML_Vec4u: JML_addVec4uVec4u,             \
        default: (void (*)(void))0                \
    ),                                            \
    default: (void (*)(void))0                    \
)(arg_0, arg_1)

#define JML_add(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_add_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_ARITHMETIC_ADD_H

#ifdef JML_WITHOUT_PREFIX

#define add(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_add_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
