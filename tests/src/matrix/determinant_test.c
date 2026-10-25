#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat2x2d.h"
#include "jml/constructors/mat2x2f.h"
#include "jml/constructors/mat3x3d.h"
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/mat4x4d.h"
#include "jml/constructors/mat4x4f.h"
#include "jml/matrix/determinant.h"

static void determinant_test_mat2x2d_1() {
    const double value = determinant(
        mat2x2d(
            3.0, 1.0,
            2.0, 4.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 10.0, value);
}

static void determinant_test_mat2x2d_2() {
    const double value = determinant(
        mat2x2d(
            1.0, 2.0,
            3.0, 4.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -2.0, value);
}

static void determinant_test_mat2x2d_3() {
    const double value = determinant(
        mat2x2d(
            2.0, 4.0,
            1.0, 2.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value);
}

static void determinant_test_mat2x2f_1() {
    const float value = determinant(
        mat2x2f(
            3.f, 1.f,
            2.f, 4.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 10.f, value);
}

static void determinant_test_mat2x2f_2() {
    const float value = determinant(
        mat2x2f(
            1.f, 2.f,
            3.f, 4.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -2.f, value);
}

static void determinant_test_mat2x2f_3() {
    const float value = determinant(
        mat2x2f(
            2.f, 4.f,
            1.f, 2.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value);
}

static void determinant_test_mat3x3d_1() {
    const double value = determinant(
        mat3x3d(
            2.0, -1.0, 0.0,
            1.0, 3.0, 2.0,
            4.0, 1.0, 5.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 23.0, value);
}

static void determinant_test_mat3x3d_2() {
    const double value = determinant(
        mat3x3d(
            1.0, 3.0, 2.0,
            2.0, -1.0, 0.0,
            4.0, 1.0, 5.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -23.0, value);
}

static void determinant_test_mat3x3d_3() {
    const double value = determinant(
        mat3x3d(
            1.0, 2.0, 3.0,
            4.0, 5.0, 6.0,
            7.0, 8.0, 9.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value);
}

static void determinant_test_mat3x3f_1() {
    const float value = determinant(
        mat3x3f(
            2.f, -1.f, 0.f,
            1.f, 3.f, 2.f,
            4.f, 1.f, 5.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 23.f, value);
}

static void determinant_test_mat3x3f_2() {
    const float value = determinant(
        mat3x3f(
            1.f, 3.f, 2.f,
            2.f, -1.f, 0.f,
            4.f, 1.f, 5.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -23.f, value);
}

static void determinant_test_mat3x3f_3() {
    const float value = determinant(
        mat3x3f(
            1.f, 2.f, 3.f,
            4.f, 5.f, 6.f,
            7.f, 8.f, 9.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value);
}

static void determinant_test_mat4x4d_1() {
    const double value = determinant(
        mat4x4d(
            1.0, 2.0, 0.0, 1.0,
            0.0, 1.0, 3.0, 2.0,
            2.0, 0.0, 1.0, 1.0,
            1.0, 1.0, 0.0, 2.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 18.0, value);
}

static void determinant_test_mat4x4d_2() {
    const double value = determinant(
        mat4x4d(
            0.0, 1.0, 3.0, 2.0,
            1.0, 2.0, 0.0, 1.0,
            2.0, 0.0, 1.0, 1.0,
            1.0, 1.0, 0.0, 2.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -18.0, value);
}

static void determinant_test_mat4x4d_3() {
    const double value = determinant(
        mat4x4d(
            1.0, 2.0, 3.0, 4.0,
            5.0, 6.0, 7.0, 8.0,
            9.0, 10.0, 11.0, 12.0,
            13.0, 14.0, 15.0, 16.0
        )
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value);
}

static void determinant_test_mat4x4f_1() {
    const float value = determinant(
        mat4x4f(
            1.f, 2.f, 0.f, 1.f,
            0.f, 1.f, 3.f, 2.f,
            2.f, 0.f, 1.f, 1.f,
            1.f, 1.f, 0.f, 2.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 18.f, value);
}

static void determinant_test_mat4x4f_2() {
    const float value = determinant(
        mat4x4f(
            0.f, 1.f, 3.f, 2.f,
            1.f, 2.f, 0.f, 1.f,
            2.f, 0.f, 1.f, 1.f,
            1.f, 1.f, 0.f, 2.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -18.f, value);
}

static void determinant_test_mat4x4f_3() {
    const float value = determinant(
        mat4x4f(
            1.f, 2.f, 3.f, 4.f,
            5.f, 6.f, 7.f, 8.f,
            9.f, 10.f, 11.f, 12.f,
            13.f, 14.f, 15.f, 16.f
        )
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(determinant_test_mat2x2d_1);
    RUN_TEST(determinant_test_mat2x2d_2);
    RUN_TEST(determinant_test_mat2x2d_3);

    RUN_TEST(determinant_test_mat2x2f_1);
    RUN_TEST(determinant_test_mat2x2f_2);
    RUN_TEST(determinant_test_mat2x2f_3);

    RUN_TEST(determinant_test_mat3x3d_1);
    RUN_TEST(determinant_test_mat3x3d_2);
    RUN_TEST(determinant_test_mat3x3d_3);

    RUN_TEST(determinant_test_mat3x3f_1);
    RUN_TEST(determinant_test_mat3x3f_2);
    RUN_TEST(determinant_test_mat3x3f_3);

    RUN_TEST(determinant_test_mat4x4d_1);
    RUN_TEST(determinant_test_mat4x4d_2);
    RUN_TEST(determinant_test_mat4x4d_3);

    RUN_TEST(determinant_test_mat4x4f_1);
    RUN_TEST(determinant_test_mat4x4f_2);
    RUN_TEST(determinant_test_mat4x4f_3);

    return UNITY_END();
}