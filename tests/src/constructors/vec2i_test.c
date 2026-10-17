#include "jml/constructors/vec2i.h"

#include <stdlib.h>
#include <unity.h>

#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 2;

static void vec2i_test_1() {
    int expected[ARRAY_SIZE];

    srand(0xe785);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_INT_ARRAY(expected, ARRAY_SIZE);
        JML_Vec2i value = JML_vec2i(expected[0], expected[1]);
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2i_test_1);
    return UNITY_END();
}