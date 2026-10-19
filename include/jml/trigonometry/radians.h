#ifndef JML_TRIGONOMETRY_RADIANS_H
#define JML_TRIGONOMETRY_RADIANS_H

#include "jml/common/pi.h"
#include "jml/constructors/vec2d.h"
#include "jml/types/vec2d.h"
#include "jml/util.h"

static inline double JML_radiansD(
    const double degrees
) {
    return (JML_PI_D / 180.0) * degrees;
}

static inline float JML_radiansF(
    const float degrees
) {
    return (JML_PI_F / 180.f) * degrees;
}

static inline JML_Vec2d JML_radiansVec2d(
    const JML_Vec2d degrees
) {
    return JML_vec2d(
        (JML_PI_D / 180.0) * degrees.x,
        (JML_PI_D / 180.0) * degrees.y
    );
}

static inline JML_Vec2f JML_radiansVec2f(
    const JML_Vec2f degrees
) {
    return JML_vec2f(
        (JML_PI_F / 180.f) * degrees.x,
        (JML_PI_F / 180.f) * degrees.y
    );
}

static inline JML_Vec3d JML_radiansVec3d(
    const JML_Vec3d degrees
) {
    return JML_vec3d(
        (JML_PI_D / 180.0) * degrees.x,
        (JML_PI_D / 180.0) * degrees.y,
        (JML_PI_D / 180.0) * degrees.z
    );
}

static inline JML_Vec3f JML_radiansVec3f(
    const JML_Vec3f degrees
) {
    return JML_vec3f(
        (JML_PI_F / 180.f) * degrees.x,
        (JML_PI_F / 180.f) * degrees.y,
        (JML_PI_F / 180.f) * degrees.z
    );
}

static inline JML_Vec4d JML_radiansVec4d(
    const JML_Vec4d degrees
) {
    return JML_vec4d(
        (JML_PI_D / 180.0) * degrees.x,
        (JML_PI_D / 180.0) * degrees.y,
        (JML_PI_D / 180.0) * degrees.z,
        (JML_PI_D / 180.0) * degrees.w
    );
}

static inline JML_Vec4f JML_radiansVec4f(
    const JML_Vec4f degrees
) {
    return JML_vec4f(
        (JML_PI_F / 180.f) * degrees.x,
        (JML_PI_F / 180.f) * degrees.y,
        (JML_PI_F / 180.f) * degrees.z,
        (JML_PI_F / 180.f) * degrees.w
    );
}

#define JML_radians_GENERIC_1(degrees) _Generic( \
    (degrees),                                   \
    double: JML_radiansD,                        \
    float: JML_radiansF,                         \
    JML_Vec2d: JML_radiansVec2d,                 \
    JML_Vec2f: JML_radiansVec2f,                 \
    JML_Vec3d: JML_radiansVec3d,                 \
    JML_Vec3f: JML_radiansVec3f,                 \
    JML_Vec4d: JML_radiansVec4d,                 \
    JML_Vec4f: JML_radiansVec4f,                 \
    default: (void (*)(void))0                   \
)(degrees)

#define JML_radians(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_radians_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif  // JML_TRIGONOMETRY_RADIANS_H

#ifdef JML_WITHOUT_PREFIX

#define radians(...) \
    JML_DISPATCH(JML_CONCAT_EXPAND(JML_radians_GENERIC_, JML_NARGS(__VA_ARGS__)), __VA_ARGS__)

#endif
