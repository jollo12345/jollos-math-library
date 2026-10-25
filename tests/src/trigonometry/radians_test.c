#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/radians.h"

static void radians_test_scalard_1() {
    const double value = radians(180.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.141592653589793, value);
}

static void radians_test_scalard_2() {
    const double value = radians(-90.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.5707963267948966, value);
}

static void radians_test_scalarf_1() {
    const float value = radians(180.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.1415927f, value);
}

static void radians_test_scalarf_2() {
    const float value = radians(-90.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.5707964f, value);
}

static void radians_test_vec2d_1() {
    const Vec2d value = radians(vec2d(180.0, -90.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.141592653589793, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.5707963267948966, value.y);
}

static void radians_test_vec2d_2() {
    const Vec2d value = radians(vec2d(45.0, 270.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.7853981633974483, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.71238898038469, value.y);
}

static void radians_test_vec2f_1() {
    const Vec2f value = radians(vec2f(180.f, -90.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.1415927f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.5707964f, value.y);
}

static void radians_test_vec2f_2() {
    const Vec2f value = radians(vec2f(45.f, 270.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.7853982f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.712389f, value.y);
}

static void radians_test_vec3d_1() {
    const Vec3d value = radians(vec3d(30.0, 45.0, 60.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5235987755982988, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.7853981633974483, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0471975511965976, value.z);
}

static void radians_test_vec3d_2() {
    const Vec3d value = radians(vec3d(-180.0, 90.0, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.141592653589793, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.5707963267948966, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.017453292519943295, value.z);
}

static void radians_test_vec3f_1() {
    const Vec3f value = radians(vec3f(30.f, 45.f, 60.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5235988f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.7853982f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.0471976f, value.z);
}

static void radians_test_vec3f_2() {
    const Vec3f value = radians(vec3f(-180.f, 90.f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.1415927f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5707964f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.017453292f, value.z);
}

static void radians_test_vec4d_1() {
    const Vec4d value = radians(vec4d(-360.0, 90.0, 180.0, 270.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -6.283185307179586, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.5707963267948966, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.141592653589793, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.71238898038469, value.w);
}

static void radians_test_vec4d_2() {
    const Vec4d value = radians(vec4d(1.0, -1.0, 10.0, -10.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.017453292519943295, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.017453292519943295, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.17453292519943295, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.17453292519943295, value.w);
}

static void radians_test_vec4f_1() {
    const Vec4f value = radians(vec4f(-360.f, 90.f, 180.f, 270.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -6.2831855f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5707964f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.1415927f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.712389f, value.w);
}

static void radians_test_vec4f_2() {
    const Vec4f value = radians(vec4f(1.f, -1.f, 10.f, -10.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.017453292f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.017453292f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.17453292f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.17453292f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(radians_test_scalard_1);
    RUN_TEST(radians_test_scalard_2);

    RUN_TEST(radians_test_scalarf_1);
    RUN_TEST(radians_test_scalarf_2);

    RUN_TEST(radians_test_vec2d_1);
    RUN_TEST(radians_test_vec2d_2);

    RUN_TEST(radians_test_vec2f_1);
    RUN_TEST(radians_test_vec2f_2);

    RUN_TEST(radians_test_vec3d_1);
    RUN_TEST(radians_test_vec3d_2);

    RUN_TEST(radians_test_vec3f_1);
    RUN_TEST(radians_test_vec3f_2);

    RUN_TEST(radians_test_vec4d_1);
    RUN_TEST(radians_test_vec4d_2);

    RUN_TEST(radians_test_vec4f_1);
    RUN_TEST(radians_test_vec4f_2);

    return UNITY_END();
}