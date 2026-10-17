#ifndef JML_TYPES_VEC3U_H
#define JML_TYPES_VEC3U_H

typedef union JML_Vec3u {
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
    };
    unsigned data[3];
} JML_Vec3u;

static_assert(sizeof(JML_Vec3u) == 3 * sizeof(unsigned));

#endif  // JML_TYPES_VEC3U_H

#ifndef JML_WITHOUT_PREFIX

typedef JML_Vec3u Vec3u;

#endif
