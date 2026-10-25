#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/geometric/distance.h"

static void distance_test_vec2d_1() {
    const double value = distance(
        vec2d(1.0, 2.0),
        vec2d(4.0, 6.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(5.0, value);
}

static void distance_test_vec2d_2() {
    const double value = distance(
        vec2d(-1.0, -2.0),
        vec2d(5.0, 6.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(10.0, value);
}

static void distance_test_vec2f_1() {
    const float value = distance(
        vec2f(1.f, 2.f),
        vec2f(4.f, 6.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(5.f, value);
}

static void distance_test_vec2f_2() {
    const float value = distance(
        vec2f(-1.f, -2.f),
        vec2f(5.f, 6.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(10.f, value);
}

static void distance_test_vec3d_1() {
    const double value = distance(
        vec3d(1.0, 2.0, 3.0),
        vec3d(3.0, 5.0, 9.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(7.0, value);
}

static void distance_test_vec3d_2() {
    const double value = distance(
        vec3d(-1.0, 2.0, -3.0),
        vec3d(0.0, 6.0, 5.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(9.0, value);
}

static void distance_test_vec3f_1() {
    const float value = distance(
        vec3f(1.f, 2.f, 3.f),
        vec3f(3.f, 5.f, 9.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(7.f, value);
}

static void distance_test_vec3f_2() {
    const float value = distance(
        vec3f(-1.f, 2.f, -3.f),
        vec3f(0.f, 6.f, 5.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(9.f, value);
}

static void distance_test_vec4d_1() {
    const double value = distance(
        vec4d(1.0, 2.0, 3.0, 4.0),
        vec4d(3.0, 4.0, 7.0, 9.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(7.0, value);
}

static void distance_test_vec4d_2() {
    const double value = distance(
        vec4d(-1.0, 0.0, 2.0, -3.0),
        vec4d(0.0, 2.0, 6.0, 7.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(11.0, value);
}

static void distance_test_vec4f_1() {
    const float value = distance(
        vec4f(1.f, 2.f, 3.f, 4.f),
        vec4f(3.f, 4.f, 7.f, 9.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(7.f, value);
}

static void distance_test_vec4f_2() {
    const float value = distance(
        vec4f(-1.f, 0.f, 2.f, -3.f),
        vec4f(0.f, 2.f, 6.f, 7.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(11.f, value);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(distance_test_vec2d_1);
    RUN_TEST(distance_test_vec2d_2);

    RUN_TEST(distance_test_vec2f_1);
    RUN_TEST(distance_test_vec2f_2);

    RUN_TEST(distance_test_vec3d_1);
    RUN_TEST(distance_test_vec3d_2);

    RUN_TEST(distance_test_vec3f_1);
    RUN_TEST(distance_test_vec3f_2);

    RUN_TEST(distance_test_vec4d_1);
    RUN_TEST(distance_test_vec4d_2);

    RUN_TEST(distance_test_vec4f_1);
    RUN_TEST(distance_test_vec4f_2);

    return UNITY_END();
}