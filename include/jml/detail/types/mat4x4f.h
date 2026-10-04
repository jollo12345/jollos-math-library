#ifndef JML_DETAIL_TYPES_MAT4X4F_H
#define JML_DETAIL_TYPES_MAT4X4F_H

typedef union JML_Mat4x4f {
    struct {
        float m00, m01, m02, m03;
        float m10, m11, m12, m13;
        float m20, m21, m22, m23;
        float m30, m31, m32, m33;
    };
    float data[4][4];
} JML_Mat4x4f;

static_assert(sizeof(JML_Mat4x4f) == 16 * sizeof(float));

#endif  // JML_DETAIL_TYPES_MAT4X4F_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Mat4x4f Mat4x4f;

#endif
