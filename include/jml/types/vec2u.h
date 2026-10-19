#ifndef JML_TYPES_VEC2U_H
#define JML_TYPES_VEC2U_H

typedef union JML_Vec2u {
    struct {
        union {
            unsigned x, r, s;
        };
        union {
            unsigned y, g, t;
        };
    };
    unsigned data[2];
} JML_Vec2u;

static_assert(sizeof(JML_Vec2u) == 2 * sizeof(unsigned));

#endif  // JML_TYPES_VEC2U_H

#ifdef JML_WITHOUT_PREFIX

typedef JML_Vec2u Vec2u;

#endif
