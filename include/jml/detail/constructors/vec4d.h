#ifndef JML_DETAIL_CONSTRUCTORS_VEC4D_H
#define JML_DETAIL_CONSTRUCTORS_VEC4D_H

#include "jml/detail/types/vec2d.h"
#include "jml/detail/types/vec3d.h"
#include "jml/detail/types/vec4d.h"
#include "jml/detail/util.h"

static inline JML_Vec4d JML_vec4dDVec3d(
    const double arg_0,
    const JML_Vec3d arg_1
) {
    JML_Vec4d result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    result.data[3] = arg_1.data[2];
    return result;
}

static inline JML_Vec4d JML_vec4dVec2dVec2d(
    const JML_Vec2d arg_0,
    const JML_Vec2d arg_1
) {
    JML_Vec4d result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1.data[0];
    result.data[3] = arg_1.data[1];
    return result;
}

static inline JML_Vec4d JML_vec4dVec3dD(
    const JML_Vec3d arg_0,
    const double arg_1
) {
    JML_Vec4d result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_0.data[2];
    result.data[3] = arg_1;
    return result;
}

#define JML_vec4d_GENERIC_2(arg_0, arg_1) _Generic( \
    (arg_0),                                        \
    double: _Generic(                               \
        (arg_1),                                    \
        JML_Vec3d: JML_vec4dDVec3d,                 \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec2d: _Generic(                            \
        (arg_1),                                    \
        JML_Vec2d: JML_vec4dVec2dVec2d,             \
        default: (void (*)(void))0                  \
    ),                                              \
    JML_Vec3d: _Generic(                            \
        (arg_1),                                    \
        double: JML_vec4dVec3dD,                    \
        default: (void (*)(void))0                  \
    ),                                              \
    default: (void (*)(void))0                      \
)(arg_0, arg_1)

static inline JML_Vec4d JML_vec4dDDVec2d(
    const double arg_0,
    const double arg_1,
    const JML_Vec2d arg_2
) {
    JML_Vec4d result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2.data[0];
    result.data[3] = arg_2.data[1];
    return result;
}

static inline JML_Vec4d JML_vec4dDVec2dD(
    const double arg_0,
    const JML_Vec2d arg_1,
    const double arg_2
) {
    JML_Vec4d result;
    result.data[0] = arg_0;
    result.data[1] = arg_1.data[0];
    result.data[2] = arg_1.data[1];
    result.data[3] = arg_2;
    return result;
}

static inline JML_Vec4d JML_vec4dVec2dDD(
    const JML_Vec2d arg_0,
    const double arg_1,
    const double arg_2
) {
    JML_Vec4d result;
    result.data[0] = arg_0.data[0];
    result.data[1] = arg_0.data[1];
    result.data[2] = arg_1;
    result.data[3] = arg_2;
    return result;
}

#define JML_vec4d_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                               \
    double: _Generic(                                      \
        (arg_1),                                           \
        double: _Generic(                                  \
            (arg_2),                                       \
            JML_Vec2d: JML_vec4dDDVec2d,                   \
            default: (void (*)(void))0                     \
        ),                                                 \
        JML_Vec2d: _Generic(                               \
            (arg_2),                                       \
            double: JML_vec4dDVec2dD,                      \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    JML_Vec2d: _Generic(                                   \
        (arg_1),                                           \
        double: _Generic(                                  \
            (arg_2),                                       \
            double: JML_vec4dVec2dDD,                      \
            default: (void (*)(void))0                     \
        ),                                                 \
        default: (void (*)(void))0                         \
    ),                                                     \
    default: (void (*)(void))0                             \
)(arg_0, arg_1, arg_2)

static inline JML_Vec4d JML_vec4dDDDD(
    const double arg_0,
    const double arg_1,
    const double arg_2,
    const double arg_3
) {
    JML_Vec4d result;
    result.data[0] = arg_0;
    result.data[1] = arg_1;
    result.data[2] = arg_2;
    result.data[3] = arg_3;
    return result;
}

#define JML_vec4d_GENERIC_4(arg_0, arg_1, arg_2, arg_3) _Generic( \
    (arg_0),                                                      \
    double: _Generic(                                             \
        (arg_1),                                                  \
        double: _Generic(                                         \
            (arg_2),                                              \
            double: _Generic(                                     \
                (arg_3),                                          \
                double: JML_vec4dDDDD,                            \
                default: (void (*)(void))0                        \
            ),                                                    \
            default: (void (*)(void))0                            \
        ),                                                        \
        default: (void (*)(void))0                                \
    ),                                                            \
    default: (void (*)(void))0                                    \
)(arg_0, arg_1, arg_2, arg_3)

#define JML_vec4d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_VEC4D_H

#ifndef JML_WITHOUT_PREFIX

#define vec4d(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_vec4d_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
