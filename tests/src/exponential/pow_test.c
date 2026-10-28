#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/exponential/pow.h"

static void pow_test_double_1() {
    const double value = pow(2.0, 3.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value);
}

static void pow_test_double_2() {
    const double value = pow(3.0, 1.5);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.196152422706632, value);
}

static void pow_test_float_1() {
    const float value = pow(2.f, 3.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value);
}

static void pow_test_float_2() {
    const float value = pow(3.f, 1.5f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.196152f, value);
}

static void pow_test_vec2d_1() {
    const Vec2d value = pow(
        vec2d(2.0, 3.0),
        vec2d(3.0, 2.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.y);
}

static void pow_test_vec2d_2() {
    const Vec2d value = pow(
        vec2d(4.0, 2.5),
        vec2d(0.5, 2.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.25, value.y);
}

static void pow_test_vec2f_1() {
    const Vec2f value = pow(
        vec2f(2.f, 3.f),
        vec2f(3.f, 2.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.y);
}

static void pow_test_vec2f_2() {
    const Vec2f value = pow(
        vec2f(4.f, 2.5f),
        vec2f(0.5f, 2.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.25f, value.y);
}

static void pow_test_vec3d_1() {
    const Vec3d value = pow(
        vec3d(2.0, 3.0, 4.0),
        vec3d(3.0, 2.0, 0.5)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.z);
}

static void pow_test_vec3d_2() {
    const Vec3d value = pow(
        vec3d(10.0, 0.5, 9.0),
        vec3d(2.0, 3.0, -0.5)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 100.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.125, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.333333333333333, value.z);
}

static void pow_test_vec3f_1() {
    const Vec3f value = pow(
        vec3f(2.f, 3.f, 4.f),
        vec3f(3.f, 2.f, 0.5f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.z);
}

static void pow_test_vec3f_2() {
    const Vec3f value = pow(
        vec3f(10.f, 0.5f, 9.f),
        vec3f(2.f, 3.f, -0.5f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 100.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.125f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.33333334f, value.z);
}

static void pow_test_vec4d_1() {
    const Vec4d value = pow(
        vec4d(2.0, 3.0, 4.0, 5.0),
        vec4d(3.0, 2.0, 0.5, 0.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.w);
}

static void pow_test_vec4d_2() {
    const Vec4d value = pow(
        vec4d(10.0, 0.5, 2.0, 3.0),
        vec4d(2.0, 3.0, -1.0, 1.5)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 100.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.125, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.196152422706632, value.w);
}

static void pow_test_vec4f_1() {
    const Vec4f value = pow(
        vec4f(2.f, 3.f, 4.f, 5.f),
        vec4f(3.f, 2.f, 0.5f, 0.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.w);
}

static void pow_test_vec4f_2() {
    const Vec4f value = pow(
        vec4f(10.f, 0.5f, 2.f, 3.f),
        vec4f(2.f, 3.f, -1.f, 1.5f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 100.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.125f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.196152f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(pow_test_double_1);
    RUN_TEST(pow_test_double_2);

    RUN_TEST(pow_test_float_1);
    RUN_TEST(pow_test_float_2);

    RUN_TEST(pow_test_vec2d_1);
    RUN_TEST(pow_test_vec2d_2);

    RUN_TEST(pow_test_vec2f_1);
    RUN_TEST(pow_test_vec2f_2);

    RUN_TEST(pow_test_vec3d_1);
    RUN_TEST(pow_test_vec3d_2);

    RUN_TEST(pow_test_vec3f_1);
    RUN_TEST(pow_test_vec3f_2);

    RUN_TEST(pow_test_vec4d_1);
    RUN_TEST(pow_test_vec4d_2);

    RUN_TEST(pow_test_vec4f_1);
    RUN_TEST(pow_test_vec4f_2);

    return UNITY_END();
}