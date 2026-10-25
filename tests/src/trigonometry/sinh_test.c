#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/sinh.h"

static void sinh_test_scalard_1() {
    const double value = sinh(1.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.175201193643801, value);
}

static void sinh_test_scalard_2() {
    const double value = sinh(-0.5);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.521095305493747, value);
}

static void sinh_test_scalarf_1() {
    const float value = sinh(1.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.1752012f, value);
}

static void sinh_test_scalarf_2() {
    const float value = sinh(-0.5f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5210953f, value);
}

static void sinh_test_vec2d_1() {
    const Vec2d value = sinh(vec2d(0.5, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.521095305493747, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.175201193643801, value.y);
}

static void sinh_test_vec2d_2() {
    const Vec2d value = sinh(vec2d(-1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.175201193643801, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.626860407847019, value.y);
}

static void sinh_test_vec2f_1() {
    const Vec2f value = sinh(vec2f(0.5f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5210953f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.1752012f, value.y);
}

static void sinh_test_vec2f_2() {
    const Vec2f value = sinh(vec2f(-1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.1752012f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.6268604f, value.y);
}

static void sinh_test_vec3d_1() {
    const Vec3d value = sinh(vec3d(0.0, 0.5, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.521095305493747, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.175201193643801, value.z);
}

static void sinh_test_vec3d_2() {
    const Vec3d value = sinh(vec3d(-2.0, -0.5, 1.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.626860407847019, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.521095305493747, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.129279455094817, value.z);
}

static void sinh_test_vec3f_1() {
    const Vec3f value = sinh(vec3f(0.f, 0.5f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5210953f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.1752012f, value.z);
}

static void sinh_test_vec3f_2() {
    const Vec3f value = sinh(vec3f(-2.f, -0.5f, 1.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.6268604f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5210953f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.1292794f, value.z);
}

static void sinh_test_vec4d_1() {
    const Vec4d value = sinh(vec4d(0.0, 0.5, 1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.521095305493747, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.175201193643801, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.626860407847019, value.w);
}

static void sinh_test_vec4d_2() {
    const Vec4d value = sinh(vec4d(-1.0, -2.0, 0.5, 1.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.175201193643801, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.626860407847019, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.521095305493747, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.129279455094817, value.w);
}

static void sinh_test_vec4f_1() {
    const Vec4f value = sinh(vec4f(0.f, 0.5f, 1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5210953f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.1752012f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.6268604f, value.w);
}

static void sinh_test_vec4f_2() {
    const Vec4f value = sinh(vec4f(-1.f, -2.f, 0.5f, 1.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.1752012f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.6268604f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5210953f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.1292794f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(sinh_test_scalard_1);
    RUN_TEST(sinh_test_scalard_2);

    RUN_TEST(sinh_test_scalarf_1);
    RUN_TEST(sinh_test_scalarf_2);

    RUN_TEST(sinh_test_vec2d_1);
    RUN_TEST(sinh_test_vec2d_2);

    RUN_TEST(sinh_test_vec2f_1);
    RUN_TEST(sinh_test_vec2f_2);

    RUN_TEST(sinh_test_vec3d_1);
    RUN_TEST(sinh_test_vec3d_2);

    RUN_TEST(sinh_test_vec3f_1);
    RUN_TEST(sinh_test_vec3f_2);

    RUN_TEST(sinh_test_vec4d_1);
    RUN_TEST(sinh_test_vec4d_2);

    RUN_TEST(sinh_test_vec4f_1);
    RUN_TEST(sinh_test_vec4f_2);

    return UNITY_END();
}
