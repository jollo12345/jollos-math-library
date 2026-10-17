#include "jml/constructors/mat4x4f.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec4f.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 16;

static void mat4x4f_test_1() {
    float expected[ARRAY_SIZE];

    srand(0x1d61);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, ARRAY_SIZE);
        JML_Mat4x4f value = JML_mat4x4f(
            expected[0], expected[1], expected[2], expected[3],
            expected[4], expected[5], expected[6], expected[7],
            expected[8], expected[9], expected[10], expected[11],
            expected[12], expected[13], expected[14], expected[15]
        );
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void mat4x4f_test_2() {
    float expected[ARRAY_SIZE];

    srand(0x1d61);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec4f vector_1 = JML_vec4f(expected[0], expected[1], expected[2], expected[3]);
        JML_Vec4f vector_2 = JML_vec4f(expected[4], expected[5], expected[6], expected[7]);
        JML_Vec4f vector_3 = JML_vec4f(expected[8], expected[9], expected[10], expected[11]);
        JML_Vec4f vector_4 = JML_vec4f(expected[12], expected[13], expected[14], expected[15]);
        JML_Mat4x4f value = JML_mat4x4f(
            vector_1,
            vector_2,
            vector_3,
            vector_4
        );
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat4x4f_test_1);
    RUN_TEST(mat4x4f_test_2);
    return UNITY_END();
}