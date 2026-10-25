#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/acosh.h"

static void acosh_test_scalard_1() {
    const double value = acosh(2.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.316957896924817, value);
}

static void acosh_test_scalard_2() {
    const double value = acosh(10.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.993222846126381, value);
}

static void acosh_test_scalarf_1() {
    const float value = acosh(2.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.316958f, value);
}

static void acosh_test_scalarf_2() {
    const float value = acosh(10.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.993223f, value);
}

static void acosh_test_vec2d_1() {
    const Vec2d value = acosh(vec2d(1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.316957896924817, value.y);
}

static void acosh_test_vec2d_2() {
    const Vec2d value = acosh(vec2d(1.5, 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.962423650119207, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.762747174039086, value.y);
}

static void acosh_test_vec2f_1() {
    const Vec2f value = acosh(vec2f(1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.316958f, value.y);
}

static void acosh_test_vec2f_2() {
    const Vec2f value = acosh(vec2f(1.5f, 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.9624236f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.7627472f, value.y);
}

static void acosh_test_vec3d_1() {
    const Vec3d value = acosh(vec3d(1.0, 1.5, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.962423650119207, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.316957896924817, value.z);
}

static void acosh_test_vec3d_2() {
    const Vec3d value = acosh(vec3d(3.0, 10.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.762747174039086, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.993222846126381, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.316957896924817, value.z);
}

static void acosh_test_vec3f_1() {
    const Vec3f value = acosh(vec3f(1.f, 1.5f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.9624236f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.316958f, value.z);
}

static void acosh_test_vec3f_2() {
    const Vec3f value = acosh(vec3f(3.f, 10.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.7627472f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.993223f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.316958f, value.z);
}

static void acosh_test_vec4d_1() {
    const Vec4d value = acosh(vec4d(1.0, 1.5, 2.0, 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.962423650119207, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.316957896924817, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.762747174039086, value.w);
}

static void acosh_test_vec4d_2() {
    const Vec4d value = acosh(vec4d(10.0, 2.0, 1.5, 5.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.993222846126381, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.316957896924817, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.962423650119207, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.292431669561178, value.w);
}

static void acosh_test_vec4f_1() {
    const Vec4f value = acosh(vec4f(1.f, 1.5f, 2.f, 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.9624236f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.316958f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.7627472f, value.w);
}

static void acosh_test_vec4f_2() {
    const Vec4f value = acosh(vec4f(10.f, 2.f, 1.5f, 5.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.993223f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.316958f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.9624236f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.2924316f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(acosh_test_scalard_1);
    RUN_TEST(acosh_test_scalard_2);

    RUN_TEST(acosh_test_scalarf_1);
    RUN_TEST(acosh_test_scalarf_2);

    RUN_TEST(acosh_test_vec2d_1);
    RUN_TEST(acosh_test_vec2d_2);

    RUN_TEST(acosh_test_vec2f_1);
    RUN_TEST(acosh_test_vec2f_2);

    RUN_TEST(acosh_test_vec3d_1);
    RUN_TEST(acosh_test_vec3d_2);

    RUN_TEST(acosh_test_vec3f_1);
    RUN_TEST(acosh_test_vec3f_2);

    RUN_TEST(acosh_test_vec4d_1);
    RUN_TEST(acosh_test_vec4d_2);

    RUN_TEST(acosh_test_vec4f_1);
    RUN_TEST(acosh_test_vec4f_2);

    return UNITY_END();
}
