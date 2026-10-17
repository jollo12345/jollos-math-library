#include "jml/constructors/vec2i.h"

#include <stdlib.h>
#include <unity.h>

#include "util.h"

const int TEST_ITERATIONS = 8;
const int VECTOR_SIZE = 2;

static void vec2i_test_1() {
    int expected[VECTOR_SIZE];

    srand(0x4335);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, VECTOR_SIZE);
        JML_Vec2i value = JML_vec2i(expected[0], expected[1]);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2i_test_1);
    return UNITY_END();
}