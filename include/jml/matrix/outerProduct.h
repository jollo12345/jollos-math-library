#ifndef JML_RELATIONAL_OUTER_PRODUCT_H
#define JML_RELATIONAL_OUTER_PRODUCT_H

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

static inline JML_Mat2x2d JML_outerProductVec2dVec2d(
    const JML_Vec2d column,
    const JML_Vec2d row
) {
    return JML_mat2x2d(
        column.x * row.x, column.y * row.x,
        column.x * row.y, column.y * row.y
    );
}

static inline JML_Mat2x2f JML_outerProductVec2fVec2f(
    const JML_Vec2f column,
    const JML_Vec2f row
) {
    return JML_mat2x2f(
        column.x * row.x, column.y * row.x,
        column.x * row.y, column.y * row.y
    );
}

static inline JML_Mat3x3d JML_outerProductVec3dVec3d(
    const JML_Vec3d column,
    const JML_Vec3d row
) {
    return JML_mat3x3d(
        column.x * row.x, column.y * row.x, column.z * row.x,
        column.x * row.y, column.y * row.y, column.z * row.y,
        column.x * row.z, column.y * row.z, column.z * row.z
    );
}

static inline JML_Mat3x3f JML_outerProductVec3fVec3f(
    const JML_Vec3f column,
    const JML_Vec3f row
) {
    return JML_mat3x3f(
        column.x * row.x, column.y * row.x, column.z * row.x,
        column.x * row.y, column.y * row.y, column.z * row.y,
        column.x * row.z, column.y * row.z, column.z * row.z
    );
}

static inline JML_Mat4x4d JML_outerProductVec4dVec4d(
    const JML_Vec4d column,
    const JML_Vec4d row
) {
    return JML_mat4x4d(
        column.x * row.x, column.y * row.x, column.z * row.x, column.w * row.x,
        column.x * row.y, column.y * row.y, column.z * row.y, column.w * row.y,
        column.x * row.z, column.y * row.z, column.z * row.z, column.w * row.z,
        column.x * row.w, column.y * row.w, column.z * row.w, column.w * row.w
    );
}

static inline JML_Mat4x4f JML_outerProductVec4fVec4f(
    const JML_Vec4f column,
    const JML_Vec4f row
) {
    return JML_mat4x4f(
        column.x * row.x, column.y * row.x, column.z * row.x, column.w * row.x,
        column.x * row.y, column.y * row.y, column.z * row.y, column.w * row.y,
        column.x * row.z, column.y * row.z, column.z * row.z, column.w * row.z,
        column.x * row.w, column.y * row.w, column.z * row.w, column.w * row.w
    );
}

#define JML_outerProduct_GENERIC_2(column, row) _Generic( \
    (column),                                             \
    JML_Vec2d: _Generic(                                  \
        (row),                                            \
        JML_Vec2d: JML_outerProductVec2dVec2d,            \
        default: (void (*)(void))0                        \
    ),                                                    \
    JML_Vec2f: _Generic(                                  \
        (row),                                            \
        JML_Vec2f: JML_outerProductVec2fVec2f,            \
        default: (void (*)(void))0                        \
    ),                                                    \
    JML_Vec3d: _Generic(                                  \
        (row),                                            \
        JML_Vec3d: JML_outerProductVec3dVec3d,            \
        default: (void (*)(void))0                        \
    ),                                                    \
    JML_Vec3f: _Generic(                                  \
        (row),                                            \
        JML_Vec3f: JML_outerProductVec3fVec3f,            \
        default: (void (*)(void))0                        \
    ),                                                    \
    JML_Vec4d: _Generic(                                  \
        (row),                                            \
        JML_Vec4d: JML_outerProductVec4dVec4d,            \
        default: (void (*)(void))0                        \
    ),                                                    \
    JML_Vec4f: _Generic(                                  \
        (row),                                            \
        JML_Vec4f: JML_outerProductVec4fVec4f,            \
        default: (void (*)(void))0                        \
    ),                                                    \
    default: (void (*)(void))0                            \
)(column, row)

#define JML_outerProduct(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_outerProduct_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_RELATIONAL_OUTER_PRODUCT_H

#ifdef JML_WITHOUT_PREFIX

#define outerProduct(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_outerProduct_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif