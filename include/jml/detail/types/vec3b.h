#ifndef JML_DETAIL_TYPES_VEC3B_H
#define JML_DETAIL_TYPES_VEC3B_H

typedef union JML_Vec3b {
    struct {
        union {bool x, r, s;};
        union {bool y, g, t;};
        union {bool z, b, p;};
    };
    bool data[3];
} JML_Vec3b;

static_assert(sizeof(JML_Vec3b) == 3 * sizeof(bool));

#endif  // JML_DETAIL_TYPES_VEC3B_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec3b Vec3b;

#endif
