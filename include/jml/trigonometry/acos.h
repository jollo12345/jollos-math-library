#ifndef JML_GEOMETRIC_ACOS_H
#define JML_GEOMETRIC_ACOS_H

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

static inline double JML_acosD(
    const double adjacent
) {
    return acos(adjacent);
}

static inline float JML_acosF(
    const float adjacent
) {
    return acosf(adjacent);
}

static inline JML_Vec2d JML_acosVec2d(
    const JML_Vec2d adjacent
) {
    return JML_vec2d(
        acos(adjacent.x),
        acos(adjacent.y)
    );
}

static inline JML_Vec2f JML_acosVec2f(
    const JML_Vec2f adjacent
) {
    return JML_vec2f(
        acosf(adjacent.x),
        acosf(adjacent.y)
    );
}

static inline JML_Vec3d JML_acosVec3d(
    const JML_Vec3d adjacent
) {
    return JML_vec3d(
        acos(adjacent.x),
        acos(adjacent.y),
        acos(adjacent.z)
    );
}

static inline JML_Vec3f JML_acosVec3f(
    const JML_Vec3f adjacent
) {
    return JML_vec3f(
        acosf(adjacent.x),
        acosf(adjacent.y),
        acosf(adjacent.z)
    );
}

static inline JML_Vec4d JML_acosVec4d(
    const JML_Vec4d adjacent
) {
    return JML_vec4d(
        acos(adjacent.x),
        acos(adjacent.y),
        acos(adjacent.z),
        acos(adjacent.w)
    );
}

static inline JML_Vec4f JML_acosVec4f(
    const JML_Vec4f adjacent
) {
    return JML_vec4f(
        acosf(adjacent.x),
        acosf(adjacent.y),
        acosf(adjacent.z),
        acosf(adjacent.w)
    );
}

#define JML_acos_GENERIC_1(adjacent) _Generic( \
    (adjacent),                                \
    double: JML_acosD,                         \
    float: JML_acosF,                          \
    JML_Vec2d: JML_acosVec2d,                  \
    JML_Vec2f: JML_acosVec2f,                  \
    JML_Vec3d: JML_acosVec3d,                  \
    JML_Vec3f: JML_acosVec3f,                  \
    JML_Vec4d: JML_acosVec4d,                  \
    JML_Vec4f: JML_acosVec4f,                  \
    default: (void (*)(void))0                 \
)(adjacent)

#define JML_acos(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_acos_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_ACOS_H

#ifdef JML_WITHOUT_PREFIX

#define acos(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_acos_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
