#ifndef JML_DETAIL_TYPES_VEC4B_H
#define JML_DETAIL_TYPES_VEC4B_H

typedef union JML_Vec4b {
    struct {
        union {bool x, r, s;};
        union {bool y, g, t;};
        union {bool z, b, p;};
        union {bool w, a, q;};
    };
    bool data[4];
} JML_Vec4b;

static_assert(sizeof(JML_Vec4b) == 4 * sizeof(bool));

#endif  // JML_DETAIL_TYPES_VEC4B_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec4b Vec4b;

#endif
