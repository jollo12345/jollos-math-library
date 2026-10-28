#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/common/min.h"
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec2i.h"
#include "jml/constructors/vec2u.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec3i.h"
#include "jml/constructors/vec3u.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/constructors/vec4i.h"
#include "jml/constructors/vec4u.h"

static void min_test_double_1() {
    const double value = min(1.5, 2.5);

    TEST_ASSERT_EQUAL_DOUBLE(1.5, value);
}

static void min_test_double_2() {
    const double value = min(3.5, -4.5);

    TEST_ASSERT_EQUAL_DOUBLE(-4.5, value);
}

static void min_test_float_1() {
    const float value = min(1.5f, 2.5f);

    TEST_ASSERT_EQUAL_FLOAT(1.5f, value);
}

static void min_test_float_2() {
    const float value = min(3.5f, -4.5f);

    TEST_ASSERT_EQUAL_FLOAT(-4.5f, value);
}

static void min_test_scalari_1() {
    const int value = min(1, 2);

    TEST_ASSERT_EQUAL_INT(1, value);
}

static void min_test_scalari_2() {
    const int value = min(3, -4);

    TEST_ASSERT_EQUAL_INT(-4, value);
}

static void min_test_scalaru_1() {
    const unsigned value = min(1u, 2u);

    TEST_ASSERT_EQUAL_UINT(1u, value);
}

static void min_test_scalaru_2() {
    const unsigned value = min(5u, 3u);

    TEST_ASSERT_EQUAL_UINT(3u, value);
}

static void min_test_vec2d() {
    const Vec2d value = min(
        vec2d(1.5, 5.5),
        vec2d(3.5, 2.5)
    );

    TEST_ASSERT_EQUAL_DOUBLE(1.5, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(2.5, value.y);
}

static void min_test_vec2f() {
    const Vec2f value = min(
        vec2f(1.5f, 5.5f),
        vec2f(3.5f, 2.5f)
    );

    TEST_ASSERT_EQUAL_FLOAT(1.5f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(2.5f, value.y);
}

static void min_test_vec2i() {
    const Vec2i value = min(
        vec2i(1, 5),
        vec2i(3, 2)
    );

    TEST_ASSERT_EQUAL_INT(1, value.x);
    TEST_ASSERT_EQUAL_INT(2, value.y);
}

static void min_test_vec2u() {
    const Vec2u value = min(
        vec2u(1u, 5u),
        vec2u(3u, 2u)
    );

    TEST_ASSERT_EQUAL_UINT(1u, value.x);
    TEST_ASSERT_EQUAL_UINT(2u, value.y);
}

static void min_test_vec3d() {
    const Vec3d value = min(
        vec3d(1.5, 5.5, -3.5),
        vec3d(3.5, 2.5, -4.5)
    );

    TEST_ASSERT_EQUAL_DOUBLE(1.5, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(2.5, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(-4.5, value.z);
}

static void min_test_vec3f() {
    const Vec3f value = min(
        vec3f(1.5f, 5.5f, -3.5f),
        vec3f(3.5f, 2.5f, -4.5f)
    );

    TEST_ASSERT_EQUAL_FLOAT(1.5f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(2.5f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(-4.5f, value.z);
}

static void min_test_vec3i() {
    const Vec3i value = min(
        vec3i(1, 5, -3),
        vec3i(3, 2, -4)
    );

    TEST_ASSERT_EQUAL_INT(1, value.x);
    TEST_ASSERT_EQUAL_INT(2, value.y);
    TEST_ASSERT_EQUAL_INT(-4, value.z);
}

static void min_test_vec3u() {
    const Vec3u value = min(
        vec3u(1u, 5u, 4u),
        vec3u(3u, 2u, 6u)
    );

    TEST_ASSERT_EQUAL_UINT(1u, value.x);
    TEST_ASSERT_EQUAL_UINT(2u, value.y);
    TEST_ASSERT_EQUAL_UINT(4u, value.z);
}

static void min_test_vec4d() {
    const Vec4d value = min(
        vec4d(1.5, 5.5, -3.5, 7.5),
        vec4d(3.5, 2.5, -4.5, 9.5)
    );

    TEST_ASSERT_EQUAL_DOUBLE(1.5, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(2.5, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(-4.5, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(7.5, value.w);
}

static void min_test_vec4f() {
    const Vec4f value = min(
        vec4f(1.5f, 5.5f, -3.5f, 7.5f),
        vec4f(3.5f, 2.5f, -4.5f, 9.5f)
    );

    TEST_ASSERT_EQUAL_FLOAT(1.5f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(2.5f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(-4.5f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(7.5f, value.w);
}

static void min_test_vec4i() {
    const Vec4i value = min(
        vec4i(1, 5, -3, 7),
        vec4i(3, 2, -4, 9)
    );

    TEST_ASSERT_EQUAL_INT(1, value.x);
    TEST_ASSERT_EQUAL_INT(2, value.y);
    TEST_ASSERT_EQUAL_INT(-4, value.z);
    TEST_ASSERT_EQUAL_INT(7, value.w);
}

static void min_test_vec4u() {
    const Vec4u value = min(
        vec4u(1u, 5u, 4u, 7u),
        vec4u(3u, 2u, 6u, 9u)
    );

    TEST_ASSERT_EQUAL_UINT(1u, value.x);
    TEST_ASSERT_EQUAL_UINT(2u, value.y);
    TEST_ASSERT_EQUAL_UINT(4u, value.z);
    TEST_ASSERT_EQUAL_UINT(7u, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(min_test_double_1);
    RUN_TEST(min_test_double_2);

    RUN_TEST(min_test_float_1);
    RUN_TEST(min_test_float_2);

    RUN_TEST(min_test_scalari_1);
    RUN_TEST(min_test_scalari_2);

    RUN_TEST(min_test_scalaru_1);
    RUN_TEST(min_test_scalaru_2);

    RUN_TEST(min_test_vec2d);
    RUN_TEST(min_test_vec2f);

    RUN_TEST(min_test_vec2i);
    RUN_TEST(min_test_vec2u);

    RUN_TEST(min_test_vec3d);
    RUN_TEST(min_test_vec3f);

    RUN_TEST(min_test_vec3i);
    RUN_TEST(min_test_vec3u);

    RUN_TEST(min_test_vec4d);
    RUN_TEST(min_test_vec4f);

    RUN_TEST(min_test_vec4i);
    RUN_TEST(min_test_vec4u);

    return UNITY_END();
}
