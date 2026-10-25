#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/trigonometry/tanh.h"

static void tanh_test_scalard_1() {
    const double value = tanh(0.5);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.46211715726001, value);
}

static void tanh_test_scalard_2() {
    const double value = tanh(-1.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.761594155955765, value);
}

static void tanh_test_scalarf_1() {
    const float value = tanh(0.5f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.46211717f, value);
}

static void tanh_test_scalarf_2() {
    const float value = tanh(-1.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.7615942f, value);
}

static void tanh_test_vec2d_1() {
    const Vec2d value = tanh(vec2d(0.0, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.46211715726001, value.y);
}

static void tanh_test_vec2d_2() {
    const Vec2d value = tanh(vec2d(1.0, -2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.761594155955765, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.964027580075817, value.y);
}

static void tanh_test_vec2f_1() {
    const Vec2f value = tanh(vec2f(0.f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.46211717f, value.y);
}

static void tanh_test_vec2f_2() {
    const Vec2f value = tanh(vec2f(1.f, -2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.7615942f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.9640276f, value.y);
}

static void tanh_test_vec3d_1() {
    const Vec3d value = tanh(vec3d(0.0, 0.5, 1.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.46211715726001, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.761594155955765, value.z);
}

static void tanh_test_vec3d_2() {
    const Vec3d value = tanh(vec3d(-1.0, 2.0, -0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.761594155955765, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.964027580075817, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.46211715726001, value.z);
}

static void tanh_test_vec3f_1() {
    const Vec3f value = tanh(vec3f(0.f, 0.5f, 1.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.46211717f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.7615942f, value.z);
}

static void tanh_test_vec3f_2() {
    const Vec3f value = tanh(vec3f(-1.f, 2.f, -0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.7615942f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.9640276f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.46211717f, value.z);
}

static void tanh_test_vec4d_1() {
    const Vec4d value = tanh(vec4d(0.0, 0.5, 1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.46211715726001, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.761594155955765, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.964027580075817, value.w);
}

static void tanh_test_vec4d_2() {
    const Vec4d value = tanh(vec4d(-0.5, -1.0, -2.0, 3.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.46211715726001, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.761594155955765, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.964027580075817, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.99505475368673, value.w);
}

static void tanh_test_vec4f_1() {
    const Vec4f value = tanh(vec4f(0.f, 0.5f, 1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.46211717f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.7615942f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.9640276f, value.w);
}

static void tanh_test_vec4f_2() {
    const Vec4f value = tanh(vec4f(-0.5f, -1.f, -2.f, 3.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.46211717f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.7615942f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.9640276f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.9950548f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(tanh_test_scalard_1);
    RUN_TEST(tanh_test_scalard_2);

    RUN_TEST(tanh_test_scalarf_1);
    RUN_TEST(tanh_test_scalarf_2);

    RUN_TEST(tanh_test_vec2d_1);
    RUN_TEST(tanh_test_vec2d_2);

    RUN_TEST(tanh_test_vec2f_1);
    RUN_TEST(tanh_test_vec2f_2);

    RUN_TEST(tanh_test_vec3d_1);
    RUN_TEST(tanh_test_vec3d_2);

    RUN_TEST(tanh_test_vec3f_1);
    RUN_TEST(tanh_test_vec3f_2);

    RUN_TEST(tanh_test_vec4d_1);
    RUN_TEST(tanh_test_vec4d_2);

    RUN_TEST(tanh_test_vec4f_1);
    RUN_TEST(tanh_test_vec4f_2);

    return UNITY_END();
}
