#include "jml/constructors/vec3f.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2f.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int VECTOR_SIZE = 3;

static void vec3f_test_1() {
    float expected[VECTOR_SIZE];

    srand(0x8131);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3f value = JML_vec3f(expected[0], expected[1], expected[2]);
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec3f_test_2() {
    float expected[VECTOR_SIZE];

    srand(0xc5d9);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3f value = JML_vec3f(expected[0], JML_vec2f(expected[1], expected[2]));
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec3f_test_3() {
    float expected[VECTOR_SIZE];

    srand(0x0f25);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3f value = JML_vec3f(JML_vec2f(expected[0], expected[1]), expected[2]);
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3f_test_1);
    RUN_TEST(vec3f_test_2);
    RUN_TEST(vec3f_test_3);
    return UNITY_END();
}