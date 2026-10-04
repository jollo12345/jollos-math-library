#ifndef JML_DETAIL_TYPES_VEC2B_H
#define JML_DETAIL_TYPES_VEC2B_H

typedef union JML_Vec2b {
    struct {
        union {bool x, r, s;};
        union {bool y, g, t;};
    };
    bool data[2];
} JML_Vec2b;

static_assert(sizeof(JML_Vec2b) == 2 * sizeof(bool));

#endif  // JML_DETAIL_TYPES_VEC2B_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec2b Vec2b;

#endif
