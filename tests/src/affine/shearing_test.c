#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/affine/shearing.h"

static void shearing_test_mat4x4d_1() {
    const Mat4x4d value = shearing(2.0, 3.0, 5.0, 7.0, 11.0, 13.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 11.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 13.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m33);
}

static void shearing_test_mat4x4d_2() {
    const Mat4x4d value = shearing(0.5, -1.0, 2.0, -0.25, -3.0, 4.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.25, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m33);
}

static void shearing_test_mat4x4f_1() {
    const Mat4x4f value = shearing(2.f, 3.f, 5.f, 7.f, 11.f, 13.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 11.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 13.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m33);
}

static void shearing_test_mat4x4f_2() {
    const Mat4x4f value = shearing(0.5f, -1.f, 2.f, -0.25f, -3.f, 4.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.25f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m33);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(shearing_test_mat4x4d_1);
    RUN_TEST(shearing_test_mat4x4d_2);

    RUN_TEST(shearing_test_mat4x4f_1);
    RUN_TEST(shearing_test_mat4x4f_2);

    return UNITY_END();
}