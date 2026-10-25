#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/vec2d.h"

static void mat2x2d_test_1() {
    const Mat2x2d value = mat2x2d(
        0.0, 1.0,
        2.0, 3.0
    );

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.m11);
}

static void mat2x2d_test_2() {
    const Mat2x2d value = mat2x2d(
        vec2d(0.0, 1.0),
        vec2d(2.0, 3.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.m11);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat2x2d_test_1);
    RUN_TEST(mat2x2d_test_2);
    return UNITY_END();
}