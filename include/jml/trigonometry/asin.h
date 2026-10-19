#ifndef JML_GEOMETRIC_ASIN_H
#define JML_GEOMETRIC_ASIN_H

#include <math.h>

#include "jml/common/pi.h"
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/types/vec2d.h"
#include "jml/types/vec2f.h"
#include "jml/types/vec3d.h"
#include "jml/types/vec3f.h"
#include "jml/types/vec4d.h"
#include "jml/types/vec4f.h"
#include "jml/util.h"

static inline double JML_asinD(
    const double opposite
) {
    return asin(opposite);
}

static inline float JML_asinF(
    const float opposite
) {
    return asinf(opposite);
}

static inline JML_Vec2d JML_asinVec2d(
    const JML_Vec2d opposite
) {
    return JML_vec2d(
        asin(opposite.x),
        asin(opposite.y)
    );
}

static inline JML_Vec2f JML_asinVec2f(
    const JML_Vec2f opposite
) {
    return JML_vec2f(
        asinf(opposite.x),
        asinf(opposite.y)
    );
}

static inline JML_Vec3d JML_asinVec3d(
    const JML_Vec3d opposite
) {
    return JML_vec3d(
        asin(opposite.x),
        asin(opposite.y),
        asin(opposite.z)
    );
}

static inline JML_Vec3f JML_asinVec3f(
    const JML_Vec3f opposite
) {
    return JML_vec3f(
        asinf(opposite.x),
        asinf(opposite.y),
        asinf(opposite.z)
    );
}

static inline JML_Vec4d JML_asinVec4d(
    const JML_Vec4d opposite
) {
    return JML_vec4d(
        asin(opposite.x),
        asin(opposite.y),
        asin(opposite.z),
        asin(opposite.w)
    );
}

static inline JML_Vec4f JML_asinVec4f(
    const JML_Vec4f opposite
) {
    return JML_vec4f(
        asinf(opposite.x),
        asinf(opposite.y),
        asinf(opposite.z),
        asinf(opposite.w)
    );
}

#define JML_asin_GENERIC_1(opposite) _Generic( \
    (opposite),                                \
    double: JML_asinD,                         \
    float: JML_asinF,                          \
    JML_Vec2d: JML_asinVec2d,                  \
    JML_Vec2f: JML_asinVec2f,                  \
    JML_Vec3d: JML_asinVec3d,                  \
    JML_Vec3f: JML_asinVec3f,                  \
    JML_Vec4d: JML_asinVec4d,                  \
    JML_Vec4f: JML_asinVec4f,                  \
    default: (void (*)(void))0                 \
)(opposite)

#define JML_asin(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_asin_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ASIN_H

#ifdef JML_WITHOUT_PREFIX

#define asin(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_asin_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
