#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/matrix/matrixCompMul.h"

static void matrix_comp_mul_test_mat2x2d_1() {
    const Mat2x2d value = matrixCompMul(
        mat2x2d(
            1.0, 2.0,
            3.0, 4.0
        ),
        mat2x2d(
            2.0, 3.0,
            5.0, 7.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m11);
}

static void matrix_comp_mul_test_mat2x2d_2() {
    const Mat2x2d value = matrixCompMul(
        mat2x2d(
            1.0, -2.0,
            3.0, -4.0
        ),
        mat2x2d(
            1.0, 1.5,
            2.0, 2.5
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -10.0, value.m11);
}

static void matrix_comp_mul_test_mat2x2f_1() {
    const Mat2x2f value = matrixCompMul(
        mat2x2f(
            1.f, 2.f,
            3.f, 4.f
        ),
        mat2x2f(
            2.f, 3.f,
            5.f, 7.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m11);
}

static void matrix_comp_mul_test_mat2x2f_2() {
    const Mat2x2f value = matrixCompMul(
        mat2x2f(
            1.f, -2.f,
            3.f, -4.f
        ),
        mat2x2f(
            1.f, 1.5f,
            2.f, 2.5f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -10.f, value.m11);
}

static void matrix_comp_mul_test_mat3x3d_1() {
    const Mat3x3d value = matrixCompMul(
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        ),
        mat3x3d(
            2.0, 3.0, 5.0,
            7.0, 11.0, 13.0,
            17.0, 19.0, 23.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 55.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 78.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 119.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 152.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 207.0, value.m22);
}

static void matrix_comp_mul_test_mat3x3d_2() {
    const Mat3x3d value = matrixCompMul(
        mat3x3d(
            1.0, -2.0, 3.0,
            -4.0, 5.0, -6.0,
            7.0, -8.0, 9.0
        ),
        mat3x3d(
            1.0, 1.5, 2.0,
            2.5, 3.0, 3.5,
            4.0, 4.5, 5.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -10.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -21.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -36.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 45.0, value.m22);
}

static void matrix_comp_mul_test_mat3x3f_1() {
    const Mat3x3f value = matrixCompMul(
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        ),
        mat3x3f(
            2.f, 3.f, 5.f,
            7.f, 11.f, 13.f,
            17.f, 19.f, 23.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 55.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 78.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 119.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 152.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 207.f, value.m22);
}

static void matrix_comp_mul_test_mat3x3f_2() {
    const Mat3x3f value = matrixCompMul(
        mat3x3f(
            1.f, -2.f, 3.f,
            -4.f, 5.f, -6.f,
            7.f, -8.f, 9.f
        ),
        mat3x3f(
            1.f, 1.5f, 2.f,
            2.5f, 3.f, 3.5f,
            4.f, 4.5f, 5.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -10.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -21.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -36.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 45.f, value.m22);
}

static void matrix_comp_mul_test_mat4x4d_1() {
    const Mat4x4d value = matrixCompMul(
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        ),
        mat4x4d(
            2.0, 3.0, 5.0, 7.0,
            11.0, 13.0, 17.0, 19.0,
            23.0, 29.0, 31.0, 37.0,
            41.0, 43.0, 47.0, 53.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 55.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 78.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 119.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 152.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 207.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 290.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 341.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 444.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 533.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 602.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 705.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 848.0, value.m33);
}

static void matrix_comp_mul_test_mat4x4d_2() {
    const Mat4x4d value = matrixCompMul(
        mat4x4d(
            1.0, -2.0, 3.0, -4.0,
            5.0, -6.0, 7.0, -8.0,
            9.0, -10.0, 11.0, -12.0,
            13.0, -14.0, 15.0, -16.0
        ),
        mat4x4d(
            1.0, 1.5, 2.0, 2.5,
            3.0, 3.5, 4.0, 4.5,
            5.0, 5.5, 6.0, 6.5,
            7.0, 7.5, 8.0, 8.5
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -10.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -21.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -36.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 45.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -55.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 66.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -78.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 91.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -105.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 120.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -136.0, value.m33);
}

static void matrix_comp_mul_test_mat4x4f_1() {
    const Mat4x4f value = matrixCompMul(
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        ),
        mat4x4f(
            2.f, 3.f, 5.f, 7.f,
            11.f, 13.f, 17.f, 19.f,
            23.f, 29.f, 31.f, 37.f,
            41.f, 43.f, 47.f, 53.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 55.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 78.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 119.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 152.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 207.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 290.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 341.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 444.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 533.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 602.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 705.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 848.f, value.m33);
}

static void matrix_comp_mul_test_mat4x4f_2() {
    const Mat4x4f value = matrixCompMul(
        mat4x4f(
            1.f, -2.f, 3.f, -4.f,
            5.f, -6.f, 7.f, -8.f,
            9.f, -10.f, 11.f, -12.f,
            13.f, -14.f, 15.f, -16.f
        ),
        mat4x4f(
            1.f, 1.5f, 2.f, 2.5f,
            3.f, 3.5f, 4.f, 4.5f,
            5.f, 5.5f, 6.f, 6.5f,
            7.f, 7.5f, 8.f, 8.5f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -10.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -21.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -36.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 45.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -55.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 66.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -78.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 91.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -105.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 120.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -136.f, value.m33);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(matrix_comp_mul_test_mat2x2d_1);
    RUN_TEST(matrix_comp_mul_test_mat2x2d_2);

    RUN_TEST(matrix_comp_mul_test_mat2x2f_1);
    RUN_TEST(matrix_comp_mul_test_mat2x2f_2);

    RUN_TEST(matrix_comp_mul_test_mat3x3d_1);
    RUN_TEST(matrix_comp_mul_test_mat3x3d_2);

    RUN_TEST(matrix_comp_mul_test_mat3x3f_1);
    RUN_TEST(matrix_comp_mul_test_mat3x3f_2);

    RUN_TEST(matrix_comp_mul_test_mat4x4d_1);
    RUN_TEST(matrix_comp_mul_test_mat4x4d_2);

    RUN_TEST(matrix_comp_mul_test_mat4x4f_1);
    RUN_TEST(matrix_comp_mul_test_mat4x4f_2);

    return UNITY_END();
}