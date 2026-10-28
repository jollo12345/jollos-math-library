#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/asinh.h"

static void asinh_test_double_1() {
    const double value = asinh(1.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.881373587019543, value);
}

static void asinh_test_double_2() {
    const double value = asinh(-2.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.44363547517881, value);
}

static void asinh_test_float_1() {
    const float value = asinh(1.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.8813736f, value);
}

static void asinh_test_float_2() {
    const float value = asinh(-2.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.4436355f, value);
}

static void asinh_test_vec2d_1() {
    const Vec2d value = asinh(vec2d(0.0, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.881373587019543, value.y);
}

static void asinh_test_vec2d_2() {
    const Vec2d value = asinh(vec2d(-1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.881373587019543, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.44363547517881, value.y);
}

static void asinh_test_vec2f_1() {
    const Vec2f value = asinh(vec2f(0.f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.8813736f, value.y);
}

static void asinh_test_vec2f_2() {
    const Vec2f value = asinh(vec2f(-1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.8813736f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4436355f, value.y);
}

static void asinh_test_vec3d_1() {
    const Vec3d value = asinh(vec3d(0.0, 0.5, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.481211825059603, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.881373587019543, value.z);
}

static void asinh_test_vec3d_2() {
    const Vec3d value = asinh(vec3d(-0.5, 3.0, -1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.481211825059603, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.818446459232067, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.881373587019543, value.z);
}

static void asinh_test_vec3f_1() {
    const Vec3f value = asinh(vec3f(0.f, 0.5f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.4812118f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.8813736f, value.z);
}

static void asinh_test_vec3f_2() {
    const Vec3f value = asinh(vec3f(-0.5f, 3.f, -1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.4812118f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.8184465f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.8813736f, value.z);
}

static void asinh_test_vec4d_1() {
    const Vec4d value = asinh(vec4d(0.0, 0.5, 1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.481211825059603, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.881373587019543, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.44363547517881, value.w);
}

static void asinh_test_vec4d_2() {
    const Vec4d value = asinh(vec4d(-1.0, -2.0, 0.5, 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.881373587019543, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.44363547517881, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.481211825059603, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.818446459232067, value.w);
}

static void asinh_test_vec4f_1() {
    const Vec4f value = asinh(vec4f(0.f, 0.5f, 1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.4812118f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.8813736f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4436355f, value.w);
}

static void asinh_test_vec4f_2() {
    const Vec4f value = asinh(vec4f(-1.f, -2.f, 0.5f, 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.8813736f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.4436355f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.4812118f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.8184465f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(asinh_test_double_1);
    RUN_TEST(asinh_test_double_2);

    RUN_TEST(asinh_test_float_1);
    RUN_TEST(asinh_test_float_2);

    RUN_TEST(asinh_test_vec2d_1);
    RUN_TEST(asinh_test_vec2d_2);

    RUN_TEST(asinh_test_vec2f_1);
    RUN_TEST(asinh_test_vec2f_2);

    RUN_TEST(asinh_test_vec3d_1);
    RUN_TEST(asinh_test_vec3d_2);

    RUN_TEST(asinh_test_vec3f_1);
    RUN_TEST(asinh_test_vec3f_2);

    RUN_TEST(asinh_test_vec4d_1);
    RUN_TEST(asinh_test_vec4d_2);

    RUN_TEST(asinh_test_vec4f_1);
    RUN_TEST(asinh_test_vec4f_2);

    return UNITY_END();
}
