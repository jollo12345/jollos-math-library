#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/geometric/normalize.h"

static void normalize_test_vec2d_1() {
    const Vec2d value = normalize(vec2d(3.0, 4.0));

    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 0.6, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 0.8, value.y);
}

static void normalize_test_vec2d_2() {
    const Vec2d value = normalize(vec2d(-5.0, 12.0));

    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -5.0 / 13.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 12.0 / 13.0, value.y);
}

static void normalize_test_vec2f_1() {
    const Vec2f value = normalize(vec2f(3.f, 4.f));

    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 0.6f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 0.8f, value.y);
}

static void normalize_test_vec2f_2() {
    const Vec2f value = normalize(vec2f(-5.f, 12.f));

    TEST_ASSERT_FLOAT_WITHIN(1e-6f, -5.f / 13.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 12.f / 13.f, value.y);
}

static void normalize_test_vec3d_1() {
    const Vec3d value = normalize(vec3d(2.0, 3.0, 6.0));

    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 2.0 / 7.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 3.0 / 7.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 6.0 / 7.0, value.z);
}

static void normalize_test_vec3d_2() {
    const Vec3d value = normalize(vec3d(-1.0, 4.0, -8.0));

    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -1.0 / 9.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 4.0 / 9.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -8.0 / 9.0, value.z);
}

static void normalize_test_vec3f_1() {
    const Vec3f value = normalize(vec3f(2.f, 3.f, 6.f));

    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 2.f / 7.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 3.f / 7.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 6.f / 7.f, value.z);
}

static void normalize_test_vec3f_2() {
    const Vec3f value = normalize(vec3f(-1.f, 4.f, -8.f));

    TEST_ASSERT_FLOAT_WITHIN(1e-6f, -1.f / 9.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 4.f / 9.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, -8.f / 9.f, value.z);
}

static void normalize_test_vec4d_1() {
    const Vec4d value = normalize(vec4d(2.0, 2.0, 4.0, 5.0));

    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 2.0 / 7.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 2.0 / 7.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 4.0 / 7.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 5.0 / 7.0, value.w);
}

static void normalize_test_vec4d_2() {
    const Vec4d value = normalize(vec4d(-1.0, 2.0, 4.0, -10.0));

    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -1.0 / 11.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 2.0 / 11.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 4.0 / 11.0, value.z);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -10.0 / 11.0, value.w);
}

static void normalize_test_vec4f_1() {
    const Vec4f value = normalize(vec4f(2.f, 2.f, 4.f, 5.f));

    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 2.f / 7.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 2.f / 7.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 4.f / 7.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 5.f / 7.f, value.w);
}

static void normalize_test_vec4f_2() {
    const Vec4f value = normalize(vec4f(-1.f, 2.f, 4.f, -10.f));

    TEST_ASSERT_FLOAT_WITHIN(1e-6f, -1.f / 11.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 2.f / 11.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, 4.f / 11.f, value.z);
    TEST_ASSERT_FLOAT_WITHIN(1e-6f, -10.f / 11.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(normalize_test_vec2d_1);
    RUN_TEST(normalize_test_vec2d_2);

    RUN_TEST(normalize_test_vec2f_1);
    RUN_TEST(normalize_test_vec2f_2);

    RUN_TEST(normalize_test_vec3d_1);
    RUN_TEST(normalize_test_vec3d_2);

    RUN_TEST(normalize_test_vec3f_1);
    RUN_TEST(normalize_test_vec3f_2);

    RUN_TEST(normalize_test_vec4d_1);
    RUN_TEST(normalize_test_vec4d_2);

    RUN_TEST(normalize_test_vec4f_1);
    RUN_TEST(normalize_test_vec4f_2);

    return UNITY_END();
}