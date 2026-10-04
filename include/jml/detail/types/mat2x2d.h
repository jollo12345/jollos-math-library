#ifndef JML_DETAIL_TYPES_MAT2X2D_H
#define JML_DETAIL_TYPES_MAT2X2D_H

typedef union JML_Mat2x2d {
    struct {
        double m00, m01;
        double m10, m11;
    };
    double data[2][2];
} JML_Mat2x2d;

static_assert(sizeof(JML_Mat2x2d) == 4 * sizeof(double));

#endif  // JML_DETAIL_TYPES_MAT2X2D_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Mat2x2d Mat2x2d;

#endif
