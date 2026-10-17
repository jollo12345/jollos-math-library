#include "jml/constructors/vec4d.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec3d.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 4;

static void vec4d_test_1() {
    double expected[ARRAY_SIZE];

    srand(0x23d8);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4d value = JML_vec4d(expected[0], expected[1], expected[2], expected[3]);
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4d_test_2() {
    double expected[ARRAY_SIZE];

    srand(0x46ed);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4d value = JML_vec4d(expected[0], expected[1], JML_vec2d(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4d_test_3() {
    double expected[ARRAY_SIZE];

    srand(0x251d);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4d value = JML_vec4d(expected[0], JML_vec2d(expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4d_test_4() {
    double expected[ARRAY_SIZE];

    srand(0x7ff0);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4d value = JML_vec4d(expected[0], JML_vec3d(expected[1], expected[2], expected[3]));
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4d_test_5() {
    double expected[ARRAY_SIZE];

    srand(0x4564);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4d value = JML_vec4d(JML_vec2d(expected[0], expected[1]), expected[2], expected[3]);
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4d_test_6() {
    double expected[ARRAY_SIZE];

    srand(0xa82d);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4d value = JML_vec4d(JML_vec2d(expected[0], expected[1]), JML_vec2d(expected[2], expected[3]));
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec4d_test_7() {
    double expected[ARRAY_SIZE];

    srand(0xb1be);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4d value = JML_vec4d(JML_vec3d(expected[0], expected[1], expected[2]), expected[3]);
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
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