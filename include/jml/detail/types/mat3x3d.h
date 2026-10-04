#ifndef JML_DETAIL_TYPES_MAT3X3D_H
#define JML_DETAIL_TYPES_MAT3X3D_H

typedef union JML_Mat3x3d {
    struct {
        double m00, m01, m02;
        double m10, m11, m12;
        double m20, m21, m22;
    };
    double data[3][3];
} JML_Mat3x3d;

static_assert(sizeof(JML_Mat3x3d) == 9 * sizeof(double));

#endif  // JML_DETAIL_TYPES_MAT3X3D_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Mat3x3d Mat3x3d;

#endif
