#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/vec2f.h"

static void mat2x2f_test_1() {
    const Mat2x2f value = mat2x2f(
        0.f, 1.f,
        2.f, 3.f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m11);
}

static void mat2x2f_test_2() {
    const Mat2x2f value = mat2x2f(
        vec2f(0.f, 1.f),
        vec2f(2.f, 3.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m11);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat2x2f_test_1);
    RUN_TEST(mat2x2f_test_2);
    return UNITY_END();
}