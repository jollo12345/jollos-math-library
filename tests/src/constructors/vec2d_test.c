#include "jml/constructors/vec2d.h"

#include <stdlib.h>
#include <unity.h>

#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 2;

static void vec2d_test_1() {
    double expected[ARRAY_SIZE];

    srand(0x0b4d);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_DOUBLE_ARRAY(expected, ARRAY_SIZE);
        JML_Vec2d value = JML_vec2d(expected[0], expected[1]);
        TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2d_test_1);
    return UNITY_END();
}