#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/atanh.h"

static void atanh_test_scalard_1() {
    const double value = atanh(0.5);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.549306144334055, value);
}

static void atanh_test_scalard_2() {
    const double value = atanh(-0.9);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.47221948958322, value);
}

static void atanh_test_scalarf_1() {
    const float value = atanh(0.5f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.54930615f, value);
}

static void atanh_test_scalarf_2() {
    const float value = atanh(-0.9f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.4722193f, value);
}

static void atanh_test_vec2d_1() {
    const Vec2d value = atanh(vec2d(0.0, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.549306144334055, value.y);
}

static void atanh_test_vec2d_2() {
    const Vec2d value = atanh(vec2d(-0.5, 0.9));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.549306144334055, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.47221948958322, value.y);
}

static void atanh_test_vec2f_1() {
    const Vec2f value = atanh(vec2f(0.f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.54930615f, value.y);
}

static void atanh_test_vec2f_2() {
    const Vec2f value = atanh(vec2f(-0.5f, 0.9f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.54930615f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4722193f, value.y);
}

static void atanh_test_vec3d_1() {
    const Vec3d value = atanh(vec3d(0.0, 0.25, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.255412811882995, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.549306144334055, value.z);
}

static void atanh_test_vec3d_2() {
    const Vec3d value = atanh(vec3d(-0.9, 0.25, -0.25));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.47221948958322, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.255412811882995, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.255412811882995, value.z);
}

static void atanh_test_vec3f_1() {
    const Vec3f value = atanh(vec3f(0.f, 0.25f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.25541282f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.54930615f, value.z);
}

static void atanh_test_vec3f_2() {
    const Vec3f value = atanh(vec3f(-0.9f, 0.25f, -0.25f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.4722193f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.25541282f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.25541282f, value.z);
}

static void atanh_test_vec4d_1() {
    const Vec4d value = atanh(vec4d(0.0, 0.25, 0.5, 0.9));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.255412811882995, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.549306144334055, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.47221948958322, value.w);
}

static void atanh_test_vec4d_2() {
    const Vec4d value = atanh(vec4d(-0.25, -0.5, -0.9, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.255412811882995, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.549306144334055, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.47221948958322, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.549306144334055, value.w);
}

static void atanh_test_vec4f_1() {
    const Vec4f value = atanh(vec4f(0.f, 0.25f, 0.5f, 0.9f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.25541282f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.54930615f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.4722193f, value.w);
}

static void atanh_test_vec4f_2() {
    const Vec4f value = atanh(vec4f(-0.25f, -0.5f, -0.9f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.25541282f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.54930615f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.4722193f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.54930615f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(atanh_test_scalard_1);
    RUN_TEST(atanh_test_scalard_2);

    RUN_TEST(atanh_test_scalarf_1);
    RUN_TEST(atanh_test_scalarf_2);

    RUN_TEST(atanh_test_vec2d_1);
    RUN_TEST(atanh_test_vec2d_2);

    RUN_TEST(atanh_test_vec2f_1);
    RUN_TEST(atanh_test_vec2f_2);

    RUN_TEST(atanh_test_vec3d_1);
    RUN_TEST(atanh_test_vec3d_2);

    RUN_TEST(atanh_test_vec3f_1);
    RUN_TEST(atanh_test_vec3f_2);

    RUN_TEST(atanh_test_vec4d_1);
    RUN_TEST(atanh_test_vec4d_2);

    RUN_TEST(atanh_test_vec4f_1);
    RUN_TEST(atanh_test_vec4f_2);

    return UNITY_END();
}
