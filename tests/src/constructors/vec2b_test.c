#include "jml/constructors/vec2b.h"

#include <stdlib.h>
#include <unity.h>

#include "util.h"

const int TEST_ITERATIONS = 8;
const int ARRAY_SIZE = 2;

static void vec2b_test_1() {
    bool expected[ARRAY_SIZE];

    srand(0x8131);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, ARRAY_SIZE);
        JML_Vec2b value = JML_vec2b(expected[0], expected[1]);
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, ARRAY_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2b_test_1);
    return UNITY_END();
}