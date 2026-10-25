#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/degrees.h"

static void degrees_test_scalard_1() {
    const double value = degrees(3.141592653589793);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 180.0, value);
}

static void degrees_test_scalard_2() {
    const double value = degrees(-1.5707963267948966);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -90.0, value);
}

static void degrees_test_scalarf_1() {
    const float value = degrees(3.1415927f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 180.f, value);
}

static void degrees_test_scalarf_2() {
    const float value = degrees(-1.5707964f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -90.f, value);
}

static void degrees_test_vec2d_1() {
    const Vec2d value = degrees(vec2d(3.141592653589793, -1.5707963267948966));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 180.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -90.0, value.y);
}

static void degrees_test_vec2d_2() {
    const Vec2d value = degrees(vec2d(0.7853981633974483, 4.71238898038469));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 45.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 270.0, value.y);
}

static void degrees_test_vec2f_1() {
    const Vec2f value = degrees(vec2f(3.1415927f, -1.5707964f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 180.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -90.f, value.y);
}

static void degrees_test_vec2f_2() {
    const Vec2f value = degrees(vec2f(0.7853982f, 4.712389f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 45.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 270.f, value.y);
}

static void degrees_test_vec3d_1() {
    const Vec3d value = degrees(vec3d(0.5235987755982988, 0.7853981633974483, 1.0471975511965976));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 30.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 45.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 60.0, value.z);
}

static void degrees_test_vec3d_2() {
    const Vec3d value = degrees(vec3d(-3.141592653589793, 1.5707963267948966, 0.017453292519943295));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -180.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 90.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.z);
}

static void degrees_test_vec3f_1() {
    const Vec3f value = degrees(vec3f(0.5235988f, 0.7853982f, 1.0471976f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 30.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 45.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 60.f, value.z);
}

static void degrees_test_vec3f_2() {
    const Vec3f value = degrees(vec3f(-3.1415927f, 1.5707964f, 0.017453292f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -180.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 90.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.z);
}

static void degrees_test_vec4d_1() {
    const Vec4d value = degrees(vec4d(-6.283185307179586, 1.5707963267948966, 3.141592653589793, 4.71238898038469));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -360.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 90.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 180.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 270.0, value.w);
}

static void degrees_test_vec4d_2() {
    const Vec4d value = degrees(vec4d(0.017453292519943295, -0.017453292519943295, 0.17453292519943295, -0.17453292519943295));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -10.0, value.w);
}

static void degrees_test_vec4f_1() {
    const Vec4f value = degrees(vec4f(-6.2831855f, 1.5707964f, 3.1415927f, 4.712389f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -360.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 90.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 180.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 270.f, value.w);
}

static void degrees_test_vec4f_2() {
    const Vec4f value = degrees(vec4f(0.017453292f, -0.017453292f, 0.17453292f, -0.17453292f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -10.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(degrees_test_scalard_1);
    RUN_TEST(degrees_test_scalard_2);

    RUN_TEST(degrees_test_scalarf_1);
    RUN_TEST(degrees_test_scalarf_2);

    RUN_TEST(degrees_test_vec2d_1);
    RUN_TEST(degrees_test_vec2d_2);

    RUN_TEST(degrees_test_vec2f_1);
    RUN_TEST(degrees_test_vec2f_2);

    RUN_TEST(degrees_test_vec3d_1);
    RUN_TEST(degrees_test_vec3d_2);

    RUN_TEST(degrees_test_vec3f_1);
    RUN_TEST(degrees_test_vec3f_2);

    RUN_TEST(degrees_test_vec4d_1);
    RUN_TEST(degrees_test_vec4d_2);

    RUN_TEST(degrees_test_vec4f_1);
    RUN_TEST(degrees_test_vec4f_2);

    return UNITY_END();
}