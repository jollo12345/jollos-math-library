#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/affine/rotation.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"

static void rotation_test_mat4x4d_1() {
    const Mat4x4d value = rotation(vec3d(0.0, 0.0, 1.0), 1.5707963267948966);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -1.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m33);
}

static void rotation_test_mat4x4d_2() {
    const Mat4x4d value = rotation(
        vec3d(0.5773502691896258, 0.5773502691896258, 0.5773502691896258),
        2.0943951023931953
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m00);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m01);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m02);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m03);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m10);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m11);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m12);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m13);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m20);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m21);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m22);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m23);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m30);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m31);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.m32);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.m33);
}

static void rotation_test_mat4x4f_1() {
    const Mat4x4f value = rotation(vec3f(0.f, 0.f, 1.f), 1.5707964f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -1.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m22);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m23);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m30);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m31);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m32);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m33);
}

static void rotation_test_mat4x4f_2() {
    const Mat4x4f value = rotation(
        vec3f(0.57735026f, 0.57735026f, 0.57735026f),
        2.0943952f
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m00);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m01);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m02);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m03);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m10);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m11);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m12);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m13);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.m20);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m21);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.m22);
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

    RUN_TEST(rotation_test_mat4x4d_1);
    RUN_TEST(rotation_test_mat4x4d_2);

    RUN_TEST(rotation_test_mat4x4f_1);
    RUN_TEST(rotation_test_mat4x4f_2);

    return UNITY_END();
}