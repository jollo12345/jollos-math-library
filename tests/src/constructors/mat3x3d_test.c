#include "jml/constructors/mat3x3d.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec3d.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 9;

static void mat3x3d_test_1() {
    double expected[ARRAY_SIZE];

    srand(0x1de5);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Mat3x3d value = JML_mat3x3d(
            expected[0], expected[1], expected[2],
            expected[3], expected[4], expected[5],
            expected[6], expected[7], expected[8]
        );
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

static void mat3x3d_test_2() {
    double expected[ARRAY_SIZE];

    srand(0x2eaa);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec3d vector_1 = JML_vec3d(expected[0], expected[1], expected[2]);
        JML_Vec3d vector_2 = JML_vec3d(expected[3], expected[4], expected[5]);
        JML_Vec3d vector_3 = JML_vec3d(expected[6], expected[7], expected[8]);
        JML_Mat3x3d value = JML_mat3x3d(
            vector_1,
            vector_2,
            vector_3
        );
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat3x3d_test_1);
    RUN_TEST(mat3x3d_test_2);
    return UNITY_END();
}