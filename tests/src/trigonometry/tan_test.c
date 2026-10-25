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
#include "jml/trigonometry/tan.h"

static void tan_test_scalard_1() {
    const double value = tan(JML_PI_D / 4.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value);
}

static void tan_test_scalard_2() {
    const double value = tan(-JML_PI_D / 3.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.732050807568877, value);
}

static void tan_test_scalarf_1() {
    const float value = tan(JML_PI_F / 4.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value);
}

static void tan_test_scalarf_2() {
    const float value = tan(-JML_PI_F / 3.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.7320508f, value);
}

static void tan_test_vec2d_1() {
    const Vec2d value = tan(vec2d(0.0, JML_PI_D / 4.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
}

static void tan_test_vec2d_2() {
    const Vec2d value = tan(vec2d(JML_PI_D / 6.0, -JML_PI_D / 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.577350269189626, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.732050807568877, value.y);
}

static void tan_test_vec2f_1() {
    const Vec2f value = tan(vec2f(0.f, JML_PI_F / 4.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
}

static void tan_test_vec2f_2() {
    const Vec2f value = tan(vec2f(JML_PI_F / 6.f, -JML_PI_F / 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.57735026f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.7320508f, value.y);
}

static void tan_test_vec3d_1() {
    const Vec3d value = tan(vec3d(0.0, JML_PI_D / 4.0, JML_PI_D / 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.732050807568877, value.z);
}

static void tan_test_vec3d_2() {
    const Vec3d value = tan(vec3d(-JML_PI_D / 4.0, JML_PI_D / 6.0, -JML_PI_D / 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.577350269189626, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.732050807568877, value.z);
}

static void tan_test_vec3f_1() {
    const Vec3f value = tan(vec3f(0.f, JML_PI_F / 4.f, JML_PI_F / 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.7320508f, value.z);
}

static void tan_test_vec3f_2() {
    const Vec3f value = tan(vec3f(-JML_PI_F / 4.f, JML_PI_F / 6.f, -JML_PI_F / 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.57735026f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.7320508f, value.z);
}

static void tan_test_vec4d_1() {
    const Vec4d value = tan(vec4d(0.0, JML_PI_D / 6.0, JML_PI_D / 4.0, JML_PI_D / 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.577350269189626, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.732050807568877, value.w);
}

static void tan_test_vec4d_2() {
    const Vec4d value = tan(vec4d(-JML_PI_D / 6.0, -JML_PI_D / 4.0, -JML_PI_D / 3.0, JML_PI_D / 6.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.577350269189626, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.732050807568877, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.577350269189626, value.w);
}

static void tan_test_vec4f_1() {
    const Vec4f value = tan(vec4f(0.f, JML_PI_F / 6.f, JML_PI_F / 4.f, JML_PI_F / 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.57735026f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.7320508f, value.w);
}

static void tan_test_vec4f_2() {
    const Vec4f value = tan(vec4f(-JML_PI_F / 6.f, -JML_PI_F / 4.f, -JML_PI_F / 3.f, JML_PI_F / 6.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.57735026f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.7320508f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.57735026f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(tan_test_scalard_1);
    RUN_TEST(tan_test_scalard_2);

    RUN_TEST(tan_test_scalarf_1);
    RUN_TEST(tan_test_scalarf_2);

    RUN_TEST(tan_test_vec2d_1);
    RUN_TEST(tan_test_vec2d_2);

    RUN_TEST(tan_test_vec2f_1);
    RUN_TEST(tan_test_vec2f_2);

    RUN_TEST(tan_test_vec3d_1);
    RUN_TEST(tan_test_vec3d_2);

    RUN_TEST(tan_test_vec3f_1);
    RUN_TEST(tan_test_vec3f_2);

    RUN_TEST(tan_test_vec4d_1);
    RUN_TEST(tan_test_vec4d_2);

    RUN_TEST(tan_test_vec4f_1);
    RUN_TEST(tan_test_vec4f_2);

    return UNITY_END();
}