#include "jml/constructors/vec4u.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2u.h"
#include "jml/constructors/vec3u.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 4;

static void vec4u_test_1() {
    unsigned expected[ARRAY_SIZE];

    srand(0x2e50);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_UNSIGNED_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4u value = JML_vec4u(expected[0], expected[1], expected[2], expected[3]);
        TEST_ASSERT_EQUAL_UINT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4u_test_2() {
    unsigned expected[ARRAY_SIZE];

    srand(0xd748);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_UNSIGNED_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4u value = JML_vec4u(expected[0], expected[1], JML_vec2u(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_UINT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4u_test_3() {
    unsigned expected[ARRAY_SIZE];

    srand(0xd984);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_UNSIGNED_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4u value = JML_vec4u(expected[0], JML_vec2u(expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_UINT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4u_test_4() {
    unsigned expected[ARRAY_SIZE];

    srand(0x4d5f);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_UNSIGNED_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4u value = JML_vec4u(expected[0], JML_vec3u(expected[1], expected[2], expected[3]));
        TEST_ASSERT_EQUAL_UINT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4u_test_5() {
    unsigned expected[ARRAY_SIZE];

    srand(0xf40b);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_UNSIGNED_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4u value = JML_vec4u(JML_vec2u(expected[0], expected[1]), expected[2], expected[3]);
        TEST_ASSERT_EQUAL_UINT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4u_test_6() {
    unsigned expected[ARRAY_SIZE];

    srand(0x6f1c);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_UNSIGNED_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4u value = JML_vec4u(JML_vec2u(expected[0], expected[1]), JML_vec2u(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_UINT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4u_test_7() {
    unsigned expected[ARRAY_SIZE];

    srand(0x6d5f);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_UNSIGNED_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4u value = JML_vec4u(JML_vec3u(expected[0], expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_UINT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
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