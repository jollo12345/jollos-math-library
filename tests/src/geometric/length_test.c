#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/geometric/length.h"

static void length_test_vec2d_1() {
    const double value = length(vec2d(3.0, 4.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value);
}

static void length_test_vec2d_2() {
    const double value = length(vec2d(-5.0, 12.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 13.0, value);
}

static void length_test_vec2f_1() {
    const float value = length(vec2f(3.f, 4.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value);
}

static void length_test_vec2f_2() {
    const float value = length(vec2f(-5.f, 12.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 13.f, value);
}

static void length_test_vec3d_1() {
    const double value = length(vec3d(2.0, 3.0, 6.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value);
}

static void length_test_vec3d_2() {
    const double value = length(vec3d(-1.0, 4.0, -8.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value);
}

static void length_test_vec3f_1() {
    const float value = length(vec3f(2.f, 3.f, 6.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.f, value);
}

static void length_test_vec3f_2() {
    const float value = length(vec3f(-1.f, 4.f, -8.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value);
}

static void length_test_vec4d_1() {
    const double value = length(vec4d(2.0, 2.0, 4.0, 5.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value);
}

static void length_test_vec4d_2() {
    const double value = length(vec4d(-1.0, 2.0, 4.0, -10.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 11.0, value);
}

static void length_test_vec4f_1() {
    const float value = length(vec4f(2.f, 2.f, 4.f, 5.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.f, value);
}

static void length_test_vec4f_2() {
    const float value = length(vec4f(-1.f, 2.f, 4.f, -10.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 11.f, value);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(length_test_vec2d_1);
    RUN_TEST(length_test_vec2d_2);

    RUN_TEST(length_test_vec2f_1);
    RUN_TEST(length_test_vec2f_2);

    RUN_TEST(length_test_vec3d_1);
    RUN_TEST(length_test_vec3d_2);

    RUN_TEST(length_test_vec3f_1);
    RUN_TEST(length_test_vec3f_2);

    RUN_TEST(length_test_vec4d_1);
    RUN_TEST(length_test_vec4d_2);

    RUN_TEST(length_test_vec4f_1);
    RUN_TEST(length_test_vec4f_2);

    return UNITY_END();
}