#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2b.h"
#include "jml/constructors/vec3b.h"
#include "jml/constructors/vec4b.h"

static void vec4b_test_1() {
    const Vec4b value = vec4b(true, false, true, false);

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void vec4b_test_2() {
    const Vec4b value = vec4b(true, false, vec2b(true, false));

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void vec4b_test_3() {
    const Vec4b value = vec4b(true, vec2b(false, true), false);

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void vec4b_test_4() {
    const Vec4b value = vec4b(true, vec3b(false, true, false));

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void vec4b_test_5() {
    const Vec4b value = vec4b(vec2b(true, false), true, false);

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void vec4b_test_6() {
    const Vec4b value = vec4b(vec2b(true, false), vec2b(true, false));

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void vec4b_test_7() {
    const Vec4b value = vec4b(vec3b(true, false, true), false);

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec4b_test_1);
    RUN_TEST(vec4b_test_2);
    RUN_TEST(vec4b_test_3);
    RUN_TEST(vec4b_test_4);
    RUN_TEST(vec4b_test_5);
    RUN_TEST(vec4b_test_6);
    RUN_TEST(vec4b_test_7);
    return UNITY_END();
}