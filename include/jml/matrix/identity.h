#ifndef JML_MATRIX_IDENTITY_H
#define JML_MATRIX_IDENTITY_H

#include "jml/types/mat2x2d.h"
#include "jml/types/mat2x2f.h"
#include "jml/types/mat3x3d.h"
#include "jml/types/mat3x3f.h"
#include "jml/types/mat4x4d.h"
#include "jml/types/mat4x4f.h"
#include "jml/util.h"

static constexpr JML_Mat2x2d JML_IDENTITY_MAT2X2D = (JML_Mat2x2d){
    {1.0, 0.0,
     0.0, 1.0}
};

static constexpr JML_Mat2x2f JML_IDENTITY_MAT2X2F = (JML_Mat2x2f){
    {1.f, 0.f,
     0.f, 1.f}
};

static constexpr JML_Mat3x3d JML_IDENTITY_MAT3X3D = (JML_Mat3x3d){
    {1.0, 0.0, 0.0,
     0.0, 1.0, 0.0,
     0.0, 0.0, 1.0}
};

static constexpr JML_Mat3x3f JML_IDENTITY_MAT3X3F = (JML_Mat3x3f){
    {1.f, 0.f, 0.f,
     0.f, 1.f, 0.f,
     0.f, 0.f, 1.f}
};

static constexpr JML_Mat4x4d JML_IDENTITY_MAT4X4D = (JML_Mat4x4d){
    {1.0, 0.0, 0.0, 0.0,
     0.0, 1.0, 0.0, 0.0,
     0.0, 0.0, 1.0, 0.0,
     0.0, 0.0, 0.0, 1.0}
};

static constexpr JML_Mat4x4f JML_IDENTITY_MAT4X4F = (JML_Mat4x4f){
    {1.f, 0.f, 0.f, 0.f,
     0.f, 1.f, 0.f, 0.f,
     0.f, 0.f, 1.f, 0.f,
     0.f, 0.f, 0.f, 1.f}
};

#endif  // JML_MATRIX_IDENTITY_H

#ifdef JML_WITHOUT_PREFIX

#define IDENTITY_MAT2X2D JML_IDENTITY_MAT2X2D;

#define IDENTITY_MAT2X2F JML_IDENTITY_MAT2X2F;

#define IDENTITY_MAT3X3D JML_IDENTITY_MAT3X3D;

#define IDENTITY_MAT3X3F JML_IDENTITY_MAT3X3F;

#define IDENTITY_MAT4X4D JML_IDENTITY_MAT4X4D;

#define IDENTITY_MAT4X4F JML_IDENTITY_MAT4X4F;

#endif