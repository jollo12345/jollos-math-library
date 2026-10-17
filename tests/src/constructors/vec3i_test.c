#include "jml/constructors/vec3i.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2i.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int VECTOR_SIZE = 3;

static void vec3i_test_1() {
    int expected[VECTOR_SIZE];

    srand(0x8131);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3i value = JML_vec3i(expected[0], expected[1], expected[2]);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec3i_test_2() {
    int expected[VECTOR_SIZE];

    srand(0xc5d9);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3i value = JML_vec3i(expected[0], JML_vec2i(expected[1], expected[2]));
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec3i_test_3() {
    int expected[VECTOR_SIZE];

    srand(0x0f25);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3i value = JML_vec3i(JML_vec2i(expected[0], expected[1]), expected[2]);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3i_test_1);
    RUN_TEST(vec3i_test_2);
    RUN_TEST(vec3i_test_3);
    return UNITY_END();
}