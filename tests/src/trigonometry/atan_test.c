#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/common/pi.h"
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/atan.h"

static void atan_test_double_1() {
    const double value = atan(1.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 4.0, value);
}

static void atan_test_double_2() {
    const double value = atan(-1.7320508075688772);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -JML_PI_D / 3.0, value);
}

static void atan_test_float_1() {
    const float value = atan(1.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 4.f, value);
}

static void atan_test_float_2() {
    const float value = atan(-1.7320508f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -JML_PI_F / 3.f, value);
}

static void atan_test_vec2d_1() {
    const Vec2d value = atan(vec2d(0.0, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 4.0, value.y);
}

static void atan_test_vec2d_2() {
    const Vec2d value = atan(vec2d(0.5773502691896257, -1.7320508075688772));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -JML_PI_D / 3.0, value.y);
}

static void atan_test_vec2f_1() {
    const Vec2f value = atan(vec2f(0.f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 4.f, value.y);
}

static void atan_test_vec2f_2() {
    const Vec2f value = atan(vec2f(0.57735026f, -1.7320508f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -JML_PI_F / 3.f, value.y);
}

static void atan_test_vec3d_1() {
    const Vec3d value = atan(vec3d(0.0, 1.0, 1.7320508075688772));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 4.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 3.0, value.z);
}

static void atan_test_vec3d_2() {
    const Vec3d value = atan(vec3d(-1.0, 0.5773502691896257, -1.7320508075688772));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -JML_PI_D / 4.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 6.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -JML_PI_D / 3.0, value.z);
}

static void atan_test_vec3f_1() {
    const Vec3f value = atan(vec3f(0.f, 1.f, 1.7320508f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 4.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 3.f, value.z);
}

static void atan_test_vec3f_2() {
    const Vec3f value = atan(vec3f(-1.f, 0.57735026f, -1.7320508f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -JML_PI_F / 4.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 6.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -JML_PI_F / 3.f, value.z);
}

static void atan_test_vec4d_1() {
    const Vec4d value = atan(vec4d(0.0, 0.5773502691896257, 1.0, 1.7320508075688772));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 6.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 4.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 3.0, value.w);
}

static void atan_test_vec4d_2() {
    const Vec4d value = atan(vec4d(-0.5773502691896257, -1.0, -1.7320508075688772, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -JML_PI_D / 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -JML_PI_D / 4.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -JML_PI_D / 3.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 4.0, value.w);
}

static void atan_test_vec4f_1() {
    const Vec4f value = atan(vec4f(0.f, 0.57735026f, 1.f, 1.7320508f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 6.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 4.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 3.f, value.w);
}

static void atan_test_vec4f_2() {
    const Vec4f value = atan(vec4f(-0.57735026f, -1.f, -1.7320508f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -JML_PI_F / 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -JML_PI_F / 4.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -JML_PI_F / 3.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 4.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(atan_test_double_1);
    RUN_TEST(atan_test_double_2);

    RUN_TEST(atan_test_float_1);
    RUN_TEST(atan_test_float_2);

    RUN_TEST(atan_test_vec2d_1);
    RUN_TEST(atan_test_vec2d_2);

    RUN_TEST(atan_test_vec2f_1);
    RUN_TEST(atan_test_vec2f_2);

    RUN_TEST(atan_test_vec3d_1);
    RUN_TEST(atan_test_vec3d_2);

    RUN_TEST(atan_test_vec3f_1);
    RUN_TEST(atan_test_vec3f_2);

    RUN_TEST(atan_test_vec4d_1);
    RUN_TEST(atan_test_vec4d_2);

    RUN_TEST(atan_test_vec4f_1);
    RUN_TEST(atan_test_vec4f_2);

    return UNITY_END();
}