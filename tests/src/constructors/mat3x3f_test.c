#include "jml/constructors/mat3x3f.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec3f.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 9;

static void mat3x3f_test_1() {
    float expected[ARRAY_SIZE];

    srand(0x1d61);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, ARRAY_SIZE);
        JML_Mat3x3f value = JML_mat3x3f(
            expected[0], expected[1], expected[2],
            expected[3], expected[4], expected[5],
            expected[6], expected[7], expected[8]
        );
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void mat3x3f_test_2() {
    float expected[ARRAY_SIZE];

    srand(0x1d61);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_FLOAT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec3f vector_1 = JML_vec3f(expected[0], expected[1], expected[2]);
        JML_Vec3f vector_2 = JML_vec3f(expected[3], expected[4], expected[5]);
        JML_Vec3f vector_3 = JML_vec3f(expected[6], expected[7], expected[8]);
        JML_Mat3x3f value = JML_mat3x3f(
            vector_1,
            vector_2,
            vector_3
        );
        TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat3x3f_test_1);
    RUN_TEST(mat3x3f_test_2);
    return UNITY_END();
}