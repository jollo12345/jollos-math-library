#ifndef JML_DETAIL_TYPES_VEC2D_H
#define JML_DETAIL_TYPES_VEC2D_H

typedef union JML_Vec2d {
    struct {
        union {double x, r, s;};
        union {double y, g, t;};
    };
    double data[2];
} JML_Vec2d;

static_assert(sizeof(JML_Vec2d) == 2 * sizeof(double));

#endif  // JML_DETAIL_TYPES_VEC2D_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec2d Vec2d;

#endif
