#include "jml/constructors/vec4i.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2i.h"
#include "jml/constructors/vec3i.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 4;

static void vec4i_test_1() {
    int expected[ARRAY_SIZE];

    srand(0x7c4f);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4i value = JML_vec4i(expected[0], expected[1], expected[2], expected[3]);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4i_test_2() {
    int expected[ARRAY_SIZE];

    srand(0x1a58);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4i value = JML_vec4i(expected[0], expected[1], JML_vec2i(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4i_test_3() {
    int expected[ARRAY_SIZE];

    srand(0xf001);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4i value = JML_vec4i(expected[0], JML_vec2i(expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4i_test_4() {
    int expected[ARRAY_SIZE];

    srand(0x0aca);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4i value = JML_vec4i(expected[0], JML_vec3i(expected[1], expected[2], expected[3]));
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4i_test_5() {
    int expected[ARRAY_SIZE];

    srand(0x81e1);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4i value = JML_vec4i(JML_vec2i(expected[0], expected[1]), expected[2], expected[3]);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4i_test_6() {
    int expected[ARRAY_SIZE];

    srand(0x18ba);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4i value = JML_vec4i(JML_vec2i(expected[0], expected[1]), JML_vec2i(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4i_test_7() {
    int expected[ARRAY_SIZE];

    srand(0x5311);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4i value = JML_vec4i(JML_vec3i(expected[0], expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
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