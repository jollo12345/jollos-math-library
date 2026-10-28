#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/exponential/exp2.h"

static void exp2_test_double_1() {
    const double value = exp2(3.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value);
}

static void exp2_test_double_2() {
    const double value = exp2(0.5);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.414213562373095, value);
}

static void exp2_test_float_1() {
    const float value = exp2(3.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value);
}

static void exp2_test_float_2() {
    const float value = exp2(0.5f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4142135f, value);
}

static void exp2_test_vec2d_1() {
    const Vec2d value = exp2(vec2d(0.0, 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.y);
}

static void exp2_test_vec2d_2() {
    const Vec2d value = exp2(vec2d(-1.0, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.414213562373095, value.y);
}

static void exp2_test_vec2f_1() {
    const Vec2f value = exp2(vec2f(0.f, 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.y);
}

static void exp2_test_vec2f_2() {
    const Vec2f value = exp2(vec2f(-1.f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4142135f, value.y);
}

static void exp2_test_vec3d_1() {
    const Vec3d value = exp2(vec3d(0.0, 1.0, 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.z);
}

static void exp2_test_vec3d_2() {
    const Vec3d value = exp2(vec3d(-2.0, 2.5, -0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.25, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.656854249492381, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.707106781186548, value.z);
}

static void exp2_test_vec3f_1() {
    const Vec3f value = exp2(vec3f(0.f, 1.f, 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.z);
}

static void exp2_test_vec3f_2() {
    const Vec3f value = exp2(vec3f(-2.f, 2.5f, -0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.25f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.656854f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.70710677f, value.z);
}

static void exp2_test_vec4d_1() {
    const Vec4d value = exp2(vec4d(0.0, 1.0, 3.0, -1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.w);
}

static void exp2_test_vec4d_2() {
    const Vec4d value = exp2(vec4d(0.5, 2.5, -3.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.414213562373095, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.656854249492381, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.125, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.w);
}

static void exp2_test_vec4f_1() {
    const Vec4f value = exp2(vec4f(0.f, 1.f, 3.f, -1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.w);
}

static void exp2_test_vec4f_2() {
    const Vec4f value = exp2(vec4f(0.5f, 2.5f, -3.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4142135f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.656854f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.125f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(exp2_test_double_1);
    RUN_TEST(exp2_test_double_2);

    RUN_TEST(exp2_test_float_1);
    RUN_TEST(exp2_test_float_2);

    RUN_TEST(exp2_test_vec2d_1);
    RUN_TEST(exp2_test_vec2d_2);

    RUN_TEST(exp2_test_vec2f_1);
    RUN_TEST(exp2_test_vec2f_2);

    RUN_TEST(exp2_test_vec3d_1);
    RUN_TEST(exp2_test_vec3d_2);

    RUN_TEST(exp2_test_vec3f_1);
    RUN_TEST(exp2_test_vec3f_2);

    RUN_TEST(exp2_test_vec4d_1);
    RUN_TEST(exp2_test_vec4d_2);

    RUN_TEST(exp2_test_vec4f_1);
    RUN_TEST(exp2_test_vec4f_2);

    return UNITY_END();
}