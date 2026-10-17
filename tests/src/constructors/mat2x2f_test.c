#include "jml/constructors/mat2x2f.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2f.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 2;

static void mat2x2f_test_1() {
    float expected[ARRAY_SIZE];

    srand(0x6b3b);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, ARRAY_SIZE);
        JML_Mat2x2f value = JML_mat2x2f(
            expected[0], expected[1],
            expected[2], expected[3]
        );
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void mat2x2f_test_2() {
    float expected[ARRAY_SIZE];

    srand(0x77de);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec2f vector_1 = JML_vec2f(expected[0], expected[1]);
        JML_Vec2f vector_2 = JML_vec2f(expected[2], expected[3]);
        JML_Mat2x2f value = JML_mat2x2f(
            vector_1,
            vector_2
        );
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat2x2f_test_1);
    RUN_TEST(mat2x2f_test_2);
    return UNITY_END();
}