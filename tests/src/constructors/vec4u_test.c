#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2u.h"
#include "jml/constructors/vec3u.h"
#include "jml/constructors/vec4u.h"

static void vec4u_test_1() {
    const Vec4u value = vec4u(0u, 1u, 2u, 3u);

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
    TEST_ASSERT_EQUAL_UINT(3u, value.w);
}

static void vec4u_test_2() {
    const Vec4u value = vec4u(0u, 1u, vec2u(2u, 3u));

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
    TEST_ASSERT_EQUAL_UINT(3u, value.w);
}

static void vec4u_test_3() {
    const Vec4u value = vec4u(0u, vec2u(1u, 2u), 3u);

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
    TEST_ASSERT_EQUAL_UINT(3u, value.w);
}

static void vec4u_test_4() {
    const Vec4u value = vec4u(0u, vec3u(1u, 2u, 3u));

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
    TEST_ASSERT_EQUAL_UINT(3u, value.w);
}

static void vec4u_test_5() {
    const Vec4u value = vec4u(vec2u(0u, 1u), 2u, 3u);

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
    TEST_ASSERT_EQUAL_UINT(3u, value.w);
}

static void vec4u_test_6() {
    const Vec4u value = vec4u(vec2u(0u, 1u), vec2u(2u, 3u));

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
    TEST_ASSERT_EQUAL_UINT(3u, value.w);
}

static void vec4u_test_7() {
    const Vec4u value = vec4u(vec3u(0u, 1u, 2u), 3u);

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
    TEST_ASSERT_EQUAL_UINT(3u, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec4u_test_1);
    RUN_TEST(vec4u_test_2);
    RUN_TEST(vec4u_test_3);
    RUN_TEST(vec4u_test_4);
    RUN_TEST(vec4u_test_5);
    RUN_TEST(vec4u_test_6);
    RUN_TEST(vec4u_test_7);
    return UNITY_END();
}