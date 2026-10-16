#ifndef JML_DETAIL_TYPES_VEC4I_H
#define JML_DETAIL_TYPES_VEC4I_H

typedef union JML_Vec4i {
    struct {
        union {
            int x, r, s;
        };
        union {
            int y, g, t;
        };
        union {
            int z, b, p;
        };
        union {
            int w, a, q;
        };
    };
    int data[4];
} JML_Vec4i;

static_assert(sizeof(JML_Vec4i) == 4 * sizeof(int));

#endif  // JML_DETAIL_TYPES_VEC4I_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec4i Vec4i;

#endif
