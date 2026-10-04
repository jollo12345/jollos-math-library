#ifndef JML_DETAIL_TYPES_VEC2F_H
#define JML_DETAIL_TYPES_VEC2F_H

typedef union JML_Vec2f {
    struct {
        union {float x, r, s;};
        union {float y, g, t;};
    };
    float data[2];
} JML_Vec2f;

static_assert(sizeof(JML_Vec2f) == 2 * sizeof(float));

#endif  // JML_DETAIL_TYPES_VEC2F_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec2f Vec2f;

#endif
