#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/exponential/exp.h"

static void exp_test_double_1() {
    const double value = exp(1.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.718281828459045, value);
}

static void exp_test_double_2() {
    const double value = exp(-2.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.135335283236613, value);
}

static void exp_test_float_1() {
    const float value = exp(1.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.7182817f, value);
}

static void exp_test_float_2() {
    const float value = exp(-2.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.13533528f, value);
}

static void exp_test_vec2d_1() {
    const Vec2d value = exp(vec2d(0.0, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.718281828459045, value.y);
}

static void exp_test_vec2d_2() {
    const Vec2d value = exp(vec2d(-1.0, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.367879441171442, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.648721270700128, value.y);
}

static void exp_test_vec2f_1() {
    const Vec2f value = exp(vec2f(0.f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.7182817f, value.y);
}

static void exp_test_vec2f_2() {
    const Vec2f value = exp(vec2f(-1.f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.36787945f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.6487212f, value.y);
}

static void exp_test_vec3d_1() {
    const Vec3d value = exp(vec3d(0.0, 1.0, -1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.718281828459045, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.367879441171442, value.z);
}

static void exp_test_vec3d_2() {
    const Vec3d value = exp(vec3d(2.0, -0.5, 1.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.38905609893065, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.606530659712633, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.481689070338065, value.z);
}

static void exp_test_vec3f_1() {
    const Vec3f value = exp(vec3f(0.f, 1.f, -1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.7182817f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.36787945f, value.z);
}

static void exp_test_vec3f_2() {
    const Vec3f value = exp(vec3f(2.f, -0.5f, 1.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.389056f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.60653067f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.481689f, value.z);
}

static void exp_test_vec4d_1() {
    const Vec4d value = exp(vec4d(0.0, 1.0, -1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.718281828459045, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.367879441171442, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.38905609893065, value.w);
}

static void exp_test_vec4d_2() {
    const Vec4d value = exp(vec4d(0.5, -2.0, 1.5, -0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.648721270700128, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.135335283236613, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.481689070338065, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.606530659712633, value.w);
}

static void exp_test_vec4f_1() {
    const Vec4f value = exp(vec4f(0.f, 1.f, -1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.7182817f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.36787945f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.389056f, value.w);
}

static void exp_test_vec4f_2() {
    const Vec4f value = exp(vec4f(0.5f, -2.f, 1.5f, -0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.6487212f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.13533528f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.481689f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.60653067f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(exp_test_double_1);
    RUN_TEST(exp_test_double_2);

    RUN_TEST(exp_test_float_1);
    RUN_TEST(exp_test_float_2);

    RUN_TEST(exp_test_vec2d_1);
    RUN_TEST(exp_test_vec2d_2);

    RUN_TEST(exp_test_vec2f_1);
    RUN_TEST(exp_test_vec2f_2);

    RUN_TEST(exp_test_vec3d_1);
    RUN_TEST(exp_test_vec3d_2);

    RUN_TEST(exp_test_vec3f_1);
    RUN_TEST(exp_test_vec3f_2);

    RUN_TEST(exp_test_vec4d_1);
    RUN_TEST(exp_test_vec4d_2);

    RUN_TEST(exp_test_vec4f_1);
    RUN_TEST(exp_test_vec4f_2);

    return UNITY_END();
}