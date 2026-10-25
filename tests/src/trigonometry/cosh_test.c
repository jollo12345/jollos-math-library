#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/cosh.h"

static void cosh_test_scalard_1() {
    const double value = cosh(1.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.543080634815244, value);
}

static void cosh_test_scalard_2() {
    const double value = cosh(-2.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.762195691083631, value);
}

static void cosh_test_scalarf_1() {
    const float value = cosh(1.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5430807f, value);
}

static void cosh_test_scalarf_2() {
    const float value = cosh(-2.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.7621956f, value);
}

static void cosh_test_vec2d_1() {
    const Vec2d value = cosh(vec2d(0.0, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.543080634815244, value.y);
}

static void cosh_test_vec2d_2() {
    const Vec2d value = cosh(vec2d(-0.5, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.127625965206381, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.762195691083631, value.y);
}

static void cosh_test_vec2f_1() {
    const Vec2f value = cosh(vec2f(0.f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5430807f, value.y);
}

static void cosh_test_vec2f_2() {
    const Vec2f value = cosh(vec2f(-0.5f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.127626f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.7621956f, value.y);
}

static void cosh_test_vec3d_1() {
    const Vec3d value = cosh(vec3d(0.0, 0.5, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.127625965206381, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.543080634815244, value.z);
}

static void cosh_test_vec3d_2() {
    const Vec3d value = cosh(vec3d(-1.0, 1.5, -2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.543080634815244, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.352409615243247, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.762195691083631, value.z);
}

static void cosh_test_vec3f_1() {
    const Vec3f value = cosh(vec3f(0.f, 0.5f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.127626f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5430807f, value.z);
}

static void cosh_test_vec3f_2() {
    const Vec3f value = cosh(vec3f(-1.f, 1.5f, -2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5430807f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.3524096f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.7621956f, value.z);
}

static void cosh_test_vec4d_1() {
    const Vec4d value = cosh(vec4d(0.0, 0.5, 1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.127625965206381, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.543080634815244, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.762195691083631, value.w);
}

static void cosh_test_vec4d_2() {
    const Vec4d value = cosh(vec4d(-1.5, 1.0, -0.5, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.352409615243247, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.543080634815244, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.127625965206381, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.762195691083631, value.w);
}

static void cosh_test_vec4f_1() {
    const Vec4f value = cosh(vec4f(0.f, 0.5f, 1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.127626f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5430807f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.7621956f, value.w);
}

static void cosh_test_vec4f_2() {
    const Vec4f value = cosh(vec4f(-1.5f, 1.f, -0.5f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.3524096f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.5430807f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.127626f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.7621956f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(cosh_test_scalard_1);
    RUN_TEST(cosh_test_scalard_2);

    RUN_TEST(cosh_test_scalarf_1);
    RUN_TEST(cosh_test_scalarf_2);

    RUN_TEST(cosh_test_vec2d_1);
    RUN_TEST(cosh_test_vec2d_2);

    RUN_TEST(cosh_test_vec2f_1);
    RUN_TEST(cosh_test_vec2f_2);

    RUN_TEST(cosh_test_vec3d_1);
    RUN_TEST(cosh_test_vec3d_2);

    RUN_TEST(cosh_test_vec3f_1);
    RUN_TEST(cosh_test_vec3f_2);

    RUN_TEST(cosh_test_vec4d_1);
    RUN_TEST(cosh_test_vec4d_2);

    RUN_TEST(cosh_test_vec4f_1);
    RUN_TEST(cosh_test_vec4f_2);

    return UNITY_END();
}
