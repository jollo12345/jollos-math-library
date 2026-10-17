#include "jml/constructors/vec3u.h"

#include <stdlib.h>
#include <unity.h>

#include "jml/constructors/vec2u.h"
#include "util.h"

const int TEST_ITERATIONS = 8;
const int VECTOR_SIZE = 3;

static void vec3u_test_1() {
    unsigned expected[VECTOR_SIZE];

    srand(0x8131);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3u value = JML_vec3u(expected[0], expected[1], expected[2]);
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec3u_test_2() {
    unsigned expected[VECTOR_SIZE];

    srand(0xc5d9);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3u value = JML_vec3u(expected[0], JML_vec2u(expected[1], expected[2]));
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

static void vec3u_test_3() {
    unsigned expected[VECTOR_SIZE];

    srand(0x0f25);
    for (int index = 0; index < TEST_ITERATIONS; ++index) {
        INIT_BOOL_ARRAY(expected, VECTOR_SIZE);
        JML_Vec3u value = JML_vec3u(JML_vec2u(expected[0], expected[1]), expected[2]);
        TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, value.data, VECTOR_SIZE);
    }
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3u_test_1);
    RUN_TEST(vec3u_test_2);
    RUN_TEST(vec3u_test_3);
    return UNITY_END();
}