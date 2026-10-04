#ifndef JML_DETAIL_TYPES_VEC3F_H
#define JML_DETAIL_TYPES_VEC3F_H

typedef union JML_Vec3f {
    struct {
        union {float x, r, s;};
        union {float y, g, t;};
        union {float z, b, p;};
    };
    float data[3];
} JML_Vec3f;

static_assert(sizeof(JML_Vec3f) == 3 * sizeof(float));

#endif  // JML_DETAIL_TYPES_VEC3F_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec3f Vec3f;

#endif
