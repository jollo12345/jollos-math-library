#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/geometric/reflect.h"

static void reflect_test_vec2d_1() {
    const Vec2d value = reflect(
        vec2d(1.0, -1.0),
        vec2d(0.0, 1.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
}

static void reflect_test_vec2d_2() {
    const Vec2d value = reflect(
        vec2d(1.0, 2.0),
        vec2d(0.6, 0.8)
    );

    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -1.64, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -1.52, value.y);
}

static void reflect_test_vec2f_1() {
    const Vec2f value = reflect(
        vec2f(1.f, -1.f),
        vec2f(0.f, 1.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(1.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
}

static void reflect_test_vec2f_2() {
    const Vec2f value = reflect(
        vec2f(1.f, 2.f),
        vec2f(0.6f, 0.8f)
    );

    TEST_ASSERT_FLOAT_WITHIN(1e-5f, -1.64f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(1e-5f, -1.52f, value.y);
}

static void reflect_test_vec3d_1() {
    const Vec3d value = reflect(
        vec3d(1.0, -2.0, 3.0),
        vec3d(0.0, 1.0, 0.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.z);
}

static void reflect_test_vec3d_2() {
    const Vec3d value = reflect(
        vec3d(1.0, 2.0, 3.0),
        vec3d(2.0 / 3.0, 2.0 / 3.0, 1.0 / 3.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -3.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, -2.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(1e-12, 1.0, value.z);
}

static void reflect_test_vec3f_1() {
    const Vec3f value = reflect(
        vec3f(1.f, -2.f, 3.f),
        vec3f(0.f, 1.f, 0.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(1.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.z);
}

static void reflect_test_vec3f_2() {
    const Vec3f value = reflect(
        vec3f(1.f, 2.f, 3.f),
        vec3f(2.f / 3.f, 2.f / 3.f, 1.f / 3.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(1e-5f, -3.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(1e-5f, -2.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(1e-5f, 1.f, value.z);
}

static void reflect_test_vec4d_1() {
    const Vec4d value = reflect(
        vec4d(1.0, 2.0, -3.0, 4.0),
        vec4d(0.0, 0.0, 1.0, 0.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(4.0, value.w);
}

static void reflect_test_vec4d_2() {
    const Vec4d value = reflect(
        vec4d(1.0, 2.0, 3.0, 4.0),
        vec4d(0.5, 0.5, 0.5, 0.5)
    );

    TEST_ASSERT_EQUAL_DOUBLE(-4.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(-1.0, value.w);
}

static void reflect_test_vec4f_1() {
    const Vec4f value = reflect(
        vec4f(1.f, 2.f, -3.f, 4.f),
        vec4f(0.f, 0.f, 1.f, 0.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(1.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(4.f, value.w);
}

static void reflect_test_vec4f_2() {
    const Vec4f value = reflect(
        vec4f(1.f, 2.f, 3.f, 4.f),
        vec4f(0.5f, 0.5f, 0.5f, 0.5f)
    );

    TEST_ASSERT_EQUAL_FLOAT(-4.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(-1.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(reflect_test_vec2d_1);
    RUN_TEST(reflect_test_vec2d_2);

    RUN_TEST(reflect_test_vec2f_1);
    RUN_TEST(reflect_test_vec2f_2);

    RUN_TEST(reflect_test_vec3d_1);
    RUN_TEST(reflect_test_vec3d_2);

    RUN_TEST(reflect_test_vec3f_1);
    RUN_TEST(reflect_test_vec3f_2);

    RUN_TEST(reflect_test_vec4d_1);
    RUN_TEST(reflect_test_vec4d_2);

    RUN_TEST(reflect_test_vec4f_1);
    RUN_TEST(reflect_test_vec4f_2);

    return UNITY_END();
}