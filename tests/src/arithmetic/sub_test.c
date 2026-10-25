#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/arithmetic/sub.h"
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

static void sub_test_mat2x2d() {
    const Mat2x2d value = sub(
        mat2x2d(
            10.0, 20.0,
            30.0, 40.0
        ),
        mat2x2d(
            1.0, 2.0,
            3.0, 4.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 27.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 36.0, value.m11);
}

static void sub_test_mat2x2f() {
    const Mat2x2f value = sub(
        mat2x2f(
            10.f, 20.f,
            30.f, 40.f
        ),
        mat2x2f(
            1.f, 2.f,
            3.f, 4.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 27.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 36.f, value.m11);
}

static void sub_test_mat3x3d() {
    const Mat3x3d value = sub(
        mat3x3d(
            10.0, 20.0, 30.0,
            40.0, 50.0, 60.0,
            70.0, 80.0, 90.0
        ),
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 27.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 36.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 45.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 54.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 63.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 72.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 81.0, value.m22);
}

static void sub_test_mat3x3f() {
    const Mat3x3f value = sub(
        mat3x3f(
            10.f, 20.f, 30.f,
            40.f, 50.f, 60.f,
            70.f, 80.f, 90.f
        ),
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 27.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 36.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 45.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 54.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 63.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 72.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 81.f, value.m22);
}

static void sub_test_mat4x4d() {
    const Mat4x4d value = sub(
        mat4x4d(
            10.0, 20.0, 30.0, 40.0,
            50.0, 60.0, 70.0, 80.0,
            90.0, 100.0, 110.0, 120.0,
            130.0, 140.0, 150.0, 160.0
        ),
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 27.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 36.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 45.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 54.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 63.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 72.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 81.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 90.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 99.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 108.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 117.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 126.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 135.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 144.0, value.m33);
}

static void sub_test_mat4x4f() {
    const Mat4x4f value = sub(
        mat4x4f(
            10.f, 20.f, 30.f, 40.f,
            50.f, 60.f, 70.f, 80.f,
            90.f, 100.f, 110.f, 120.f,
            130.f, 140.f, 150.f, 160.f
        ),
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 27.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 36.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 45.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 54.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 63.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 72.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 81.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 90.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 99.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 108.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 117.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 126.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 135.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 144.f, value.m33);
}

static void sub_test_vec2d() {
    const Vec2d value = sub(
        vec2d(10.0, 20.0),
        vec2d(1.0, 2.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.y);
}

static void sub_test_vec2f() {
    const Vec2f value = sub(
        vec2f(10.f, 20.f),
        vec2f(1.f, 2.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.y);
}

static void sub_test_vec2i() {
    const Vec2i value = sub(
        vec2i(10, -20),
        vec2i(1, 2)
    );

    TEST_ASSERT_EQUAL_INT(9, value.x);
    TEST_ASSERT_EQUAL_INT(-22, value.y);
}

static void sub_test_vec2u() {
    const Vec2u value = sub(
        vec2u(10u, 20u),
        vec2u(1u, 2u)
    );

    TEST_ASSERT_EQUAL_UINT(9u, value.x);
    TEST_ASSERT_EQUAL_UINT(18u, value.y);
}

static void sub_test_vec3d() {
    const Vec3d value = sub(
        vec3d(10.0, 20.0, 30.0),
        vec3d(1.0, 2.0, 3.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 27.0, value.z);
}

static void sub_test_vec3f() {
    const Vec3f value = sub(
        vec3f(10.f, 20.f, 30.f),
        vec3f(1.f, 2.f, 3.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 27.f, value.z);
}

static void sub_test_vec3i() {
    const Vec3i value = sub(
        vec3i(10, -20, 30),
        vec3i(1, 2, 3)
    );

    TEST_ASSERT_EQUAL_INT(9, value.x);
    TEST_ASSERT_EQUAL_INT(-22, value.y);
    TEST_ASSERT_EQUAL_INT(27, value.z);
}

static void sub_test_vec3u() {
    const Vec3u value = sub(
        vec3u(10u, 20u, 30u),
        vec3u(1u, 2u, 3u)
    );

    TEST_ASSERT_EQUAL_UINT(9u, value.x);
    TEST_ASSERT_EQUAL_UINT(18u, value.y);
    TEST_ASSERT_EQUAL_UINT(27u, value.z);
}

static void sub_test_vec4d() {
    const Vec4d value = sub(
        vec4d(10.0, 20.0, 30.0, 40.0),
        vec4d(1.0, 2.0, 3.0, 4.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 27.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 36.0, value.w);
}

static void sub_test_vec4f() {
    const Vec4f value = sub(
        vec4f(10.f, 20.f, 30.f, 40.f),
        vec4f(1.f, 2.f, 3.f, 4.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 27.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 36.f, value.w);
}

static void sub_test_vec4i() {
    const Vec4i value = sub(
        vec4i(10, -20, 30, -40),
        vec4i(1, 2, 3, 4)
    );

    TEST_ASSERT_EQUAL_INT(9, value.x);
    TEST_ASSERT_EQUAL_INT(-22, value.y);
    TEST_ASSERT_EQUAL_INT(27, value.z);
    TEST_ASSERT_EQUAL_INT(-44, value.w);
}

static void sub_test_vec4u() {
    const Vec4u value = sub(
        vec4u(10u, 20u, 30u, 40u),
        vec4u(1u, 2u, 3u, 4u)
    );

    TEST_ASSERT_EQUAL_UINT(9u, value.x);
    TEST_ASSERT_EQUAL_UINT(18u, value.y);
    TEST_ASSERT_EQUAL_UINT(27u, value.z);
    TEST_ASSERT_EQUAL_UINT(36u, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(sub_test_mat2x2d);
    RUN_TEST(sub_test_mat2x2f);
    RUN_TEST(sub_test_mat3x3d);
    RUN_TEST(sub_test_mat3x3f);
    RUN_TEST(sub_test_mat4x4d);
    RUN_TEST(sub_test_mat4x4f);
    RUN_TEST(sub_test_vec2d);
    RUN_TEST(sub_test_vec2f);
    RUN_TEST(sub_test_vec2i);
    RUN_TEST(sub_test_vec2u);
    RUN_TEST(sub_test_vec3d);
    RUN_TEST(sub_test_vec3f);
    RUN_TEST(sub_test_vec3i);
    RUN_TEST(sub_test_vec3u);
    RUN_TEST(sub_test_vec4d);
    RUN_TEST(sub_test_vec4f);
    RUN_TEST(sub_test_vec4i);
    RUN_TEST(sub_test_vec4u);
    return UNITY_END();
}