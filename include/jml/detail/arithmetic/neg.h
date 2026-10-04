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
        -arg.data[0][0],
        -arg.data[0][1],
        -arg.data[1][0],
        -arg.data[1][1]
    );
}

static inline JML_Mat2x2f JML_negMat2x2f(
    const JML_Mat2x2f arg
) {
    return JML_mat2x2f(
        -arg.data[0][0],
        -arg.data[0][1],
        -arg.data[1][0],
        -arg.data[1][1]
    );
}

static inline JML_Mat3x3d JML_negMat3x3d(
    const JML_Mat3x3d arg
) {
    return JML_mat3x3d(
        -arg.data[0][0],
        -arg.data[0][1],
        -arg.data[0][2],
        -arg.data[1][0],
        -arg.data[1][1],
        -arg.data[1][2],
        -arg.data[2][0],
        -arg.data[2][1],
        -arg.data[2][2]
    );
}

static inline JML_Mat3x3f JML_negMat3x3f(
    const JML_Mat3x3f arg
) {
    return JML_mat3x3f(
        -arg.data[0][0],
        -arg.data[0][1],
        -arg.data[0][2],
        -arg.data[1][0],
        -arg.data[1][1],
        -arg.data[1][2],
        -arg.data[2][0],
        -arg.data[2][1],
        -arg.data[2][2]
    );
}

static inline JML_Mat4x4d JML_negMat4x4d(
    const JML_Mat4x4d arg
) {
    return JML_mat4x4d(
        -arg.data[0][0],
        -arg.data[0][1],
        -arg.data[0][2],
        -arg.data[0][3],
        -arg.data[1][0],
        -arg.data[1][1],
        -arg.data[1][2],
        -arg.data[1][3],
        -arg.data[2][0],
        -arg.data[2][1],
        -arg.data[2][2],
        -arg.data[2][3],
        -arg.data[3][0],
        -arg.data[3][1],
        -arg.data[3][2],
        -arg.data[3][3]
    );
}

static inline JML_Mat4x4f JML_negMat4x4f(
    const JML_Mat4x4f arg
) {
    return JML_mat4x4f(
        -arg.data[0][0],
        -arg.data[0][1],
        -arg.data[0][2],
        -arg.data[0][3],
        -arg.data[1][0],
        -arg.data[1][1],
        -arg.data[1][2],
        -arg.data[1][3],
        -arg.data[2][0],
        -arg.data[2][1],
        -arg.data[2][2],
        -arg.data[2][3],
        -arg.data[3][0],
        -arg.data[3][1],
        -arg.data[3][2],
        -arg.data[3][3]
    );
}

static inline JML_Vec2d JML_negVec2d(
    const JML_Vec2d arg
) {
    return JML_vec2d(
        -arg.data[0],
        -arg.data[1]
    );
}

static inline JML_Vec2f JML_negVec2f(
    const JML_Vec2f arg
) {
    return JML_vec2f(
        -arg.data[0],
        -arg.data[1]
    );
}

static inline JML_Vec3d JML_negVec3d(
    const JML_Vec3d arg
) {
    return JML_vec3d(
        -arg.data[0],
        -arg.data[1],
        -arg.data[2]
    );
}

static inline JML_Vec3f JML_negVec3f(
    const JML_Vec3f arg
) {
    return JML_vec3f(
        -arg.data[0],
        -arg.data[1],
        -arg.data[2]
    );
}

static inline JML_Vec4d JML_negVec4d(
    const JML_Vec4d arg
) {
    return JML_vec4d(
        -arg.data[0],
        -arg.data[1],
        -arg.data[2],
        -arg.data[3]
    );
}

static inline JML_Vec4f JML_negVec4f(
    const JML_Vec4f arg
) {
    return JML_vec4f(
        -arg.data[0],
        -arg.data[1],
        -arg.data[2],
        -arg.data[3]
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
