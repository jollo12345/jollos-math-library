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
#include "jml/trigonometry/acos.h"

static void acos_test_double_1() {
    const double value = acos(0.5);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 3.0, value);
}

static void acos_test_double_2() {
    const double value = acos(-0.5);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0 * JML_PI_D / 3.0, value);
}

static void acos_test_float_1() {
    const float value = acos(0.5f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 3.f, value);
}

static void acos_test_float_2() {
    const float value = acos(-0.5f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f * JML_PI_F / 3.f, value);
}

static void acos_test_vec2d_1() {
    const Vec2d value = acos(vec2d(1.0, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 3.0, value.y);
}

static void acos_test_vec2d_2() {
    const Vec2d value = acos(vec2d(-1.0, -0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0 * JML_PI_D / 3.0, value.y);
}

static void acos_test_vec2f_1() {
    const Vec2f value = acos(vec2f(1.f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 3.f, value.y);
}

static void acos_test_vec2f_2() {
    const Vec2f value = acos(vec2f(-1.f, -0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f * JML_PI_F / 3.f, value.y);
}

static void acos_test_vec3d_1() {
    const Vec3d value = acos(vec3d(1.0, 0.5, 0.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 3.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 2.0, value.z);
}

static void acos_test_vec3d_2() {
    const Vec3d value = acos(vec3d(0.8660254037844386, 0.7071067811865476, -0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 4.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0 * JML_PI_D / 3.0, value.z);
}

static void acos_test_vec3f_1() {
    const Vec3f value = acos(vec3f(1.f, 0.5f, 0.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 3.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 2.f, value.z);
}

static void acos_test_vec3f_2() {
    const Vec3f value = acos(vec3f(0.8660254f, 0.70710677f, -0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 4.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f * JML_PI_F / 3.f, value.z);
}

static void acos_test_vec4d_1() {
    const Vec4d value = acos(vec4d(1.0, 0.5, -0.5, -1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 3.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0 * JML_PI_D / 3.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D, value.w);
}

static void acos_test_vec4d_2() {
    const Vec4d value = acos(vec4d(0.8660254037844386, 0.7071067811865476, 0.0, -0.8660254037844386));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 6.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 4.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, JML_PI_D / 2.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0 * JML_PI_D / 6.0, value.w);
}

static void acos_test_vec4f_1() {
    const Vec4f value = acos(vec4f(1.f, 0.5f, -0.5f, -1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 3.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f * JML_PI_F / 3.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F, value.w);
}

static void acos_test_vec4f_2() {
    const Vec4f value = acos(vec4f(0.8660254f, 0.70710677f, 0.f, -0.8660254f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 6.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 4.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, JML_PI_F / 2.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f * JML_PI_F / 6.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(acos_test_double_1);
    RUN_TEST(acos_test_double_2);

    RUN_TEST(acos_test_float_1);
    RUN_TEST(acos_test_float_2);

    RUN_TEST(acos_test_vec2d_1);
    RUN_TEST(acos_test_vec2d_2);

    RUN_TEST(acos_test_vec2f_1);
    RUN_TEST(acos_test_vec2f_2);

    RUN_TEST(acos_test_vec3d_1);
    RUN_TEST(acos_test_vec3d_2);

    RUN_TEST(acos_test_vec3f_1);
    RUN_TEST(acos_test_vec3f_2);

    RUN_TEST(acos_test_vec4d_1);
    RUN_TEST(acos_test_vec4d_2);

    RUN_TEST(acos_test_vec4f_1);
    RUN_TEST(acos_test_vec4f_2);

    return UNITY_END();
}