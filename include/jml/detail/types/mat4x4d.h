#ifndef JML_DETAIL_TYPES_MAT4X4D_H
#define JML_DETAIL_TYPES_MAT4X4D_H

typedef union JML_Mat4x4d {
    struct {
        double m00, m01, m02, m03;
        double m10, m11, m12, m13;
        double m20, m21, m22, m23;
        double m30, m31, m32, m33;
    };
    double data[4][4];
} JML_Mat4x4d;

static_assert(sizeof(JML_Mat4x4d) == 16 * sizeof(double));

#endif  // JML_DETAIL_TYPES_MAT4X4D_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Mat4x4d Mat4x4d;

#endif
