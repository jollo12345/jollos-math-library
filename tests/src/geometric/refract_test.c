#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/geometric/refract.h"

static void refract_test_vec2d_1() {
    const Vec2d value = refract(
        vec2d(0.6, -0.8),
        vec2d(0.0, 1.0),
        0.5
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.3, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.9539392014169457, value.y);
}

static void refract_test_vec2d_2() {
    const Vec2d value = refract(
        vec2d(1.0, 0.0),
        vec2d(0.0, 1.0),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.y);
}

static void refract_test_vec2f_1() {
    const Vec2f value = refract(
        vec2f(0.6f, -0.8f),
        vec2f(0.f, 1.f),
        0.5f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.3f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.9539392f, value.y);
}

static void refract_test_vec2f_2() {
    const Vec2f value = refract(
        vec2f(1.f, 0.f),
        vec2f(0.f, 1.f),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.y);
}

static void refract_test_vec3d_1() {
    const Vec3d value = refract(
        vec3d(0.36, 0.48, -0.8),
        vec3d(0.0, 0.0, 1.0),
        0.5
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.18, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.24, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.9539392014169457, value.z);
}

static void refract_test_vec3d_2() {
    const Vec3d value = refract(
        vec3d(0.6, 0.8, 0.0),
        vec3d(0.0, 0.0, 1.0),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.z);
}

static void refract_test_vec3f_1() {
    const Vec3f value = refract(
        vec3f(0.36f, 0.48f, -0.8f),
        vec3f(0.f, 0.f, 1.f),
        0.5f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.18f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.24f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.9539392f, value.z);
}

static void refract_test_vec3f_2() {
    const Vec3f value = refract(
        vec3f(0.6f, 0.8f, 0.f),
        vec3f(0.f, 0.f, 1.f),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.z);
}

static void refract_test_vec4d_1() {
    const Vec4d value = refract(
        vec4d(0.2, 0.4, 0.4, -0.8),
        vec4d(0.0, 0.0, 0.0, 1.0),
        0.5
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.1, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.2, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.2, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.9539392014169457, value.w);
}

static void refract_test_vec4d_2() {
    const Vec4d value = refract(
        vec4d(0.6, 0.8, 0.0, 0.0),
        vec4d(0.0, 0.0, 0.0, 1.0),
        2.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.w);
}

static void refract_test_vec4f_1() {
    const Vec4f value = refract(
        vec4f(0.2f, 0.4f, 0.4f, -0.8f),
        vec4f(0.f, 0.f, 0.f, 1.f),
        0.5f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.1f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.2f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.2f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.9539392f, value.w);
}

static void refract_test_vec4f_2() {
    const Vec4f value = refract(
        vec4f(0.6f, 0.8f, 0.f, 0.f),
        vec4f(0.f, 0.f, 0.f, 1.f),
        2.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(refract_test_vec2d_1);
    RUN_TEST(refract_test_vec2d_2);

    RUN_TEST(refract_test_vec2f_1);
    RUN_TEST(refract_test_vec2f_2);

    RUN_TEST(refract_test_vec3d_1);
    RUN_TEST(refract_test_vec3d_2);

    RUN_TEST(refract_test_vec3f_1);
    RUN_TEST(refract_test_vec3f_2);

    RUN_TEST(refract_test_vec4d_1);
    RUN_TEST(refract_test_vec4d_2);

    RUN_TEST(refract_test_vec4f_1);
    RUN_TEST(refract_test_vec4f_2);

    return UNITY_END();
}