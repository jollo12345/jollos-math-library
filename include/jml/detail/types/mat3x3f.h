#ifndef JML_DETAIL_TYPES_MAT3X3F_H
#define JML_DETAIL_TYPES_MAT3X3F_H

typedef union JML_Mat3x3f {
    struct {
        float m00, m01, m02;
        float m10, m11, m12;
        float m20, m21, m22;
    };
    float data[3][3];
} JML_Mat3x3f;

static_assert(sizeof(JML_Mat3x3f) == 9 * sizeof(float));

#endif  // JML_DETAIL_TYPES_MAT3X3F_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Mat3x3f Mat3x3f;

#endif
