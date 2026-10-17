#include "jml/constructors/mat2x2d.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2d.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 2;

static void mat2x2d_test_1() {
    double expected[ARRAY_SIZE];

    srand(0x1d61);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Mat2x2d value = JML_mat2x2d(
            expected[0], expected[1],
            expected[2], expected[3]
        );
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void mat2x2d_test_2() {
    double expected[ARRAY_SIZE];

    srand(0x1d61);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec2d vector_1 = JML_vec2d(expected[0], expected[1]);
        JML_Vec2d vector_2 = JML_vec2d(expected[2], expected[3]);
        JML_Mat2x2d value = JML_mat2x2d(
            vector_1,
            vector_2
        );
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat2x2d_test_1);
    RUN_TEST(mat2x2d_test_2);
    return UNITY_END();
}