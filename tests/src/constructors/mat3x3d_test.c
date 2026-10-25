#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/vec3d.h"

static void mat3x3d_test_1() {
    const Mat3x3d value = mat3x3d(
        0.0, 1.0, 2.0,
        3.0, 4.0, 5.0,
        6.0, 7.0, 8.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m22);
}

static void mat3x3d_test_2() {
    const Mat3x3d value = mat3x3d(
        vec3d(0.0, 1.0, 2.0),
        vec3d(3.0, 4.0, 5.0),
        vec3d(6.0, 7.0, 8.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m22);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat3x3d_test_1);
    RUN_TEST(mat3x3d_test_2);
    return UNITY_END();
}