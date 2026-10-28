#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/common/floor.h"
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"

static void floor_test_double_1() {
    const double value = floor(2.7);

    TEST_ASSERT_EQUAL_DOUBLE(2.0, value);
}

static void floor_test_double_2() {
    const double value = floor(-1.5);

    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value);
}

static void floor_test_float_1() {
    const float value = floor(2.7f);

    TEST_ASSERT_EQUAL_FLOAT(2.f, value);
}

static void floor_test_float_2() {
    const float value = floor(-1.5f);

    TEST_ASSERT_EQUAL_FLOAT(-2.f, value);
}

static void floor_test_vec2d_1() {
    const Vec2d value = floor(vec2d(1.5, -1.5));

    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.y);
}

static void floor_test_vec2d_2() {
    const Vec2d value = floor(vec2d(-2.25, 3.0));

    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.y);
}

static void floor_test_vec2f_1() {
    const Vec2f value = floor(vec2f(1.5f, -1.5f));

    TEST_ASSERT_EQUAL_FLOAT(1.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.y);
}

static void floor_test_vec2f_2() {
    const Vec2f value = floor(vec2f(-2.25f, 3.f));

    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.y);
}

static void floor_test_vec3d_1() {
    const Vec3d value = floor(vec3d(0.1, 1.9, -1.1));

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.z);
}

static void floor_test_vec3d_2() {
    const Vec3d value = floor(vec3d(-3.5, 2.0, 7.75));

    TEST_ASSERT_EQUAL_DOUBLE(-4.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(7.0, value.z);
}

static void floor_test_vec3f_1() {
    const Vec3f value = floor(vec3f(0.1f, 1.9f, -1.1f));

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.z);
}

static void floor_test_vec3f_2() {
    const Vec3f value = floor(vec3f(-3.5f, 2.f, 7.75f));

    TEST_ASSERT_EQUAL_FLOAT(-4.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(7.f, value.z);
}

static void floor_test_vec4d_1() {
    const Vec4d value = floor(vec4d(0.5, -0.5, 1.5, -1.5));

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(-1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.w);
}

static void floor_test_vec4d_2() {
    const Vec4d value = floor(vec4d(2.25, -2.25, 3.0, -3.0));

    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.w);
}

static void floor_test_vec4f_1() {
    const Vec4f value = floor(vec4f(0.5f, -0.5f, 1.5f, -1.5f));

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(-1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.w);
}

static void floor_test_vec4f_2() {
    const Vec4f value = floor(vec4f(2.25f, -2.25f, 3.f, -3.f));

    TEST_ASSERT_EQUAL_FLOAT(2.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(floor_test_double_1);
    RUN_TEST(floor_test_double_2);

    RUN_TEST(floor_test_float_1);
    RUN_TEST(floor_test_float_2);

    RUN_TEST(floor_test_vec2d_1);
    RUN_TEST(floor_test_vec2d_2);

    RUN_TEST(floor_test_vec2f_1);
    RUN_TEST(floor_test_vec2f_2);

    RUN_TEST(floor_test_vec3d_1);
    RUN_TEST(floor_test_vec3d_2);

    RUN_TEST(floor_test_vec3f_1);
    RUN_TEST(floor_test_vec3f_2);

    RUN_TEST(floor_test_vec4d_1);
    RUN_TEST(floor_test_vec4d_2);

    RUN_TEST(floor_test_vec4f_1);
    RUN_TEST(floor_test_vec4f_2);

    return UNITY_END();
}
