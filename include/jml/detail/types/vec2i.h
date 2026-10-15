#ifndef JML_DETAIL_TYPES_VEC2I_H
#define JML_DETAIL_TYPES_VEC2I_H

typedef union JML_Vec2i {
    struct {
        union {int x, r, s;};
        union {int y, g, t;};
    };
    int data[2];
} JML_Vec2i;

static_assert(sizeof(JML_Vec2i) == 2 * sizeof(int));

#endif  // JML_DETAIL_TYPES_VEC2I_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec2i Vec2i;

#endif
