#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec4d.h"

static void vec4d_test_1() {
    const JML_Vec4d value = vec4d(0.0, 1.0, 2.0, 3.0);

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.w);
}

static void vec4d_test_2() {
    const JML_Vec4d value = vec4d(0.0, 1.0, vec2d(2.0, 3.0));

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.w);
}

static void vec4d_test_3() {
    const JML_Vec4d value = vec4d(0.0, vec2d(1.0, 2.0), 3.0);

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.w);
}

static void vec4d_test_4() {
    const JML_Vec4d value = vec4d(0.0, vec3d(1.0, 2.0, 3.0));

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.w);
}

static void vec4d_test_5() {
    const JML_Vec4d value = vec4d(vec2d(0.0, 1.0), 2.0, 3.0);

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.w);
}

static void vec4d_test_6() {
    const JML_Vec4d value = vec4d(vec2d(0.0, 1.0), vec2d(2.0, 3.0));

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.w);
}

static void vec4d_test_7() {
    const JML_Vec4d value = vec4d(vec3d(0.0, 1.0, 2.0), 3.0);

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.z);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec4d_test_1);
    RUN_TEST(vec4d_test_2);
    RUN_TEST(vec4d_test_3);
    RUN_TEST(vec4d_test_4);
    RUN_TEST(vec4d_test_5);
    RUN_TEST(vec4d_test_6);
    RUN_TEST(vec4d_test_7);
    return UNITY_END();
}