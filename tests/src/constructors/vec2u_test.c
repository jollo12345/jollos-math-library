#include "jml/constructors/vec2u.h"

#include <stdlib.h>
#include <unity.h>

#include "util.h"

const int TEST_ITERATIONS = 8;
const int VECTOR_SIZE = 2;

static void vec2u_test_1() {
    unsigned expected[VECTOR_SIZE];

    srand(0x4335);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_UNSIGNED_ARRAY(expected, VECTOR_SIZE);
        JML_Vec2u value = JML_vec2u(expected[0], expected[1]);
        TEST_ASSERT_EQUAL_UINT_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2u_test_1);
    return UNITY_END();
}