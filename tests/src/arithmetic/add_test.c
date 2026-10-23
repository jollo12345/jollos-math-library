#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/arithmetic/add.h"
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

static void add_test_mat2x2d() {
    const JML_Mat2x2d value = add(
        mat2x2d(
            1.0, 2.0,
            3.0, 4.0
        ),
        mat2x2d(
            10.0, 20.0,
            30.0, 40.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(22.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(33.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(44.0, value.m11);
}

static void add_test_mat2x2f() {
    const JML_Mat2x2f value = add(
        mat2x2f(
            1.f, 2.f,
            3.f, 4.f
        ),
        mat2x2f(
            10.f, 20.f,
            30.f, 40.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(11.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(22.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(33.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(44.f, value.m11);
}

static void add_test_mat3x3d() {
    const JML_Mat3x3d value = add(
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        ),
        mat3x3d(
            10.0, 20.0, 30.0,
            40.0, 50.0, 60.0,
            70.0, 80.0, 90.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(22.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(33.0, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(44.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(55.0, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(66.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(77.0, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(88.0, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(99.0, value.m22);
}

static void add_test_mat3x3f() {
    const JML_Mat3x3f value = add(
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        ),
        mat3x3f(
            10.f, 20.f, 30.f,
            40.f, 50.f, 60.f,
            70.f, 80.f, 90.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(11.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(22.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(33.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(44.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(55.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(66.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(77.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(88.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(99.f, value.m22);
}

static void add_test_mat4x4d() {
    const JML_Mat4x4d value = add(
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        ),
        mat4x4d(
            10.0, 20.0, 30.0, 40.0,
            50.0, 60.0, 70.0, 80.0,
            90.0, 100.0, 110.0, 120.0,
            130.0, 140.0, 150.0, 160.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(22.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(33.0, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(44.0, value.m03);
    TEST_ASSERT_EQUAL_DOUBLE(55.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(66.0, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(77.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(88.0, value.m13);
    TEST_ASSERT_EQUAL_DOUBLE(99.0, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(110.0, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(121.0, value.m22);
    TEST_ASSERT_EQUAL_DOUBLE(132.0, value.m23);
    TEST_ASSERT_EQUAL_DOUBLE(143.0, value.m30);
    TEST_ASSERT_EQUAL_DOUBLE(154.0, value.m31);
    TEST_ASSERT_EQUAL_DOUBLE(165.0, value.m32);
    TEST_ASSERT_EQUAL_DOUBLE(176.0, value.m33);
}

static void add_test_mat4x4f() {
    const JML_Mat4x4f value = add(
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        ),
        mat4x4f(
            10.f, 20.f, 30.f, 40.f,
            50.f, 60.f, 70.f, 80.f,
            90.f, 100.f, 110.f, 120.f,
            130.f, 140.f, 150.f, 160.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(11.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(22.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(33.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(44.f, value.m03);
    TEST_ASSERT_EQUAL_FLOAT(55.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(66.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(77.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(88.f, value.m13);
    TEST_ASSERT_EQUAL_FLOAT(99.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(110.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(121.f, value.m22);
    TEST_ASSERT_EQUAL_FLOAT(132.f, value.m23);
    TEST_ASSERT_EQUAL_FLOAT(143.f, value.m30);
    TEST_ASSERT_EQUAL_FLOAT(154.f, value.m31);
    TEST_ASSERT_EQUAL_FLOAT(165.f, value.m32);
    TEST_ASSERT_EQUAL_FLOAT(176.f, value.m33);
}

static void add_test_vec2d() {
    const JML_Vec2d value = add(vec2d(1.0, 2.0), vec2d(10.0, 20.0));

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(22.0, value.y);
}

static void add_test_vec2f() {
    const JML_Vec2f value = add(vec2f(1.f, 2.f), vec2f(10.f, 20.f));

    TEST_ASSERT_EQUAL_FLOAT(11.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(22.f, value.y);
}

static void add_test_vec2i() {
    const JML_Vec2i value = add(vec2i(1, -2), vec2i(10, 20));

    TEST_ASSERT_EQUAL_INT(11, value.x);
    TEST_ASSERT_EQUAL_INT(18, value.y);
}

static void add_test_vec2u() {
    const JML_Vec2u value = add(vec2u(1u, 2u), vec2u(10u, 20u));

    TEST_ASSERT_EQUAL_UINT(11u, value.x);
    TEST_ASSERT_EQUAL_UINT(22u, value.y);
}

static void add_test_vec3d() {
    const JML_Vec3d value = add(vec3d(1.0, 2.0, 3.0), vec3d(10.0, 20.0, 30.0));

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(22.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(33.0, value.z);
}

static void add_test_vec3f() {
    const JML_Vec3f value = add(vec3f(1.f, 2.f, 3.f), vec3f(10.f, 20.f, 30.f));

    TEST_ASSERT_EQUAL_FLOAT(11.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(22.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(33.f, value.z);
}

static void add_test_vec3i() {
    const JML_Vec3i value = add(vec3i(1, -2, 3), vec3i(10, 20, 30));

    TEST_ASSERT_EQUAL_INT(11, value.x);
    TEST_ASSERT_EQUAL_INT(18, value.y);
    TEST_ASSERT_EQUAL_INT(33, value.z);
}

static void add_test_vec3u() {
    const JML_Vec3u value = add(vec3u(1u, 2u, 3u), vec3u(10u, 20u, 30u));

    TEST_ASSERT_EQUAL_UINT(11u, value.x);
    TEST_ASSERT_EQUAL_UINT(22u, value.y);
    TEST_ASSERT_EQUAL_UINT(33u, value.z);
}

static void add_test_vec4d() {
    const JML_Vec4d value = add(
        vec4d(1.0, 2.0, 3.0, 4.0),
        vec4d(10.0, 20.0, 30.0, 40.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(22.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(33.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(44.0, value.w);
}

static void add_test_vec4f() {
    const JML_Vec4f value = add(
        vec4f(1.f, 2.f, 3.f, 4.f),
        vec4f(10.f, 20.f, 30.f, 40.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(11.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(22.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(33.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(44.f, value.w);
}

static void add_test_vec4i() {
    const JML_Vec4i value = add(vec4i(1, -2, 3, -4), vec4i(10, 20, 30, 40));

    TEST_ASSERT_EQUAL_INT(11, value.x);
    TEST_ASSERT_EQUAL_INT(18, value.y);
    TEST_ASSERT_EQUAL_INT(33, value.z);
    TEST_ASSERT_EQUAL_INT(36, value.w);
}

static void add_test_vec4u() {
    const JML_Vec4u value = add(
        vec4u(1u, 2u, 3u, 4u),
        vec4u(10u, 20u, 30u, 40u)
    );

    TEST_ASSERT_EQUAL_UINT(11u, value.x);
    TEST_ASSERT_EQUAL_UINT(22u, value.y);
    TEST_ASSERT_EQUAL_UINT(33u, value.z);
    TEST_ASSERT_EQUAL_UINT(44u, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(add_test_mat2x2d);
    RUN_TEST(add_test_mat2x2f);
    RUN_TEST(add_test_mat3x3d);
    RUN_TEST(add_test_mat3x3f);
    RUN_TEST(add_test_mat4x4d);
    RUN_TEST(add_test_mat4x4f);
    RUN_TEST(add_test_vec2d);
    RUN_TEST(add_test_vec2f);
    RUN_TEST(add_test_vec2i);
    RUN_TEST(add_test_vec2u);
    RUN_TEST(add_test_vec3d);
    RUN_TEST(add_test_vec3f);
    RUN_TEST(add_test_vec3i);
    RUN_TEST(add_test_vec3u);
    RUN_TEST(add_test_vec4d);
    RUN_TEST(add_test_vec4f);
    RUN_TEST(add_test_vec4i);
    RUN_TEST(add_test_vec4u);
    return UNITY_END();
}