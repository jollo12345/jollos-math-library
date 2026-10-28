#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/exponential/sqrt.h"

static void sqrt_test_double_1() {
    const double value = sqrt(4.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value);
}

static void sqrt_test_double_2() {
    const double value = sqrt(2.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.414213562373095, value);
}

static void sqrt_test_float_1() {
    const float value = sqrt(4.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value);
}

static void sqrt_test_float_2() {
    const float value = sqrt(2.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4142135f, value);
}

static void sqrt_test_vec2d_1() {
    const Vec2d value = sqrt(vec2d(4.0, 9.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.y);
}

static void sqrt_test_vec2d_2() {
    const Vec2d value = sqrt(vec2d(2.0, 0.25));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.414213562373095, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.y);
}

static void sqrt_test_vec2f_1() {
    const Vec2f value = sqrt(vec2f(4.f, 9.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.y);
}

static void sqrt_test_vec2f_2() {
    const Vec2f value = sqrt(vec2f(2.f, 0.25f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4142135f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.y);
}

static void sqrt_test_vec3d_1() {
    const Vec3d value = sqrt(vec3d(1.0, 4.0, 9.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.z);
}

static void sqrt_test_vec3d_2() {
    const Vec3d value = sqrt(vec3d(2.0, 0.25, 16.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.414213562373095, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.z);
}

static void sqrt_test_vec3f_1() {
    const Vec3f value = sqrt(vec3f(1.f, 4.f, 9.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.z);
}

static void sqrt_test_vec3f_2() {
    const Vec3f value = sqrt(vec3f(2.f, 0.25f, 16.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4142135f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.z);
}

static void sqrt_test_vec4d_1() {
    const Vec4d value = sqrt(vec4d(0.0, 1.0, 4.0, 9.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.w);
}

static void sqrt_test_vec4d_2() {
    const Vec4d value = sqrt(vec4d(2.0, 0.25, 16.0, 10.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.414213562373095, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.16227766016838, value.w);
}

static void sqrt_test_vec4f_1() {
    const Vec4f value = sqrt(vec4f(0.f, 1.f, 4.f, 9.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.w);
}

static void sqrt_test_vec4f_2() {
    const Vec4f value = sqrt(vec4f(2.f, 0.25f, 16.f, 10.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4142135f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.1622777f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(sqrt_test_double_1);
    RUN_TEST(sqrt_test_double_2);

    RUN_TEST(sqrt_test_float_1);
    RUN_TEST(sqrt_test_float_2);

    RUN_TEST(sqrt_test_vec2d_1);
    RUN_TEST(sqrt_test_vec2d_2);

    RUN_TEST(sqrt_test_vec2f_1);
    RUN_TEST(sqrt_test_vec2f_2);

    RUN_TEST(sqrt_test_vec3d_1);
    RUN_TEST(sqrt_test_vec3d_2);

    RUN_TEST(sqrt_test_vec3f_1);
    RUN_TEST(sqrt_test_vec3f_2);

    RUN_TEST(sqrt_test_vec4d_1);
    RUN_TEST(sqrt_test_vec4d_2);

    RUN_TEST(sqrt_test_vec4f_1);
    RUN_TEST(sqrt_test_vec4f_2);

    return UNITY_END();
}