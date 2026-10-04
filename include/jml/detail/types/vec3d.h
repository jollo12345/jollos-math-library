#ifndef JML_DETAIL_TYPES_VEC3D_H
#define JML_DETAIL_TYPES_VEC3D_H

typedef union JML_Vec3d {
    struct {
        union {double x, r, s;};
        union {double y, g, t;};
        union {double z, b, p;};
    };
    double data[3];
} JML_Vec3d;

static_assert(sizeof(JML_Vec3d) == 3 * sizeof(double));

#endif  // JML_DETAIL_TYPES_VEC3D_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec3d Vec3d;

#endif
