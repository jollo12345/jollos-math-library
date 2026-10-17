#include "jml/constructors/vec3d.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2d.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 3;

static void vec3d_test_1() {
    double expected[ARRAY_SIZE];

    srand(0xb6bf);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec3d value = JML_vec3d(expected[0], expected[1], expected[2]);
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec3d_test_2() {
    double expected[ARRAY_SIZE];

    srand(0xcabb);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec3d value = JML_vec3d(expected[0], JML_vec2d(expected[1], expected[2]));
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void vec3d_test_3() {
    double expected[ARRAY_SIZE];

    srand(0x669e);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec3d value = JML_vec3d(JML_vec2d(expected[0], expected[1]), expected[2]);
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3d_test_1);
    RUN_TEST(vec3d_test_2);
    RUN_TEST(vec3d_test_3);
    return UNITY_END();
}