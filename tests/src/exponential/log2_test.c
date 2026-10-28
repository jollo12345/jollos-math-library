#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/exponential/log2.h"

static void log2_test_double_1() {
    const double value = log2(8.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value);
}

static void log2_test_double_2() {
    const double value = log2(10.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.321928094887362, value);
}

static void log2_test_float_1() {
    const float value = log2(8.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value);
}

static void log2_test_float_2() {
    const float value = log2(10.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.321928f, value);
}

static void log2_test_vec2d_1() {
    const Vec2d value = log2(vec2d(1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
}

static void log2_test_vec2d_2() {
    const Vec2d value = log2(vec2d(8.0, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.y);
}

static void log2_test_vec2f_1() {
    const Vec2f value = log2(vec2f(1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
}

static void log2_test_vec2f_2() {
    const Vec2f value = log2(vec2f(8.f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.y);
}

static void log2_test_vec3d_1() {
    const Vec3d value = log2(vec3d(1.0, 2.0, 8.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.z);
}

static void log2_test_vec3d_2() {
    const Vec3d value = log2(vec3d(0.5, 0.25, 10.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -2.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.321928094887362, value.z);
}

static void log2_test_vec3f_1() {
    const Vec3f value = log2(vec3f(1.f, 2.f, 8.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.z);
}

static void log2_test_vec3f_2() {
    const Vec3f value = log2(vec3f(0.5f, 0.25f, 10.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -2.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.321928f, value.z);
}

static void log2_test_vec4d_1() {
    const Vec4d value = log2(vec4d(1.0, 2.0, 8.0, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.w);
}

static void log2_test_vec4d_2() {
    const Vec4d value = log2(vec4d(10.0, 0.25, 3.0, 100.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.321928094887362, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -2.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.584962500721156, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.643856189774724, value.w);
}

static void log2_test_vec4f_1() {
    const Vec4f value = log2(vec4f(1.f, 2.f, 8.f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.w);
}

static void log2_test_vec4f_2() {
    const Vec4f value = log2(vec4f(10.f, 0.25f, 3.f, 100.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.321928f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -2.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5849625f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.643856f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(log2_test_double_1);
    RUN_TEST(log2_test_double_2);

    RUN_TEST(log2_test_float_1);
    RUN_TEST(log2_test_float_2);

    RUN_TEST(log2_test_vec2d_1);
    RUN_TEST(log2_test_vec2d_2);

    RUN_TEST(log2_test_vec2f_1);
    RUN_TEST(log2_test_vec2f_2);

    RUN_TEST(log2_test_vec3d_1);
    RUN_TEST(log2_test_vec3d_2);

    RUN_TEST(log2_test_vec3f_1);
    RUN_TEST(log2_test_vec3f_2);

    RUN_TEST(log2_test_vec4d_1);
    RUN_TEST(log2_test_vec4d_2);

    RUN_TEST(log2_test_vec4f_1);
    RUN_TEST(log2_test_vec4f_2);

    return UNITY_END();
}