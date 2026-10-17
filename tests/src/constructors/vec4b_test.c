#include "jml/constructors/vec4b.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2b.h"
#include "jml/constructors/vec3b.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int VECTOR_SIZE = 4;

static void vec4b_test_1() {
    bool expected[VECTOR_SIZE];

    srand(0x23d8);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4b value = JML_vec4b(expected[0], expected[1], expected[2], expected[3]);
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4b_test_2() {
    bool expected[VECTOR_SIZE];

    srand(0x46ed);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4b value = JML_vec4b(expected[0], expected[1], JML_vec2b(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4b_test_3() {
    bool expected[VECTOR_SIZE];

    srand(0x251d);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4b value = JML_vec4b(expected[0], JML_vec2b(expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4b_test_4() {
    bool expected[VECTOR_SIZE];

    srand(0x7ff0);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4b value = JML_vec4b(expected[0], JML_vec3b(expected[1], expected[2], expected[3]));
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4b_test_5() {
    bool expected[VECTOR_SIZE];

    srand(0x4564);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4b value = JML_vec4b(JML_vec2b(expected[0], expected[1]), expected[2], expected[3]);
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4b_test_6() {
    bool expected[VECTOR_SIZE];

    srand(0xa82b);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4b value = JML_vec4b(JML_vec2b(expected[0], expected[1]), JML_vec2b(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4b_test_7() {
    bool expected[VECTOR_SIZE];

    srand(0xb1be);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4b value = JML_vec4b(JML_vec3b(expected[0], expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
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