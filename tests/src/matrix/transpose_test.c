#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/matrix/transpose.h"

static void transpose_test_mat2x2d() {
    const Mat2x2d value = transpose(
        mat2x2d(
            1.0, 2.0,
            3.0, 4.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m11);
}

static void transpose_test_mat2x2f() {
    const Mat2x2f value = transpose(
        mat2x2f(
            1.f, 2.f,
            3.f, 4.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m11);
}

static void transpose_test_mat3x3d() {
    const Mat3x3d value = transpose(
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m22);
}

static void transpose_test_mat3x3f() {
    const Mat3x3f value = transpose(
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.m22);
}

static void transpose_test_mat4x4d() {
    const Mat4x4d value = transpose(
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 9.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 13.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 11.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 16.0, value.m33);
}

static void transpose_test_mat4x4f() {
    const Mat4x4f value = transpose(
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 9.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 13.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 11.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 16.f, value.m33);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(transpose_test_mat2x2d);
    RUN_TEST(transpose_test_mat2x2f);
    RUN_TEST(transpose_test_mat3x3d);
    RUN_TEST(transpose_test_mat3x3f);
    RUN_TEST(transpose_test_mat4x4d);
    RUN_TEST(transpose_test_mat4x4f);

    return UNITY_END();
}