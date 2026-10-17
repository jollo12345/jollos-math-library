#ifndef JML_TYPES_VEC4U_H
#define JML_TYPES_VEC4U_H

typedef union JML_Vec4u {
    struct {
        union {
            unsigned x, r, s;
        };
        union {
            unsigned y, g, t;
        };
        union {
            unsigned z, b, p;
        };
        union {
            unsigned w, a, q;
        };
    };
    unsigned data[4];
} JML_Vec4u;

static_assert(sizeof(JML_Vec4u) == 4 * sizeof(unsigned));

#endif  // JML_TYPES_VEC4U_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec4u Vec4u;

#endif
