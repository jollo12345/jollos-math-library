#ifndef JML_DETAIL_TYPES_MAT2X2F_H
#define JML_DETAIL_TYPES_MAT2X2F_H

typedef union JML_Mat2x2f {
    struct {
        float m00, m01;
        float m10, m11;
    };
    float data[2][2];
} JML_Mat2x2f;

static_assert(sizeof(JML_Mat2x2f) == 4 * sizeof(float));

#endif  // JML_DETAIL_TYPES_MAT2X2F_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Mat2x2f Mat2x2f;

#endif
