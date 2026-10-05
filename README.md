# jollos-math-library

A small math library for C23 with focus on vector and matrix operations.

## Features

- Header-only math library
- Generic dispatch through `_Generic` to keep code concise
- Memory layout for vector and matrix types matches GLSL

## Examples

```c
#include <jml/jml.h>

int main(void) {
    Vec3f a = JML_vec3f(1.f, 2.f, 3.f);
    Vec3f b = JML_vec3f(4.f, 5.f, 6.f);

    Vec3f c = JML_cross(a, b);
    Vec3f n = JML_normalized(add(a, b));
    float d = JML_distance(a, b);

    Mat4x4f m = JML_mul(JML_translation(JML_vec3f(1.f, 0.f, 0.f)), JML_scaling(JML_vec3f(2, 2, 2)));
    return 0;
}
```

```c
#define JML_WITHOUT_PREFIX
#include <jml/jml.h>

int main(void) {
    Vec3f a = vec3f(1.f, 2.f, 3.f);
    Vec3f b = vec3f(4.f, 5.f, 6.f);

    Vec3f c = cross(a, b);
    Vec3f n = normalized(add(a, b));
    float d = distance(a, b);

    Mat4x4f m = mul(translation(vec3f(1.f, 0.f, 0.f)), scaling(vec3f(2, 2, 2)));
    return 0;
}
```

## Types

|   Kind |                        `Vector` |                        `Matrix` |
|--------|---------------------------------|---------------------------------|
|  float |       `Vec2d`, `Vec3d`, `Vec4d` |       `Vec2f`, `Vec3f`, `Vec4f` |
| double | `Mat2x2d`, `Mat3x3d`, `Mat4x4d` | `Mat2x2f`, `Mat3x3f`, `Mat4x4f` |
|   bool |         `<BVec2, BVec3, BVec4>` |                               - |

Each type has a lowercase constructor function (`vec3f(...)`, `mat4x4d(...)`).

## Functions

|   Category |                                                                                         Functions |
|------------|---------------------------------------------------------------------------------------------------|
| Arithmetic |                                                                 `add`, `sub`, `mul`, `div`, `neg` |
|  Geometric |                                                       `cross`, `distance`, `length`, `normalized` |
| Relational | `equal`, `notEqual`, `lessThan`, `lessThanEqual`, `greaterThan`, `greaterThanEqual`, `all`, `any` |
| Transforms |                                                   `translation`, `rotation`, `scaling`, `frustum` |

## Planned Features (To Do)

1. Pack/unpack functions
2. Integer vectors
3. Type-cast constructors
4. Non-square matrices
5. Common math functions