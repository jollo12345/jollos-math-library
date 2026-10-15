#ifndef JML_DETAIL_CONSTRUCTORS_MAT3X3F_H
#define JML_DETAIL_CONSTRUCTORS_MAT3X3F_H

#include "jml/detail/types/mat3x3f.h"
#include "jml/detail/types/vec3f.h"
#include "jml/detail/util.h"

static inline JML_Mat3x3f JML_mat3x3fVec3fVec3fVec3f(
    const JML_Vec3f arg_0,
    const JML_Vec3f arg_1,
    const JML_Vec3f arg_2
) {
    JML_Mat3x3f result;
    result.m00 = arg_0.x;
    result.m01 = arg_0.y;
    result.m02 = arg_0.z;
    result.m10 = arg_1.x;
    result.m11 = arg_1.y;
    result.m12 = arg_1.z;
    result.m20 = arg_2.x;
    result.m21 = arg_2.y;
    result.m22 = arg_2.z;
    return result;
}

#define JML_mat3x3f_GENERIC_3(arg_0, arg_1, arg_2) _Generic( \
    (arg_0),                                                 \
    JML_Vec3f: _Generic(                                     \
        (arg_1),                                             \
        JML_Vec3f: _Generic(                                 \
            (arg_2),                                         \
            JML_Vec3f: JML_mat3x3fVec3fVec3fVec3f,           \
            default: (void (*)(void))0                       \
        ),                                                   \
        default: (void (*)(void))0                           \
    ),                                                       \
    default: (void (*)(void))0                               \
)(arg_0, arg_1, arg_2)

static inline JML_Mat3x3f JML_mat3x3fFFFFFFFFF(
    const float arg_0,
    const float arg_1,
    const float arg_2,
    const float arg_3,
    const float arg_4,
    const float arg_5,
    const float arg_6,
    const float arg_7,
    const float arg_8
) {
    JML_Mat3x3f result;
    result.m00 = arg_0;
    result.m01 = arg_1;
    result.m02 = arg_2;
    result.m10 = arg_3;
    result.m11 = arg_4;
    result.m12 = arg_5;
    result.m20 = arg_6;
    result.m21 = arg_7;
    result.m22 = arg_8;
    return result;
}

#define JML_mat3x3f_GENERIC_9(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8) _Generic( \
    (arg_0),                                                                                           \
    float: _Generic(                                                                                   \
        (arg_1),                                                                                       \
        float: _Generic(                                                                               \
            (arg_2),                                                                                   \
            float: _Generic(                                                                           \
                (arg_3),                                                                               \
                float: _Generic(                                                                       \
                    (arg_4),                                                                           \
                    float: _Generic(                                                                   \
                        (arg_5),                                                                       \
                        float: _Generic(                                                               \
                            (arg_6),                                                                   \
                            float: _Generic(                                                           \
                                (arg_7),                                                               \
                                float: _Generic(                                                       \
                                    (arg_8),                                                           \
                                    float: JML_mat3x3fFFFFFFFFF,                                       \
                                    default: (void (*)(void))0                                         \
                                ),                                                                     \
                                default: (void (*)(void))0                                             \
                            ),                                                                         \
                            default: (void (*)(void))0                                                 \
                        ),                                                                             \
                        default: (void (*)(void))0                                                     \
                    ),                                                                                 \
                    default: (void (*)(void))0                                                         \
                ),                                                                                     \
                default: (void (*)(void))0                                                             \
            ),                                                                                         \
            default: (void (*)(void))0                                                                 \
        ),                                                                                             \
        default: (void (*)(void))0                                                                     \
    ),                                                                                                 \
    default: (void (*)(void))0                                                                         \
)(arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8)

#define JML_mat3x3f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat3x3f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_DETAIL_CONSTRUCTORS_MAT3X3F_H

#ifndef JML_WITHOUT_PREFIX

#define mat3x3f(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_mat3x3f_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
