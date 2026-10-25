#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/geometric/dot.h"

static void dot_test_vec2d_1() {
    const double value = dot(
        vec2d(1.0, 2.0),
        vec2d(3.0, 4.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value);
}

static void dot_test_vec2d_2() {
    const double value = dot(
        vec2d(-2.0, 3.0),
        vec2d(5.0, -4.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(-22.0, value);
}

static void dot_test_vec2f_1() {
    const float value = dot(
        vec2f(1.f, 2.f),
        vec2f(3.f, 4.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(11.f, value);
}

static void dot_test_vec2f_2() {
    const float value = dot(
        vec2f(-2.f, 3.f),
        vec2f(5.f, -4.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(-22.f, value);
}

static void dot_test_vec3d_1() {
    const double value = dot(
        vec3d(1.0, 2.0, 3.0),
        vec3d(4.0, 5.0, 6.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(32.0, value);
}

static void dot_test_vec3d_2() {
    const double value = dot(
        vec3d(2.0, -3.0, 5.0),
        vec3d(7.0, 11.0, -13.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(-84.0, value);
}

static void dot_test_vec3f_1() {
    const float value = dot(
        vec3f(1.f, 2.f, 3.f),
        vec3f(4.f, 5.f, 6.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(32.f, value);
}

static void dot_test_vec3f_2() {
    const float value = dot(
        vec3f(2.f, -3.f, 5.f),
        vec3f(7.f, 11.f, -13.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(-84.f, value);
}

static void dot_test_vec4d_1() {
    const double value = dot(
        vec4d(1.0, 2.0, 3.0, 4.0),
        vec4d(5.0, 6.0, 7.0, 8.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(70.0, value);
}

static void dot_test_vec4d_2() {
    const double value = dot(
        vec4d(-1.0, 2.0, -3.0, 4.0),
        vec4d(2.0, -5.0, 7.0, 11.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value);
}

static void dot_test_vec4f_1() {
    const float value = dot(
        vec4f(1.f, 2.f, 3.f, 4.f),
        vec4f(5.f, 6.f, 7.f, 8.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(70.f, value);
}

static void dot_test_vec4f_2() {
    const float value = dot(
        vec4f(-1.f, 2.f, -3.f, 4.f),
        vec4f(2.f, -5.f, 7.f, 11.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(11.f, value);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(dot_test_vec2d_1);
    RUN_TEST(dot_test_vec2d_2);

    RUN_TEST(dot_test_vec2f_1);
    RUN_TEST(dot_test_vec2f_2);

    RUN_TEST(dot_test_vec3d_1);
    RUN_TEST(dot_test_vec3d_2);

    RUN_TEST(dot_test_vec3f_1);
    RUN_TEST(dot_test_vec3f_2);

    RUN_TEST(dot_test_vec4d_1);
    RUN_TEST(dot_test_vec4d_2);

    RUN_TEST(dot_test_vec4f_1);
    RUN_TEST(dot_test_vec4f_2);

    return UNITY_END();
}