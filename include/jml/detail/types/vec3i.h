#ifndef JML_DETAIL_TYPES_VEC3I_H
#define JML_DETAIL_TYPES_VEC3I_H

typedef union JML_Vec3i {
    struct {
        union {int x, r, s;};
        union {int y, g, t;};
        union {int z, b, p;};
    };
    int data[3];
} JML_Vec3i;

static_assert(sizeof(JML_Vec3i) == 3 * sizeof(int));

#endif  // JML_DETAIL_TYPES_VEC3I_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec3i Vec3i;

#endif
