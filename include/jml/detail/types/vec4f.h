#ifndef JML_DETAIL_TYPES_VEC4F_H
#define JML_DETAIL_TYPES_VEC4F_H

typedef union JML_Vec4f {
    struct {
        union {float x, r, s;};
        union {float y, g, t;};
        union {float z, b, p;};
        union {float w, a, q;};
    };
    float data[4];
} JML_Vec4f;

static_assert(sizeof(JML_Vec4f) == 4 * sizeof(float));

#endif  // JML_DETAIL_TYPES_VEC4F_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec4f Vec4f;

#endif
