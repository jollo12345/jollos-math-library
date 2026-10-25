#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/arithmetic/mul.h"
#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec2i.h"
#include "jml/constructors/vec2u.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec3i.h"
#include "jml/constructors/vec3u.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/constructors/vec4i.h"
#include "jml/constructors/vec4u.h"

static void mul_test_d_mat2x2d() {
    const Mat2x2d value = mul(
        2.0,
        mat2x2d(
            1.0, 2.0,
            3.0, 4.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m11);
}

static void mul_test_d_mat3x3d() {
    const Mat3x3d value = mul(
        2.0,
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 16.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m22);
}

static void mul_test_d_mat4x4d() {
    const Mat4x4d value = mul(
        2.0,
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 16.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 20.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 22.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 24.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 26.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 30.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 32.0, value.m33);
}

static void mul_test_d_vec2d() {
    const Vec2d value = mul(
        3.0,
        vec2d(2.0, 5.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.y);
}

static void mul_test_d_vec3d() {
    const Vec3d value = mul(
        3.0,
        vec3d(2.0, 5.0, 7.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 21.0, value.z);
}

static void mul_test_d_vec4d() {
    const Vec4d value = mul(
        3.0,
        vec4d(2.0, 5.0, 7.0, 11.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 21.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 33.0, value.w);
}

static void mul_test_f_mat2x2f() {
    const Mat2x2f value = mul(
        2.f,
        mat2x2f(1.f, 2.f, 3.f, 4.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m11);
}

static void mul_test_f_mat3x3f() {
    const Mat3x3f value = mul(
        2.f,
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 16.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m22);
}

static void mul_test_f_mat4x4f() {
    const Mat4x4f value = mul(
        2.f,
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 16.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 20.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 22.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 24.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 26.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 30.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 32.f, value.m33);
}

static void mul_test_f_vec2f() {
    const Vec2f value = mul(
        3.f,
        vec2f(2.f, 5.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.y);
}

static void mul_test_f_vec3f() {
    const Vec3f value = mul(
        3.f,
        vec3f(2.f, 5.f, 7.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 21.f, value.z);
}

static void mul_test_f_vec4f() {
    const Vec4f value = mul(
        3.f,
        vec4f(2.f, 5.f, 7.f, 11.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 21.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 33.f, value.w);
}

static void mul_test_i_vec2i() {
    const Vec2i value = mul(
        3,
        vec2i(2, -5)
    );

    TEST_ASSERT_EQUAL_INT(6, value.x);
    TEST_ASSERT_EQUAL_INT(-15, value.y);
}

static void mul_test_i_vec3i() {
    const Vec3i value = mul(
        3,
        vec3i(2, -5, 7)
    );

    TEST_ASSERT_EQUAL_INT(6, value.x);
    TEST_ASSERT_EQUAL_INT(-15, value.y);
    TEST_ASSERT_EQUAL_INT(21, value.z);
}

static void mul_test_i_vec4i() {
    const Vec4i value = mul(
        3,
        vec4i(2, -5, 7, -11)
    );

    TEST_ASSERT_EQUAL_INT(6, value.x);
    TEST_ASSERT_EQUAL_INT(-15, value.y);
    TEST_ASSERT_EQUAL_INT(21, value.z);
    TEST_ASSERT_EQUAL_INT(-33, value.w);
}

static void mul_test_u_vec2u() {
    const Vec2u value = mul(
        3u,
        vec2u(2u, 5u)
    );

    TEST_ASSERT_EQUAL_UINT(6u, value.x);
    TEST_ASSERT_EQUAL_UINT(15u, value.y);
}

static void mul_test_u_vec3u() {
    const Vec3u value = mul(
        3u,
        vec3u(2u, 5u, 7u)
    );

    TEST_ASSERT_EQUAL_UINT(6u, value.x);
    TEST_ASSERT_EQUAL_UINT(15u, value.y);
    TEST_ASSERT_EQUAL_UINT(21u, value.z);
}

static void mul_test_u_vec4u() {
    const Vec4u value = mul(
        3u,
        vec4u(2u, 5u, 7u, 11u)
    );

    TEST_ASSERT_EQUAL_UINT(6u, value.x);
    TEST_ASSERT_EQUAL_UINT(15u, value.y);
    TEST_ASSERT_EQUAL_UINT(21u, value.z);
    TEST_ASSERT_EQUAL_UINT(33u, value.w);
}

static void mul_test_mat2x2d_d() {
    const Mat2x2d value = mul(
        mat2x2d(1.0, 2.0, 3.0, 4.0),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m11);
}

static void mul_test_mat2x2d_mat2x2d() {
    const Mat2x2d value = mul(
        mat2x2d(1.0, 2.0, 3.0, 4.0),
        mat2x2d(5.0, 6.0, 7.0, 8.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 23.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 34.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 31.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 46.0, value.m11);
}

static void mul_test_mat2x2d_vec2d() {
    const Vec2d value = mul(
        mat2x2d(1.0, 2.0, 3.0, 4.0),
        vec2d(5.0, 6.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 23.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 34.0, value.y);
}

static void mul_test_mat2x2f_f() {
    const Mat2x2f value = mul(
        mat2x2f(1.f, 2.f, 3.f, 4.f),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m11);
}

static void mul_test_mat2x2f_mat2x2f() {
    const Mat2x2f value = mul(
        mat2x2f(1.f, 2.f, 3.f, 4.f),
        mat2x2f(5.f, 6.f, 7.f, 8.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 23.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 34.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 31.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 46.f, value.m11);
}

static void mul_test_mat2x2f_vec2f() {
    const Vec2f value = mul(
        mat2x2f(1.f, 2.f, 3.f, 4.f),
        vec2f(5.f, 6.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 23.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 34.f, value.y);
}

static void mul_test_mat3x3d_d() {
    const Mat3x3d value = mul(
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        ),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 16.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m22);
}

static void mul_test_mat3x3d_mat3x3d() {
    const Mat3x3d value = mul(
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        ),
        mat3x3d(
            2.0, 0.0, 1.0,
            1.0, 3.0, 0.0,
            0.0, 1.0, 4.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 13.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 17.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 21.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 32.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 37.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 42.0, value.m22);
}

static void mul_test_mat3x3d_vec3d() {
    const Vec3d value = mul(
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        ),
        vec3d(2.0, 3.0, 4.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 42.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 51.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 60.0, value.z);
}

static void mul_test_mat3x3f_f() {
    const Mat3x3f value = mul(
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        ),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 16.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m22);
}

static void mul_test_mat3x3f_mat3x3f() {
    const Mat3x3f value = mul(
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        ),
        mat3x3f(
            2.f, 0.f, 1.f,
            1.f, 3.f, 0.f,
            0.f, 1.f, 4.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 13.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 17.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 21.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 32.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 37.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 42.f, value.m22);
}

static void mul_test_mat3x3f_vec3f() {
    const Vec3f value = mul(
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        ),
        vec3f(2.f, 3.f, 4.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 42.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 51.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 60.f, value.z);
}

static void mul_test_mat4x4d_d() {
    const Mat4x4d value = mul(
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        ),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 16.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 20.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 22.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 24.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 26.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 30.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 32.0, value.m33);
}

static void mul_test_mat4x4d_mat4x4d() {
    const Mat4x4d value = mul(
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        ),
        mat4x4d(
            1.0, 0.0, 0.0, 2.0,
            0.0, 1.0, 3.0, 0.0,
            2.0, 0.0, 1.0, 0.0,
            0.0, 4.0, 0.0, 1.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 27.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 30.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 33.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 36.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 32.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 36.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 40.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 44.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 11.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 17.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 20.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 33.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 38.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 43.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 48.0, value.m33);
}

static void mul_test_mat4x4d_vec4d() {
    const Vec4d value = mul(
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        ),
        vec4d(1.0, 2.0, 3.0, 4.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 90.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 100.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 110.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 120.0, value.w);
}

static void mul_test_mat4x4f_f() {
    const Mat4x4f value = mul(
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        ),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 16.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 20.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 22.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 24.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 26.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 30.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 32.f, value.m33);
}

static void mul_test_mat4x4f_mat4x4f() {
    const Mat4x4f value = mul(
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        ),
        mat4x4f(
            1.f, 0.f, 0.f, 2.f,
            0.f, 1.f, 3.f, 0.f,
            2.f, 0.f, 1.f, 0.f,
            0.f, 4.f, 0.f, 1.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 27.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 30.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 33.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 36.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 32.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 36.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 40.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 44.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 11.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 17.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 20.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 33.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 38.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 43.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 48.f, value.m33);
}

static void mul_test_mat4x4f_vec4f() {
    const Vec4f value = mul(
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        ),
        vec4f(1.f, 2.f, 3.f, 4.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 90.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 100.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 110.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 120.f, value.w);
}

static void mul_test_vec2d_d() {
    const Vec2d value = mul(
        vec2d(2.0, 5.0),
        3.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.y);
}

static void mul_test_vec2d_mat2x2d() {
    const Vec2d value = mul(
        vec2d(5.0, 6.0),
        mat2x2d(1.0, 2.0, 3.0, 4.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 17.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 39.0, value.y);
}

static void mul_test_vec2d_vec2d() {
    const Vec2d value = mul(
        vec2d(2.0, 3.0),
        vec2d(11.0, 13.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 22.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 39.0, value.y);
}

static void mul_test_vec2f_f() {
    const Vec2f value = mul(
        vec2f(2.f, 5.f),
        3.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.y);
}

static void mul_test_vec2f_mat2x2f() {
    const Vec2f value = mul(
        vec2f(5.f, 6.f),
        mat2x2f(1.f, 2.f, 3.f, 4.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 17.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 39.f, value.y);
}

static void mul_test_vec2f_vec2f() {
    const Vec2f value = mul(
        vec2f(2.f, 3.f),
        vec2f(11.f, 13.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 22.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 39.f, value.y);
}

static void mul_test_vec2i_i() {
    const Vec2i value = mul(
        vec2i(2, -5),
        3
    );

    TEST_ASSERT_EQUAL_INT(6, value.x);
    TEST_ASSERT_EQUAL_INT(-15, value.y);
}

static void mul_test_vec2i_vec2i() {
    const Vec2i value = mul(
        vec2i(2, -3),
        vec2i(11, 13)
    );

    TEST_ASSERT_EQUAL_INT(22, value.x);
    TEST_ASSERT_EQUAL_INT(-39, value.y);
}

static void mul_test_vec2u_u() {
    const Vec2u value = mul(
        vec2u(2u, 5u),
        3u
    );

    TEST_ASSERT_EQUAL_UINT(6u, value.x);
    TEST_ASSERT_EQUAL_UINT(15u, value.y);
}

static void mul_test_vec2u_vec2u() {
    const Vec2u value = mul(
        vec2u(2u, 3u),
        vec2u(11u, 13u)
    );

    TEST_ASSERT_EQUAL_UINT(22u, value.x);
    TEST_ASSERT_EQUAL_UINT(39u, value.y);
}

static void mul_test_vec3d_d() {
    const Vec3d value = mul(
        vec3d(2.0, 5.0, 7.0),
        3.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 21.0, value.z);
}

static void mul_test_vec3d_mat3x3d() {
    const Vec3d value = mul(
        vec3d(2.0, 3.0, 4.0),
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 20.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 47.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 74.0, value.z);
}

static void mul_test_vec3d_vec3d() {
    const Vec3d value = mul(
        vec3d(2.0, 3.0, 5.0),
        vec3d(11.0, 13.0, 17.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 22.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 39.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 85.0, value.z);
}

static void mul_test_vec3f_f() {
    const Vec3f value = mul(
        vec3f(2.f, 5.f, 7.f),
        3.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 21.f, value.z);
}

static void mul_test_vec3f_mat3x3f() {
    const Vec3f value = mul(
        vec3f(2.f, 3.f, 4.f),
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 20.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 47.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 74.f, value.z);
}

static void mul_test_vec3f_vec3f() {
    const Vec3f value = mul(
        vec3f(2.f, 3.f, 5.f),
        vec3f(11.f, 13.f, 17.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 22.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 39.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 85.f, value.z);
}

static void mul_test_vec3i_i() {
    const Vec3i value = mul(
        vec3i(2, -5, 7),
        3
    );

    TEST_ASSERT_EQUAL_INT(6, value.x);
    TEST_ASSERT_EQUAL_INT(-15, value.y);
    TEST_ASSERT_EQUAL_INT(21, value.z);
}

static void mul_test_vec3i_vec3i() {
    const Vec3i value = mul(
        vec3i(2, -3, 5),
        vec3i(11, 13, -17)
    );

    TEST_ASSERT_EQUAL_INT(22, value.x);
    TEST_ASSERT_EQUAL_INT(-39, value.y);
    TEST_ASSERT_EQUAL_INT(-85, value.z);
}

static void mul_test_vec3u_u() {
    const Vec3u value = mul(
        vec3u(2u, 5u, 7u),
        3u
    );

    TEST_ASSERT_EQUAL_UINT(6u, value.x);
    TEST_ASSERT_EQUAL_UINT(15u, value.y);
    TEST_ASSERT_EQUAL_UINT(21u, value.z);
}

static void mul_test_vec3u_vec3u() {
    const Vec3u value = mul(
        vec3u(2u, 3u, 5u),
        vec3u(11u, 13u, 17u)
    );

    TEST_ASSERT_EQUAL_UINT(22u, value.x);
    TEST_ASSERT_EQUAL_UINT(39u, value.y);
    TEST_ASSERT_EQUAL_UINT(85u, value.z);
}

static void mul_test_vec4d_d() {
    const Vec4d value = mul(
        vec4d(2.0, 5.0, 7.0, 11.0),
        3.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 21.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 33.0, value.w);
}

static void mul_test_vec4d_mat4x4d() {
    const Vec4d value = mul(
        vec4d(1.0, 2.0, 3.0, 4.0),
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 30.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 70.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 110.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 150.0, value.w);
}

static void mul_test_vec4d_vec4d() {
    const Vec4d value = mul(
        vec4d(2.0, 3.0, 5.0, 7.0),
        vec4d(11.0, 13.0, 17.0, 19.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 22.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 39.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 85.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 133.0, value.w);
}

static void mul_test_vec4f_f() {
    const Vec4f value = mul(
        vec4f(2.f, 5.f, 7.f, 11.f),
        3.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 21.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 33.f, value.w);
}

static void mul_test_vec4f_mat4x4f() {
    const Vec4f value = mul(
        vec4f(1.f, 2.f, 3.f, 4.f),
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 30.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 70.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 110.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 150.f, value.w);
}

static void mul_test_vec4f_vec4f() {
    const Vec4f value = mul(
        vec4f(2.f, 3.f, 5.f, 7.f),
        vec4f(11.f, 13.f, 17.f, 19.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 22.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 39.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 85.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 133.f, value.w);
}

static void mul_test_vec4i_i() {
    const Vec4i value = mul(
        vec4i(2, -5, 7, -11),
        3
    );

    TEST_ASSERT_EQUAL_INT(6, value.x);
    TEST_ASSERT_EQUAL_INT(-15, value.y);
    TEST_ASSERT_EQUAL_INT(21, value.z);
    TEST_ASSERT_EQUAL_INT(-33, value.w);
}

static void mul_test_vec4i_vec4i() {
    const Vec4i value = mul(
        vec4i(2, -3, 5, -7),
        vec4i(11, 13, -17, -19)
    );

    TEST_ASSERT_EQUAL_INT(22, value.x);
    TEST_ASSERT_EQUAL_INT(-39, value.y);
    TEST_ASSERT_EQUAL_INT(-85, value.z);
    TEST_ASSERT_EQUAL_INT(133, value.w);
}

static void mul_test_vec4u_u() {
    const Vec4u value = mul(
        vec4u(2u, 5u, 7u, 11u),
        3u
    );

    TEST_ASSERT_EQUAL_UINT(6u, value.x);
    TEST_ASSERT_EQUAL_UINT(15u, value.y);
    TEST_ASSERT_EQUAL_UINT(21u, value.z);
    TEST_ASSERT_EQUAL_UINT(33u, value.w);
}

static void mul_test_vec4u_vec4u() {
    const Vec4u value = mul(
        vec4u(2u, 3u, 5u, 7u),
        vec4u(11u, 13u, 17u, 19u)
    );

    TEST_ASSERT_EQUAL_UINT(22u, value.x);
    TEST_ASSERT_EQUAL_UINT(39u, value.y);
    TEST_ASSERT_EQUAL_UINT(85u, value.z);
    TEST_ASSERT_EQUAL_UINT(133u, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(mul_test_d_mat2x2d);
    RUN_TEST(mul_test_d_mat3x3d);
    RUN_TEST(mul_test_d_mat4x4d);
    RUN_TEST(mul_test_d_vec2d);
    RUN_TEST(mul_test_d_vec3d);
    RUN_TEST(mul_test_d_vec4d);

    RUN_TEST(mul_test_f_mat2x2f);
    RUN_TEST(mul_test_f_mat3x3f);
    RUN_TEST(mul_test_f_mat4x4f);
    RUN_TEST(mul_test_f_vec2f);
    RUN_TEST(mul_test_f_vec3f);
    RUN_TEST(mul_test_f_vec4f);

    RUN_TEST(mul_test_i_vec2i);
    RUN_TEST(mul_test_i_vec3i);
    RUN_TEST(mul_test_i_vec4i);

    RUN_TEST(mul_test_u_vec2u);
    RUN_TEST(mul_test_u_vec3u);
    RUN_TEST(mul_test_u_vec4u);

    RUN_TEST(mul_test_mat2x2d_d);
    RUN_TEST(mul_test_mat2x2d_mat2x2d);
    RUN_TEST(mul_test_mat2x2d_vec2d);
    RUN_TEST(mul_test_mat2x2f_f);
    RUN_TEST(mul_test_mat2x2f_mat2x2f);
    RUN_TEST(mul_test_mat2x2f_vec2f);

    RUN_TEST(mul_test_mat3x3d_d);
    RUN_TEST(mul_test_mat3x3d_mat3x3d);
    RUN_TEST(mul_test_mat3x3d_vec3d);
    RUN_TEST(mul_test_mat3x3f_f);
    RUN_TEST(mul_test_mat3x3f_mat3x3f);
    RUN_TEST(mul_test_mat3x3f_vec3f);

    RUN_TEST(mul_test_mat4x4d_d);
    RUN_TEST(mul_test_mat4x4d_mat4x4d);
    RUN_TEST(mul_test_mat4x4d_vec4d);
    RUN_TEST(mul_test_mat4x4f_f);
    RUN_TEST(mul_test_mat4x4f_mat4x4f);
    RUN_TEST(mul_test_mat4x4f_vec4f);

    RUN_TEST(mul_test_vec2d_d);
    RUN_TEST(mul_test_vec2d_mat2x2d);
    RUN_TEST(mul_test_vec2d_vec2d);
    RUN_TEST(mul_test_vec2f_f);
    RUN_TEST(mul_test_vec2f_mat2x2f);
    RUN_TEST(mul_test_vec2f_vec2f);
    RUN_TEST(mul_test_vec2i_i);
    RUN_TEST(mul_test_vec2i_vec2i);
    RUN_TEST(mul_test_vec2u_u);
    RUN_TEST(mul_test_vec2u_vec2u);

    RUN_TEST(mul_test_vec3d_d);
    RUN_TEST(mul_test_vec3d_mat3x3d);
    RUN_TEST(mul_test_vec3d_vec3d);
    RUN_TEST(mul_test_vec3f_f);
    RUN_TEST(mul_test_vec3f_mat3x3f);
    RUN_TEST(mul_test_vec3f_vec3f);
    RUN_TEST(mul_test_vec3i_i);
    RUN_TEST(mul_test_vec3i_vec3i);
    RUN_TEST(mul_test_vec3u_u);
    RUN_TEST(mul_test_vec3u_vec3u);

    RUN_TEST(mul_test_vec4d_d);
    RUN_TEST(mul_test_vec4d_mat4x4d);
    RUN_TEST(mul_test_vec4d_vec4d);
    RUN_TEST(mul_test_vec4f_f);
    RUN_TEST(mul_test_vec4f_mat4x4f);
    RUN_TEST(mul_test_vec4f_vec4f);
    RUN_TEST(mul_test_vec4i_i);
    RUN_TEST(mul_test_vec4i_vec4i);
    RUN_TEST(mul_test_vec4u_u);
    RUN_TEST(mul_test_vec4u_vec4u);

    return UNITY_END();
}