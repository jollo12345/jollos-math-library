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
#include "jml/trigonometry/sin.h"

static void sin_test_d_1() {
    const double value = sin(JML_PI_D / 6.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value);
}

static void sin_test_d_2() {
    const double value = sin(-JML_PI_D / 3.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.866025403784439, value);
}

static void sin_test_f_1() {
    const float value = sin(JML_PI_F / 6.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value);
}

static void sin_test_f_2() {
    const float value = sin(-JML_PI_F / 3.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.8660254f, value);
}

static void sin_test_vec2d_1() {
    const Vec2d value = sin(vec2d(JML_PI_D / 6.0, JML_PI_D / 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
}

static void sin_test_vec2d_2() {
    const Vec2d value = sin(vec2d(-JML_PI_D / 6.0, 3.0 * JML_PI_D / 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.5, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.y);
}

static void sin_test_vec2f_1() {
    const Vec2f value = sin(vec2f(JML_PI_F / 6.f, JML_PI_F / 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
}

static void sin_test_vec2f_2() {
    const Vec2f value = sin(vec2f(-JML_PI_F / 6.f, 3.f * JML_PI_F / 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.y);
}

static void sin_test_vec3d_1() {
    const Vec3d value = sin(vec3d(0.0, JML_PI_D / 6.0, JML_PI_D / 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.z);
}

static void sin_test_vec3d_2() {
    const Vec3d value = sin(vec3d(-JML_PI_D / 2.0, -JML_PI_D / 6.0, JML_PI_D / 6.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.5, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.z);
}

static void sin_test_vec3f_1() {
    const Vec3f value = sin(vec3f(0.f, JML_PI_F / 6.f, JML_PI_F / 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.z);
}

static void sin_test_vec3f_2() {
    const Vec3f value = sin(vec3f(-JML_PI_F / 2.f, -JML_PI_F / 6.f, JML_PI_F / 6.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.z);
}

static void sin_test_vec4d_1() {
    const Vec4d value = sin(vec4d(0.0, JML_PI_D / 6.0, JML_PI_D / 2.0, 3.0 * JML_PI_D / 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.w);
}

static void sin_test_vec4d_2() {
    const Vec4d value = sin(vec4d(JML_PI_D / 4.0, -JML_PI_D / 4.0, JML_PI_D / 3.0, -JML_PI_D / 6.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.707106781186547, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.707106781186547, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.866025403784439, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.5, value.w);
}

static void sin_test_vec4f_1() {
    const Vec4f value = sin(vec4f(0.f, JML_PI_F / 6.f, JML_PI_F / 2.f, 3.f * JML_PI_F / 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.w);
}

static void sin_test_vec4f_2() {
    const Vec4f value = sin(vec4f(JML_PI_F / 4.f, -JML_PI_F / 4.f, JML_PI_F / 3.f, -JML_PI_F / 6.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.70710677f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.70710677f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.8660254f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(sin_test_d_1);
    RUN_TEST(sin_test_d_2);

    RUN_TEST(sin_test_f_1);
    RUN_TEST(sin_test_f_2);

    RUN_TEST(sin_test_vec2d_1);
    RUN_TEST(sin_test_vec2d_2);

    RUN_TEST(sin_test_vec2f_1);
    RUN_TEST(sin_test_vec2f_2);

    RUN_TEST(sin_test_vec3d_1);
    RUN_TEST(sin_test_vec3d_2);

    RUN_TEST(sin_test_vec3f_1);
    RUN_TEST(sin_test_vec3f_2);

    RUN_TEST(sin_test_vec4d_1);
    RUN_TEST(sin_test_vec4d_2);

    RUN_TEST(sin_test_vec4f_1);
    RUN_TEST(sin_test_vec4f_2);

    return UNITY_END();
}