#ifndef JML_DETAIL_ARITHMETIC_DIV_H
#define JML_DETAIL_ARITHMETIC_DIV_H

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

static inline JML_Mat2x2d JML_divMat2x2dD(
    const JML_Mat2x2d arg_0,
    const double arg_1
) {
    return JML_mat2x2d(
        arg_0.data[0][0] / arg_1,
        arg_0.data[0][1] / arg_1,
        arg_0.data[1][0] / arg_1,
        arg_0.data[1][1] / arg_1
    );
}

static inline JML_Mat2x2f JML_divMat2x2fF(
    const JML_Mat2x2f arg_0,
    const float arg_1
) {
    return JML_mat2x2f(
        arg_0.data[0][0] / arg_1,
        arg_0.data[0][1] / arg_1,
        arg_0.data[1][0] / arg_1,
        arg_0.data[1][1] / arg_1
    );
}

static inline JML_Mat3x3d JML_divMat3x3dD(
    const JML_Mat3x3d arg_0,
    const double arg_1
) {
    return JML_mat3x3d(
        arg_0.data[0][0] / arg_1,
        arg_0.data[0][1] / arg_1,
        arg_0.data[0][2] / arg_1,
        arg_0.data[1][0] / arg_1,
        arg_0.data[1][1] / arg_1,
        arg_0.data[1][2] / arg_1,
        arg_0.data[2][0] / arg_1,
        arg_0.data[2][1] / arg_1,
        arg_0.data[2][2] / arg_1
    );
}

static inline JML_Mat3x3f JML_divMat3x3fF(
    const JML_Mat3x3f arg_0,
    const float arg_1
) {
    return JML_mat3x3f(
        arg_0.data[0][0] / arg_1,
        arg_0.data[0][1] / arg_1,
        arg_0.data[0][2] / arg_1,
        arg_0.data[1][0] / arg_1,
        arg_0.data[1][1] / arg_1,
        arg_0.data[1][2] / arg_1,
        arg_0.data[2][0] / arg_1,
        arg_0.data[2][1] / arg_1,
        arg_0.data[2][2] / arg_1
    );
}

static inline JML_Mat4x4d JML_divMat4x4dD(
    const JML_Mat4x4d arg_0,
    const double arg_1
) {
    return JML_mat4x4d(
        arg_0.data[0][0] / arg_1,
        arg_0.data[0][1] / arg_1,
        arg_0.data[0][2] / arg_1,
        arg_0.data[0][3] / arg_1,
        arg_0.data[1][0] / arg_1,
        arg_0.data[1][1] / arg_1,
        arg_0.data[1][2] / arg_1,
        arg_0.data[1][3] / arg_1,
        arg_0.data[2][0] / arg_1,
        arg_0.data[2][1] / arg_1,
        arg_0.data[2][2] / arg_1,
        arg_0.data[2][3] / arg_1,
        arg_0.data[3][0] / arg_1,
        arg_0.data[3][1] / arg_1,
        arg_0.data[3][2] / arg_1,
        arg_0.data[3][3] / arg_1
    );
}

static inline JML_Mat4x4f JML_divMat4x4fF(
    const JML_Mat4x4f arg_0,
    const float arg_1
) {
    return JML_mat4x4f(
        arg_0.data[0][0] / arg_1,
        arg_0.data[0][1] / arg_1,
        arg_0.data[0][2] / arg_1,
        arg_0.data[0][3] / arg_1,
        arg_0.data[1][0] / arg_1,
        arg_0.data[1][1] / arg_1,
        arg_0.data[1][2] / arg_1,
        arg_0.data[1][3] / arg_1,
        arg_0.data[2][0] / arg_1,
        arg_0.data[2][1] / arg_1,
        arg_0.data[2][2] / arg_1,
        arg_0.data[2][3] / arg_1,
        arg_0.data[3][0] / arg_1,
        arg_0.data[3][1] / arg_1,
        arg_0.data[3][2] / arg_1,
        arg_0.data[3][3] / arg_1
    );
}

static inline JML_Vec2d JML_divVec2dD(
    const JML_Vec2d arg_0,
    const double arg_1
) {
    return JML_vec2d(
        arg_0.data[0] / arg_1,
        arg_0.data[1] / arg_1
    );
}

static inline JML_Vec2f JML_divVec2fF(
    const JML_Vec2f arg_0,
    const float arg_1
) {
    return JML_vec2f(
        arg_0.data[0] / arg_1,
        arg_0.data[1] / arg_1
    );
}

static inline JML_Vec3d JML_divVec3dD(
    const JML_Vec3d arg_0,
    const double arg_1
) {
    return JML_vec3d(
        arg_0.data[0] / arg_1,
        arg_0.data[1] / arg_1,
        arg_0.data[2] / arg_1
    );
}

static inline JML_Vec3f JML_divVec3fF(
    const JML_Vec3f arg_0,
    const float arg_1
) {
    return JML_vec3f(
        arg_0.data[0] / arg_1,
        arg_0.data[1] / arg_1,
        arg_0.data[2] / arg_1
    );
}

static inline JML_Vec4d JML_divVec4dD(
    const JML_Vec4d arg_0,
    const double arg_1
) {
    return JML_vec4d(
        arg_0.data[0] / arg_1,
        arg_0.data[1] / arg_1,
        arg_0.data[2] / arg_1,
        arg_0.data[3] / arg_1
    );
}

static inline JML_Vec4f JML_divVec4fF(
    const JML_Vec4f arg_0,
    const float arg_1
) {
    return JML_vec4f(
        arg_0.data[0] / arg_1,
        arg_0.data[1] / arg_1,
        arg_0.data[2] / arg_1,
        arg_0.data[3] / arg_1
    );
}

#define JML_div_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                      \
    JML_Mat2x2d: _Generic(                        \
        (arg_1),                                  \
        double: JML_divMat2x2dD,                  \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat2x2f: _Generic(                        \
        (arg_1),                                  \
        float: JML_divMat2x2fF,                   \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3d: _Generic(                        \
        (arg_1),                                  \
        double: JML_divMat3x3dD,                  \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat3x3f: _Generic(                        \
        (arg_1),                                  \
        float: JML_divMat3x3fF,                   \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4d: _Generic(                        \
        (arg_1),                                  \
        double: JML_divMat4x4dD,                  \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Mat4x4f: _Generic(                        \
        (arg_1),                                  \
        float: JML_divMat4x4fF,                   \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2d: _Generic(                          \
        (arg_1),                                  \
        double: JML_divVec2dD,                    \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec2f: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec2fF,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3d: _Generic(                          \
        (arg_1),                                  \
        double: JML_divVec3dD,                    \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec3f: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec3fF,                     \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4d: _Generic(                          \
        (arg_1),                                  \
        double: JML_divVec4dD,                    \
        default: (void (*)(void))0                \
    ),                                            \
    JML_Vec4f: _Generic(                          \
        (arg_1),                                  \
        float: JML_divVec4fF,                     \
        default: (void (*)(void))0                \
    ),                                            \
    default: (void (*)(void))0                    \
)(arg_0, arg_1)

#define JML_div(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_div_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_ARITHMETIC_DIV_H

#ifndef JML_WITHOUT_PREFIX

#define div(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_div_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
