#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4f.h"

static void vec4f_test_1() {
    const JML_Vec4f value = vec4f(0.f, 1.f, 2.f, 3.f);

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.w);
}

static void vec4f_test_2() {
    const JML_Vec4f value = vec4f(0.f, 1.f, vec2f(2.f, 3.f));

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.w);
}

static void vec4f_test_3() {
    const JML_Vec4f value = vec4f(0.f, vec2f(1.f, 2.f), 3.f);

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.w);
}

static void vec4f_test_4() {
    const JML_Vec4f value = vec4f(0.f, vec3f(1.f, 2.f, 3.f));

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.w);
}

static void vec4f_test_5() {
    const JML_Vec4f value = vec4f(vec2f(0.f, 1.f), 2.f, 3.f);

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.w);
}

static void vec4f_test_6() {
    const JML_Vec4f value = vec4f(vec2f(0.f, 1.f), vec2f(2.f, 3.f));

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.w);
}

static void vec4f_test_7() {
    const JML_Vec4f value = vec4f(vec3f(0.f, 1.f, 2.f), 3.f);

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.z);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec4f_test_1);
    RUN_TEST(vec4f_test_2);
    RUN_TEST(vec4f_test_3);
    RUN_TEST(vec4f_test_4);
    RUN_TEST(vec4f_test_5);
    RUN_TEST(vec4f_test_6);
    RUN_TEST(vec4f_test_7);
    return UNITY_END();
}