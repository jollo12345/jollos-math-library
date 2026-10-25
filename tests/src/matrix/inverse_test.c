#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/matrix/inverse.h"

static void inverse_test_mat2x2d_1() {
    const Mat2x2d value = inverse(
        mat2x2d(
            1.0, 2.0,
            3.0, 4.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(1.5, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(-0.5, value.m11);
}

static void inverse_test_mat2x2d_2() {
    const Mat2x2d value = inverse(
        mat2x2d(
            2.0, 1.0,
            5.0, 3.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(-1.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(-5.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.m11);
}

static void inverse_test_mat2x2f_1() {
    const Mat2x2f value = inverse(
        mat2x2f(
            1.f, 2.f,
            3.f, 4.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(1.5f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(-0.5f, value.m11);
}

static void inverse_test_mat2x2f_2() {
    const Mat2x2f value = inverse(
        mat2x2f(
            2.f, 1.f,
            5.f, 3.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(-1.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(-5.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m11);
}

static void inverse_test_mat3x3d_1() {
    const Mat3x3d value = inverse(
        mat3x3d(
            2.0, 1.0, -2.0,
            1.0, -2.0, 1.0,
            1.0, 2.0, -2.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(4.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(-4.0, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(5.0, value.m22);
}

static void inverse_test_mat3x3d_2() {
    const Mat3x3d value = inverse(
        mat3x3d(
            2.0, -1.0, 1.0,
            -2.0, -2.0, 3.0,
            2.0, 1.0, -2.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(0.5, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(-0.5, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(-0.5, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(-4.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.m22);
}

static void inverse_test_mat3x3f_1() {
    const Mat3x3f value = inverse(
        mat3x3f(
            2.f, 1.f, -2.f,
            1.f, -2.f, 1.f,
            1.f, 2.f, -2.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(4.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(-4.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(5.f, value.m22);
}

static void inverse_test_mat3x3f_2() {
    const Mat3x3f value = inverse(
        mat3x3f(
            2.f, -1.f, 1.f,
            -2.f, -2.f, 3.f,
            2.f, 1.f, -2.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(0.5f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(-0.5f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(-0.5f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(-4.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.m22);
}

static void inverse_test_mat4x4d_1() {
    const Mat4x4d value = inverse(
        mat4x4d(
            2.0, 1.0, 3.0, 2.0,
            2.0, 1.0, 1.0, 3.0,
            1.0, 1.0, -1.0, 2.0,
            2.0, 3.0, 3.0, 3.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(-1.0, value.m03);
    TEST_ASSERT_EQUAL_DOUBLE(0.5, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(-1.25, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(0.25, value.m13);
    TEST_ASSERT_EQUAL_DOUBLE(-0.5, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(0.75, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(-1.0, value.m22);
    TEST_ASSERT_EQUAL_DOUBLE(0.25, value.m23);
    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.m30);
    TEST_ASSERT_EQUAL_DOUBLE(2.5, value.m31);
    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.m32);
    TEST_ASSERT_EQUAL_DOUBLE(0.5, value.m33);
}

static void inverse_test_mat4x4d_2() {
    const Mat4x4d value = inverse(
        mat4x4d(
            1.0, 3.0, 2.0, 2.0,
            2.0, 1.0, 1.0, 2.0,
            -1.0, 2.0, -1.0, 3.0,
            2.0, -1.0, 1.0, -1.0
        )
    );

    TEST_ASSERT_EQUAL_DOUBLE(0.25, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(-1.5, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(1.75, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(2.75, value.m03);
    TEST_ASSERT_EQUAL_DOUBLE(0.75, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(-2.5, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(2.25, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(3.25, value.m13);
    TEST_ASSERT_EQUAL_DOUBLE(-0.25, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(2.5, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(-2.75, value.m22);
    TEST_ASSERT_EQUAL_DOUBLE(-3.75, value.m23);
    TEST_ASSERT_EQUAL_DOUBLE(-0.5, value.m30);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.m31);
    TEST_ASSERT_EQUAL_DOUBLE(-1.5, value.m32);
    TEST_ASSERT_EQUAL_DOUBLE(-2.5, value.m33);
}

static void inverse_test_mat4x4f_1() {
    const Mat4x4f value = inverse(
        mat4x4f(
            2.f, 1.f, 3.f, 2.f,
            2.f, 1.f, 1.f, 3.f,
            1.f, 1.f, -1.f, 2.f,
            2.f, 3.f, 3.f, 3.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(-1.f, value.m03);
    TEST_ASSERT_EQUAL_FLOAT(0.5f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(-1.25f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(0.25f, value.m13);
    TEST_ASSERT_EQUAL_FLOAT(-0.5f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(0.75f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(-1.f, value.m22);
    TEST_ASSERT_EQUAL_FLOAT(0.25f, value.m23);
    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.m30);
    TEST_ASSERT_EQUAL_FLOAT(2.5f, value.m31);
    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.m32);
    TEST_ASSERT_EQUAL_FLOAT(0.5f, value.m33);
}

static void inverse_test_mat4x4f_2() {
    const Mat4x4f value = inverse(
        mat4x4f(
            1.f, 3.f, 2.f, 2.f,
            2.f, 1.f, 1.f, 2.f,
            -1.f, 2.f, -1.f, 3.f,
            2.f, -1.f, 1.f, -1.f
        )
    );

    TEST_ASSERT_EQUAL_FLOAT(0.25f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(-1.5f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(1.75f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(2.75f, value.m03);
    TEST_ASSERT_EQUAL_FLOAT(0.75f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(-2.5f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(2.25f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(3.25f, value.m13);
    TEST_ASSERT_EQUAL_FLOAT(-0.25f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(2.5f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(-2.75f, value.m22);
    TEST_ASSERT_EQUAL_FLOAT(-3.75f, value.m23);
    TEST_ASSERT_EQUAL_FLOAT(-0.5f, value.m30);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m31);
    TEST_ASSERT_EQUAL_FLOAT(-1.5f, value.m32);
    TEST_ASSERT_EQUAL_FLOAT(-2.5f, value.m33);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(inverse_test_mat2x2d_1);
    RUN_TEST(inverse_test_mat2x2d_2);

    RUN_TEST(inverse_test_mat2x2f_1);
    RUN_TEST(inverse_test_mat2x2f_2);

    RUN_TEST(inverse_test_mat3x3d_1);
    RUN_TEST(inverse_test_mat3x3d_2);

    RUN_TEST(inverse_test_mat3x3f_1);
    RUN_TEST(inverse_test_mat3x3f_2);

    RUN_TEST(inverse_test_mat4x4d_1);
    RUN_TEST(inverse_test_mat4x4d_2);

    RUN_TEST(inverse_test_mat4x4f_1);
    RUN_TEST(inverse_test_mat4x4f_2);

    return UNITY_END();
}