#include <unity.h>

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

    TEST_ASSERT_EQUAL_DOUBLE(3.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(6.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(4.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(8.0, value.m11);
}

static void outerProduct_test_mat2x2d_2() {
    const Mat2x2d value = outerProduct(
        vec2d(-2.0, 3.0),
        vec2d(5.0, -1.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(-10.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(15.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(2.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(-3.0, value.m11);
}

static void outerProduct_test_mat2x2f_1() {
    const Mat2x2f value = outerProduct(
        vec2f(1.f, 2.f),
        vec2f(3.f, 4.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(6.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(4.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(8.f, value.m11);
}

static void outerProduct_test_mat2x2f_2() {
    const Mat2x2f value = outerProduct(
        vec2f(-2.f, 3.f),
        vec2f(5.f, -1.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(-10.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(15.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(-3.f, value.m11);
}

static void outerProduct_test_mat3x3d_1() {
    const Mat3x3d value = outerProduct(
        vec3d(1.0, 2.0, 3.0),
        vec3d(4.0, 5.0, 6.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(4.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(8.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(12.0, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(5.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(10.0, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(15.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(6.0, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(12.0, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(18.0, value.m22);
}

static void outerProduct_test_mat3x3d_2() {
    const Mat3x3d value = outerProduct(
        vec3d(2.0, -3.0, 5.0),
        vec3d(7.0, 11.0, -13.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(14.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(-21.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(35.0, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(22.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(-33.0, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(55.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(-26.0, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(39.0, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(-65.0, value.m22);
}

static void outerProduct_test_mat3x3f_1() {
    const Mat3x3f value = outerProduct(
        vec3f(1.f, 2.f, 3.f),
        vec3f(4.f, 5.f, 6.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(4.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(8.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(12.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(5.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(10.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(15.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(6.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(12.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(18.f, value.m22);
}

static void outerProduct_test_mat3x3f_2() {
    const Mat3x3f value = outerProduct(
        vec3f(2.f, -3.f, 5.f),
        vec3f(7.f, 11.f, -13.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(14.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(-21.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(35.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(22.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(-33.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(55.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(-26.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(39.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(-65.f, value.m22);
}

static void outerProduct_test_mat4x4d_1() {
    const Mat4x4d value = outerProduct(
        vec4d(1.0, 2.0, 3.0, 4.0),
        vec4d(5.0, 6.0, 7.0, 8.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(5.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(10.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(15.0, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(20.0, value.m03);
    TEST_ASSERT_EQUAL_DOUBLE(6.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(12.0, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(18.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(24.0, value.m13);
    TEST_ASSERT_EQUAL_DOUBLE(7.0, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(14.0, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(21.0, value.m22);
    TEST_ASSERT_EQUAL_DOUBLE(28.0, value.m23);
    TEST_ASSERT_EQUAL_DOUBLE(8.0, value.m30);
    TEST_ASSERT_EQUAL_DOUBLE(16.0, value.m31);
    TEST_ASSERT_EQUAL_DOUBLE(24.0, value.m32);
    TEST_ASSERT_EQUAL_DOUBLE(32.0, value.m33);
}

static void outerProduct_test_mat4x4d_2() {
    const Mat4x4d value = outerProduct(
        vec4d(-1.0, 2.0, -3.0, 4.0),
        vec4d(2.0, -5.0, 7.0, 11.0)
    );

    TEST_ASSERT_EQUAL_DOUBLE(-2.0, value.m00);
    TEST_ASSERT_EQUAL_DOUBLE(4.0, value.m01);
    TEST_ASSERT_EQUAL_DOUBLE(-6.0, value.m02);
    TEST_ASSERT_EQUAL_DOUBLE(8.0, value.m03);
    TEST_ASSERT_EQUAL_DOUBLE(5.0, value.m10);
    TEST_ASSERT_EQUAL_DOUBLE(-10.0, value.m11);
    TEST_ASSERT_EQUAL_DOUBLE(15.0, value.m12);
    TEST_ASSERT_EQUAL_DOUBLE(-20.0, value.m13);
    TEST_ASSERT_EQUAL_DOUBLE(-7.0, value.m20);
    TEST_ASSERT_EQUAL_DOUBLE(14.0, value.m21);
    TEST_ASSERT_EQUAL_DOUBLE(-21.0, value.m22);
    TEST_ASSERT_EQUAL_DOUBLE(28.0, value.m23);
    TEST_ASSERT_EQUAL_DOUBLE(-11.0, value.m30);
    TEST_ASSERT_EQUAL_DOUBLE(22.0, value.m31);
    TEST_ASSERT_EQUAL_DOUBLE(-33.0, value.m32);
    TEST_ASSERT_EQUAL_DOUBLE(44.0, value.m33);
}

static void outerProduct_test_mat4x4f_1() {
    const Mat4x4f value = outerProduct(
        vec4f(1.f, 2.f, 3.f, 4.f),
        vec4f(5.f, 6.f, 7.f, 8.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(5.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(10.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(15.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(20.f, value.m03);
    TEST_ASSERT_EQUAL_FLOAT(6.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(12.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(18.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(24.f, value.m13);
    TEST_ASSERT_EQUAL_FLOAT(7.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(14.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(21.f, value.m22);
    TEST_ASSERT_EQUAL_FLOAT(28.f, value.m23);
    TEST_ASSERT_EQUAL_FLOAT(8.f, value.m30);
    TEST_ASSERT_EQUAL_FLOAT(16.f, value.m31);
    TEST_ASSERT_EQUAL_FLOAT(24.f, value.m32);
    TEST_ASSERT_EQUAL_FLOAT(32.f, value.m33);
}

static void outerProduct_test_mat4x4f_2() {
    const Mat4x4f value = outerProduct(
        vec4f(-1.f, 2.f, -3.f, 4.f),
        vec4f(2.f, -5.f, 7.f, 11.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(-2.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(4.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(-6.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(8.f, value.m03);
    TEST_ASSERT_EQUAL_FLOAT(5.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(-10.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(15.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(-20.f, value.m13);
    TEST_ASSERT_EQUAL_FLOAT(-7.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(14.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(-21.f, value.m22);
    TEST_ASSERT_EQUAL_FLOAT(28.f, value.m23);
    TEST_ASSERT_EQUAL_FLOAT(-11.f, value.m30);
    TEST_ASSERT_EQUAL_FLOAT(22.f, value.m31);
    TEST_ASSERT_EQUAL_FLOAT(-33.f, value.m32);
    TEST_ASSERT_EQUAL_FLOAT(44.f, value.m33);
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