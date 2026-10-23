#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2u.h"
#include "jml/constructors/vec3u.h"

static void vec3u_test_1() {
    Vec3u value = vec3u(0u, 1u, 2u);

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
}

static void vec3u_test_2() {
    Vec3u value = vec3u(0u, vec2u(1u, 2u));

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
}

static void vec3u_test_3() {
    Vec3u value = vec3u(vec2u(0u, 1u), 2u);

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
    TEST_ASSERT_EQUAL_UINT(2u, value.z);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3u_test_1);
    RUN_TEST(vec3u_test_2);
    RUN_TEST(vec3u_test_3);
    return UNITY_END();
}