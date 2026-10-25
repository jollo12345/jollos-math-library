#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/vec4d.h"

static void mat4x4d_test_1() {
    const Mat4x4d value = mat4x4d(
        0.0, 1.0, 2.0, 3.0,
        4.0, 5.0, 6.0, 7.0,
        8.0, 9.0, 10.0, 11.0,
        12.0, 13.0, 14.0, 15.0
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 11.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 13.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m33);
}

static void mat4x4d_test_2() {
    const Mat4x4d value = mat4x4d(
        vec4d(0.0, 1.0, 2.0, 3.0),
        vec4d(4.0, 5.0, 6.0, 7.0),
        vec4d(8.0, 9.0, 10.0, 11.0),
        vec4d(12.0, 13.0, 14.0, 15.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 11.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 13.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m33);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat4x4d_test_1);
    RUN_TEST(mat4x4d_test_2);
    return UNITY_END();
}