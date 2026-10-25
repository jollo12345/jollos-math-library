#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/affine/frustum.h"

static void frustum_test_mat4x4d_1() {
    const Mat4x4d value = frustum(-2.0, 2.0, -1.0, 1.0, 1.0, 3.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -2.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m33);
}

static void frustum_test_mat4x4d_2() {
    const Mat4x4d value = frustum(-1.0, 7.0, -3.0, 1.0, 1.0, 9.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.25, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.5, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.75, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -0.5, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.25, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -2.25, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m33);
}

static void frustum_test_mat4x4f_1() {
    const Mat4x4f value = frustum(-2.f, 2.f, -1.f, 1.f, 1.f, 3.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -2.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m33);
}

static void frustum_test_mat4x4f_2() {
    const Mat4x4f value = frustum(-1.f, 7.f, -3.f, 1.f, 1.f, 9.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.25f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.5f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.75f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -0.5f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.25f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -2.25f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m33);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(frustum_test_mat4x4d_1);
    RUN_TEST(frustum_test_mat4x4d_2);

    RUN_TEST(frustum_test_mat4x4f_1);
    RUN_TEST(frustum_test_mat4x4f_2);

    return UNITY_END();
}