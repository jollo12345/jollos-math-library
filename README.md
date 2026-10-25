# jollos-math-library

A math library for C23 with focus on vector and matrix operations.
The goal is to create a library that allows for clear and concise equations.

## Features

- Header-only math library
- Generic dispatch through macros to keep code concise

## Examples

```c
#include <jml/jml.h>

int main() {
    Vec3f a = JML_vec3f(1.f, 2.f, 3.f);
    Vec3f b = JML_vec3f(4.f, 5.f, 6.f);

    Vec3f c = JML_cross(a, b);
    Vec3f n = JML_normalize(JML_add(a, b));
    float d = JML_distance(a, b);

    Mat4x4f m = JML_mul(JML_translation(JML_vec3f(1.f, 0.f, 0.f)), JML_scaling(2, 2, 2));
    return 0;
}
```

```c
#define JML_WITHOUT_PREFIX
#include <jml/jml.h>

int main() {
    Vec3f a = vec3f(1.f, 2.f, 3.f);
    Vec3f b = vec3f(4.f, 5.f, 6.f);

    Vec3f c = cross(a, b);
    Vec3f n = normalize(add(a, b));
    float d = distance(a, b);

    Mat4x4f m = mul(translation(vec3f(1.f, 0.f, 0.f)), scaling(2, 2, 2));
    return 0;
}
```

## Types

|     Kind |                  `Vector` |                        `Matrix` |
|----------|---------------------------|---------------------------------|
|     bool | `Vec2b`, `Vec3b`, `Vec4b` |                               - |
|   double | `Vec2d`, `Vec3d`, `Vec4d` | `Mat2x2d`, `Mat3x3d`, `Mat4x4d` |
|    float | `Vec2f`, `Vec3f`, `Vec4f` | `Mat2x2f`, `Mat3x3f`, `Mat4x4f` |
|      int | `Vec2i`, `Vec3i`, `Vec4i` |                               - |
| unsigned | `Vec2u`, `Vec3u`, `Vec4u` |                               - |

Each type has a lowercase constructor function (`vec3f(...)`, `mat4x4d(...)`).

## Functions

|     Category | Functions                                                                                                            |
|--------------|----------------------------------------------------------------------------------------------------------------------|
|       Affine | `frustum`, `rotation`, `scaling`, `shearing`, `translation`                                                          |
|   Arithmetic | `add`, `div`, `mul`, `neg`, `sub`                                                                                    |
|  Exponential | `sqrt`                                                                                                               |
|    Geometric | `cross`, `distance`, `dot`, `length`, `normalize`, `reflect`, `refract`                                              |
|       Matrix | `determinant`, `inverse`, `matrixCompMul`, `outerProduct`, `transpose`                                               |
|   Relational | `all`, `any`, `equal`, `greaterThan`, `greaterThanEqual`, `lessThan`, `lessThanEqual`, `notEqual`                    |
| Trigonometry | `acos`, `acosh`, `asin`, `asinh`, `atan`, `atanh`, `cos`, `cosh`, `degrees`, `radians`, `sin`, `sinh`, `tan`, `tanh` |

## Constants

|     Category | Constants                                                                                                              | 
|--------------|------------------------------------------------------------------------------------------------------------------------|
|       Common | `PI_D`, `PI_F`                                                                                                         |
|       Matrix | `IDENTITY_MAT2X2D`, `IDENTITY_MAT2X2F`, `IDENTITY_MAT3X3D`, `IDENTITY_MAT3X3F`, `IDENTITY_MAT4X4D`, `IDENTITY_MAT4X4F` |

## Planned Features (To Do)

- [ ] Pack/unpack functions
- [x] Integer vectors
- [ ] Type-cast constructors
- [ ] Non-square matrices
- [ ] Common math functions
- [x] Trigonometry functions
- [x] Geometric functions
- [x] Matrix functions
- [x] Relational functions
- [x] Integer functions
- [ ] Exponential functions