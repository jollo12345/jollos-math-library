#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/arithmetic/div.h"
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

static void div_test_mat2x2d() {
    const Mat2x2d value = div(
        mat2x2d(
            2.0, 4.0,
            6.0, 8.0
        ),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m11);
}

static void div_test_mat2x2f() {
    const Mat2x2f value = div(
        mat2x2f(
            2.f, 4.f,
            6.f, 8.f
        ),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m11);
}

static void div_test_mat3x3d() {
    const Mat3x3d value = div(
        mat3x3d(
            2.0, 4.0, 6.0,
            8.0, 10.0, 12.0,
            14.0, 16.0, 18.0
        ),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m22);
}

static void div_test_mat3x3f() {
    const Mat3x3f value = div(
        mat3x3f(
            2.f, 4.f, 6.f,
            8.f, 10.f, 12.f,
            14.f, 16.f, 18.f
        ),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.m22);
}

static void div_test_mat4x4d() {
    const Mat4x4d value = div(
        mat4x4d(
            2.0, 4.0, 6.0, 8.0,
            10.0, 12.0, 14.0, 16.0,
            18.0, 20.0, 22.0, 24.0,
            26.0, 28.0, 30.0, 32.0
        ),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 11.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 13.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 16.0, value.m33);
}

static void div_test_mat4x4f() {
    const Mat4x4f value = div(
        mat4x4f(
            2.f, 4.f, 6.f, 8.f,
            10.f, 12.f, 14.f, 16.f,
            18.f, 20.f, 22.f, 24.f,
            26.f, 28.f, 30.f, 32.f
        ),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 11.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 13.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 16.f, value.m33);
}

static void div_test_vec2d() {
    const Vec2d value = div(
        vec2d(10.0, 20.0),
        5.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.y);
}

static void div_test_vec2f() {
    const Vec2f value = div(
        vec2f(10.f, 20.f),
        5.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.y);
}

static void div_test_vec2i() {
    const Vec2i value = div(
        vec2i(10, -20),
        5
    );

    TEST_ASSERT_EQUAL_INT(2, value.x);
    TEST_ASSERT_EQUAL_INT(-4, value.y);
}

static void div_test_vec2u() {
    const Vec2u value = div(
        vec2u(10u, 20u),
        5u
    );

    TEST_ASSERT_EQUAL_UINT(2u, value.x);
    TEST_ASSERT_EQUAL_UINT(4u, value.y);
}

static void div_test_vec3d() {
    const Vec3d value = div(
        vec3d(10.0, 20.0, 30.0),
        5.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.z);
}

static void div_test_vec3f() {
    const Vec3f value = div(
        vec3f(10.f, 20.f, 30.f),
        5.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.z);
}

static void div_test_vec3i() {
    const Vec3i value = div(
        vec3i(10, -20, 30),
        5
    );

    TEST_ASSERT_EQUAL_INT(2, value.x);
    TEST_ASSERT_EQUAL_INT(-4, value.y);
    TEST_ASSERT_EQUAL_INT(6, value.z);
}

static void div_test_vec3u() {
    const Vec3u value = div(
        vec3u(10u, 20u, 30u),
        5u
    );

    TEST_ASSERT_EQUAL_UINT(2u, value.x);
    TEST_ASSERT_EQUAL_UINT(4u, value.y);
    TEST_ASSERT_EQUAL_UINT(6u, value.z);
}

static void div_test_vec4d() {
    const Vec4d value = div(
        vec4d(10.0, 20.0, 30.0, 40.0),
        5.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.w);
}

static void div_test_vec4f() {
    const Vec4f value = div(
        vec4f(10.f, 20.f, 30.f, 40.f),
        5.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.w);
}

static void div_test_vec4i() {
    const Vec4i value = div(
        vec4i(10, -20, 30, -40),
        5
    );

    TEST_ASSERT_EQUAL_INT(2, value.x);
    TEST_ASSERT_EQUAL_INT(-4, value.y);
    TEST_ASSERT_EQUAL_INT(6, value.z);
    TEST_ASSERT_EQUAL_INT(-8, value.w);
}

static void div_test_vec4u() {
    const Vec4u value = div(
        vec4u(10u, 20u, 30u, 40u),
        5u
    );

    TEST_ASSERT_EQUAL_UINT(2u, value.x);
    TEST_ASSERT_EQUAL_UINT(4u, value.y);
    TEST_ASSERT_EQUAL_UINT(6u, value.z);
    TEST_ASSERT_EQUAL_UINT(8u, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(div_test_mat2x2d);
    RUN_TEST(div_test_mat2x2f);
    RUN_TEST(div_test_mat3x3d);
    RUN_TEST(div_test_mat3x3f);
    RUN_TEST(div_test_mat4x4d);
    RUN_TEST(div_test_mat4x4f);
    RUN_TEST(div_test_vec2d);
    RUN_TEST(div_test_vec2f);
    RUN_TEST(div_test_vec2i);
    RUN_TEST(div_test_vec2u);
    RUN_TEST(div_test_vec3d);
    RUN_TEST(div_test_vec3f);
    RUN_TEST(div_test_vec3i);
    RUN_TEST(div_test_vec3u);
    RUN_TEST(div_test_vec4d);
    RUN_TEST(div_test_vec4f);
    RUN_TEST(div_test_vec4i);
    RUN_TEST(div_test_vec4u);
    return UNITY_END();
}