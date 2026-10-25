#ifndef JML_TRIGONOMETRY_DEGREES_H
#define JML_TRIGONOMETRY_DEGREES_H

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

static inline double JML_degreesD(
    const double radians
) {
    return (180.0 / JML_PI_D) * radians;
}

static inline float JML_degreesF(
    const float radians
) {
    return (180.f / JML_PI_F) * radians;
}

static inline JML_Vec2d JML_degreesVec2d(
    const JML_Vec2d radians
) {
    return JML_vec2d(
        (180.0 / JML_PI_D) * radians.x,
        (180.0 / JML_PI_D) * radians.y
    );
}

static inline JML_Vec2f JML_degreesVec2f(
    const JML_Vec2f radians
) {
    return JML_vec2f(
        (180.f / JML_PI_F) * radians.x,
        (180.f / JML_PI_F) * radians.y
    );
}

static inline JML_Vec3d JML_degreesVec3d(
    const JML_Vec3d radians
) {
    return JML_vec3d(
        (180.0 / JML_PI_D) * radians.x,
        (180.0 / JML_PI_D) * radians.y,
        (180.0 / JML_PI_D) * radians.z
    );
}

static inline JML_Vec3f JML_degreesVec3f(
    const JML_Vec3f radians
) {
    return JML_vec3f(
        (180.f / JML_PI_F) * radians.x,
        (180.f / JML_PI_F) * radians.y,
        (180.f / JML_PI_F) * radians.z
    );
}

static inline JML_Vec4d JML_degreesVec4d(
    const JML_Vec4d radians
) {
    return JML_vec4d(
        (180.0 / JML_PI_D) * radians.x,
        (180.0 / JML_PI_D) * radians.y,
        (180.0 / JML_PI_D) * radians.z,
        (180.0 / JML_PI_D) * radians.w
    );
}

static inline JML_Vec4f JML_degreesVec4f(
    const JML_Vec4f radians
) {
    return JML_vec4f(
        (180.f / JML_PI_F) * radians.x,
        (180.f / JML_PI_F) * radians.y,
        (180.f / JML_PI_F) * radians.z,
        (180.f / JML_PI_F) * radians.w
    );
}

#define JML_degrees_GENERIC_1(radians) _Generic( \
    (radians),                                   \
    double: JML_degreesD,                        \
    float: JML_degreesF,                         \
    JML_Vec2d: JML_degreesVec2d,                 \
    JML_Vec2f: JML_degreesVec2f,                 \
    JML_Vec3d: JML_degreesVec3d,                 \
    JML_Vec3f: JML_degreesVec3f,                 \
    JML_Vec4d: JML_degreesVec4d,                 \
    JML_Vec4f: JML_degreesVec4f,                 \
    default: JML_INVALID_ARGUMENT_TYPES          \
)(radians)

#define JML_degrees(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_degrees_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_DEGREES_H

#ifdef JML_WITHOUT_PREFIX

#define degrees(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_degrees_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
