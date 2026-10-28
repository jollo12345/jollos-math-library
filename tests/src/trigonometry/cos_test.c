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
#include "jml/trigonometry/cos.h"

static void cos_test_double_1() {
    const double value = cos(JML_PI_D / 3.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value);
}

static void cos_test_double_2() {
    const double value = cos(2.0 * JML_PI_D / 3.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.5, value);
}

static void cos_test_float_1() {
    const float value = cos(JML_PI_F / 3.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value);
}

static void cos_test_float_2() {
    const float value = cos(2.f * JML_PI_F / 3.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5f, value);
}

static void cos_test_vec2d_1() {
    const Vec2d value = cos(vec2d(0.0, JML_PI_D / 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.y);
}

static void cos_test_vec2d_2() {
    const Vec2d value = cos(vec2d(JML_PI_D, 2.0 * JML_PI_D / 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.5, value.y);
}

static void cos_test_vec2f_1() {
    const Vec2f value = cos(vec2f(0.f, JML_PI_F / 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.y);
}

static void cos_test_vec2f_2() {
    const Vec2f value = cos(vec2f(JML_PI_F, 2.f * JML_PI_F / 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5f, value.y);
}

static void cos_test_vec3d_1() {
    const Vec3d value = cos(vec3d(0.0, JML_PI_D / 3.0, JML_PI_D));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.z);
}

static void cos_test_vec3d_2() {
    const Vec3d value = cos(vec3d(JML_PI_D / 6.0, JML_PI_D / 4.0, 2.0 * JML_PI_D / 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.866025403784439, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.707106781186548, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.5, value.z);
}

static void cos_test_vec3f_1() {
    const Vec3f value = cos(vec3f(0.f, JML_PI_F / 3.f, JML_PI_F));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.z);
}

static void cos_test_vec3f_2() {
    const Vec3f value = cos(vec3f(JML_PI_F / 6.f, JML_PI_F / 4.f, 2.f * JML_PI_F / 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.8660254f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.70710677f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5f, value.z);
}

static void cos_test_vec4d_1() {
    const Vec4d value = cos(vec4d(0.0, JML_PI_D / 3.0, 2.0 * JML_PI_D / 3.0, JML_PI_D));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.5, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.w);
}

static void cos_test_vec4d_2() {
    const Vec4d value = cos(vec4d(JML_PI_D / 6.0, JML_PI_D / 4.0, -JML_PI_D / 3.0, 5.0 * JML_PI_D / 6.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.866025403784439, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.707106781186548, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.866025403784439, value.w);
}

static void cos_test_vec4f_1() {
    const Vec4f value = cos(vec4f(0.f, JML_PI_F / 3.f, 2.f * JML_PI_F / 3.f, JML_PI_F));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.w);
}

static void cos_test_vec4f_2() {
    const Vec4f value = cos(vec4f(JML_PI_F / 6.f, JML_PI_F / 4.f, -JML_PI_F / 3.f, 5.f * JML_PI_F / 6.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.8660254f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.70710677f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.8660254f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(cos_test_double_1);
    RUN_TEST(cos_test_double_2);

    RUN_TEST(cos_test_float_1);
    RUN_TEST(cos_test_float_2);

    RUN_TEST(cos_test_vec2d_1);
    RUN_TEST(cos_test_vec2d_2);

    RUN_TEST(cos_test_vec2f_1);
    RUN_TEST(cos_test_vec2f_2);

    RUN_TEST(cos_test_vec3d_1);
    RUN_TEST(cos_test_vec3d_2);

    RUN_TEST(cos_test_vec3f_1);
    RUN_TEST(cos_test_vec3f_2);

    RUN_TEST(cos_test_vec4d_1);
    RUN_TEST(cos_test_vec4d_2);

    RUN_TEST(cos_test_vec4f_1);
    RUN_TEST(cos_test_vec4f_2);

    return UNITY_END();
}