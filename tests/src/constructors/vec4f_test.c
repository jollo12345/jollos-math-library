#include "jml/constructors/vec4f.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3f.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int VECTOR_SIZE = 4;

static void vec4f_test_1() {
    float expected[VECTOR_SIZE];

    srand(0x23f8);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4f value = JML_vec4f(expected[0], expected[1], expected[2], expected[3]);
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4f_test_2() {
    float expected[VECTOR_SIZE];

    srand(0x46ed);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4f value = JML_vec4f(expected[0], expected[1], JML_vec2f(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4f_test_3() {
    float expected[VECTOR_SIZE];

    srand(0x251d);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4f value = JML_vec4f(expected[0], JML_vec2f(expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4f_test_4() {
    float expected[VECTOR_SIZE];

    srand(0x7ff0);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4f value = JML_vec4f(expected[0], JML_vec3f(expected[1], expected[2], expected[3]));
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4f_test_5() {
    float expected[VECTOR_SIZE];

    srand(0x4564);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4f value = JML_vec4f(JML_vec2f(expected[0], expected[1]), expected[2], expected[3]);
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4f_test_6() {
    float expected[VECTOR_SIZE];

    srand(0xa82f);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4f value = JML_vec4f(JML_vec2f(expected[0], expected[1]), JML_vec2f(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec4f_test_7() {
    float expected[VECTOR_SIZE];

    srand(0xb1be);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec4f value = JML_vec4f(JML_vec3f(expected[0], expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
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