#ifndef JML_DETAIL_TYPES_VEC4D_H
#define JML_DETAIL_TYPES_VEC4D_H

typedef union JML_Vec4d {
    struct {
        union {double x, r, s;};
        union {double y, g, t;};
        union {double z, b, p;};
        union {double w, a, q;};
    };
    double data[4];
} JML_Vec4d;

static_assert(sizeof(JML_Vec4d) == 4 * sizeof(double));

#endif  // JML_DETAIL_TYPES_VEC4D_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec4d Vec4d;

#endif
