#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2i.h"
#include "jml/constructors/vec3i.h"
#include "jml/constructors/vec4i.h"

static void vec4i_test_1() {
    const Vec4i value = vec4i(0, 1, 2, 3);

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
    TEST_ASSERT_EQUAL_INT(3, value.w);
}

static void vec4i_test_2() {
    const Vec4i value = vec4i(0, 1, vec2i(2, 3));

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
    TEST_ASSERT_EQUAL_INT(3, value.w);
}

static void vec4i_test_3() {
    const Vec4i value = vec4i(0, vec2i(1, 2), 3);

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
    TEST_ASSERT_EQUAL_INT(3, value.w);
}

static void vec4i_test_4() {
    const Vec4i value = vec4i(0, vec3i(1, 2, 3));

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
    TEST_ASSERT_EQUAL_INT(3, value.w);
}

static void vec4i_test_5() {
    const Vec4i value = vec4i(vec2i(0, 1), 2, 3);

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
    TEST_ASSERT_EQUAL_INT(3, value.w);
}

static void vec4i_test_6() {
    const Vec4i value = vec4i(vec2i(0, 1), vec2i(2, 3));

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
    TEST_ASSERT_EQUAL_INT(3, value.w);
}

static void vec4i_test_7() {
    const Vec4i value = vec4i(vec3i(0, 1, 2), 3);

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
    TEST_ASSERT_EQUAL_INT(3, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec4i_test_1);
    RUN_TEST(vec4i_test_2);
    RUN_TEST(vec4i_test_3);
    RUN_TEST(vec4i_test_4);
    RUN_TEST(vec4i_test_5);
    RUN_TEST(vec4i_test_6);
    RUN_TEST(vec4i_test_7);
    return UNITY_END();
}