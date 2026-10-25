#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/matrix/outerProduct.h"

static void outerProduct_test_mat2x2d_1() {
    const Mat2x2d value = outerProduct(
        vec2d(1.0, 2.0),
        vec2d(3.0, 4.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 3.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m11);
}

static void outerProduct_test_mat2x2d_2() {
    const Mat2x2d value = outerProduct(
        vec2d(-2.0, 3.0),
        vec2d(5.0, -1.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -10.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.0, value.m11);
}

static void outerProduct_test_mat2x2f_1() {
    const Mat2x2f value = outerProduct(
        vec2f(1.f, 2.f),
        vec2f(3.f, 4.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 3.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m11);
}

static void outerProduct_test_mat2x2f_2() {
    const Mat2x2f value = outerProduct(
        vec2f(-2.f, 3.f),
        vec2f(5.f, -1.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -10.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.f, value.m11);
}

static void outerProduct_test_mat3x3d_1() {
    const Mat3x3d value = outerProduct(
        vec3d(1.0, 2.0, 3.0),
        vec3d(4.0, 5.0, 6.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m22);
}

static void outerProduct_test_mat3x3d_2() {
    const Mat3x3d value = outerProduct(
        vec3d(2.0, -3.0, 5.0),
        vec3d(7.0, 11.0, -13.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -21.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 35.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 22.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -33.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 55.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -26.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 39.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -65.0, value.m22);
}

static void outerProduct_test_mat3x3f_1() {
    const Mat3x3f value = outerProduct(
        vec3f(1.f, 2.f, 3.f),
        vec3f(4.f, 5.f, 6.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m22);
}

static void outerProduct_test_mat3x3f_2() {
    const Mat3x3f value = outerProduct(
        vec3f(2.f, -3.f, 5.f),
        vec3f(7.f, 11.f, -13.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -21.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 35.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 22.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -33.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 55.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -26.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 39.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -65.f, value.m22);
}

static void outerProduct_test_mat4x4d_1() {
    const Mat4x4d value = outerProduct(
        vec4d(1.0, 2.0, 3.0, 4.0),
        vec4d(5.0, 6.0, 7.0, 8.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 20.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 12.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 24.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 7.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 21.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 16.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 24.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 32.0, value.m33);
}

static void outerProduct_test_mat4x4d_2() {
    const Mat4x4d value = outerProduct(
        vec4d(-1.0, 2.0, -3.0, 4.0),
        vec4d(2.0, -5.0, 7.0, 11.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -2.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 4.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -6.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 8.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 5.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -10.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 15.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -20.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -7.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 14.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -21.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 28.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -11.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 22.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -33.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 44.0, value.m33);
}

static void outerProduct_test_mat4x4f_1() {
    const Mat4x4f value = outerProduct(
        vec4f(1.f, 2.f, 3.f, 4.f),
        vec4f(5.f, 6.f, 7.f, 8.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 20.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 12.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 24.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 7.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 21.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 16.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 24.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 32.f, value.m33);
}

static void outerProduct_test_mat4x4f_2() {
    const Mat4x4f value = outerProduct(
        vec4f(-1.f, 2.f, -3.f, 4.f),
        vec4f(2.f, -5.f, 7.f, 11.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -2.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 4.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -6.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 8.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 5.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -10.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 15.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -20.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -7.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 14.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -21.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 28.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -11.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 22.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -33.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 44.f, value.m33);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(outerProduct_test_mat2x2d_1);
    RUN_TEST(outerProduct_test_mat2x2d_2);

    RUN_TEST(outerProduct_test_mat2x2f_1);
    RUN_TEST(outerProduct_test_mat2x2f_2);

    RUN_TEST(outerProduct_test_mat3x3d_1);
    RUN_TEST(outerProduct_test_mat3x3d_2);

    RUN_TEST(outerProduct_test_mat3x3f_1);
    RUN_TEST(outerProduct_test_mat3x3f_2);

    RUN_TEST(outerProduct_test_mat4x4d_1);
    RUN_TEST(outerProduct_test_mat4x4d_2);

    RUN_TEST(outerProduct_test_mat4x4f_1);
    RUN_TEST(outerProduct_test_mat4x4f_2);

    return UNITY_END();
}