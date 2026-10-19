#ifndef JML_TYPES_VEC3D_H
#define JML_TYPES_VEC3D_H

typedef union JML_Vec3d {
    struct {
        union {
            double x, r, s;
        };
        union {
            double y, g, t;
        };
        union {
            double z, b, p;
        };
    };
    double data[3];
} JML_Vec3d;

static_assert(sizeof(JML_Vec3d) == 3 * sizeof(double));

#endif  // JML_TYPES_VEC3D_H

#ifdef JML_WITHOUT_PREFIX

typedef JML_Vec3d Vec3d;

#endif
