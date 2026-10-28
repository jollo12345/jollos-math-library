#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/exponential/log.h"

static void log_test_double_1() {
    const double value = log(2.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.693147180559945, value);
}

static void log_test_double_2() {
    const double value = log(0.5);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.693147180559945, value);
}

static void log_test_float_1() {
    const float value = log(2.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.6931472f, value);
}

static void log_test_float_2() {
    const float value = log(0.5f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.6931472f, value);
}

static void log_test_vec2d_1() {
    const Vec2d value = log(vec2d(1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.693147180559945, value.y);
}

static void log_test_vec2d_2() {
    const Vec2d value = log(vec2d(10.0, 0.5));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.302585092994046, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.693147180559945, value.y);
}

static void log_test_vec2f_1() {
    const Vec2f value = log(vec2f(1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.6931472f, value.y);
}

static void log_test_vec2f_2() {
    const Vec2f value = log(vec2f(10.f, 0.5f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.3025851f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.6931472f, value.y);
}

static void log_test_vec3d_1() {
    const Vec3d value = log(vec3d(1.0, 2.0, 10.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.693147180559945, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.302585092994046, value.z);
}

static void log_test_vec3d_2() {
    const Vec3d value = log(vec3d(0.5, 100.0, 0.25));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.693147180559945, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.605170185988092, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.386294361119891, value.z);
}

static void log_test_vec3f_1() {
    const Vec3f value = log(vec3f(1.f, 2.f, 10.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.6931472f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.3025851f, value.z);
}

static void log_test_vec3f_2() {
    const Vec3f value = log(vec3f(0.5f, 100.f, 0.25f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.6931472f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.6051702f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.3862944f, value.z);
}

static void log_test_vec4d_1() {
    const Vec4d value = log(vec4d(1.0, 2.0, 10.0, 100.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.693147180559945, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.302585092994046, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.605170185988092, value.w);
}

static void log_test_vec4d_2() {
    const Vec4d value = log(vec4d(0.5, 0.25, 3.0, 7.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.693147180559945, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.386294361119891, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.09861228866811, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.945910149055313, value.w);
}

static void log_test_vec4f_1() {
    const Vec4f value = log(vec4f(1.f, 2.f, 10.f, 100.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.6931472f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.3025851f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.6051702f, value.w);
}

static void log_test_vec4f_2() {
    const Vec4f value = log(vec4f(0.5f, 0.25f, 3.f, 7.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.6931472f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.3862944f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.0986123f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.9459101f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(log_test_double_1);
    RUN_TEST(log_test_double_2);

    RUN_TEST(log_test_float_1);
    RUN_TEST(log_test_float_2);

    RUN_TEST(log_test_vec2d_1);
    RUN_TEST(log_test_vec2d_2);

    RUN_TEST(log_test_vec2f_1);
    RUN_TEST(log_test_vec2f_2);

    RUN_TEST(log_test_vec3d_1);
    RUN_TEST(log_test_vec3d_2);

    RUN_TEST(log_test_vec3f_1);
    RUN_TEST(log_test_vec3f_2);

    RUN_TEST(log_test_vec4d_1);
    RUN_TEST(log_test_vec4d_2);

    RUN_TEST(log_test_vec4f_1);
    RUN_TEST(log_test_vec4f_2);

    return UNITY_END();
}