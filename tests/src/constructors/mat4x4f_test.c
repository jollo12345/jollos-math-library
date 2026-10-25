#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat4x4f.h"
#include "jml/constructors/vec4f.h"

static void mat4x4f_test_1() {
    const Mat4x4f value = mat4x4f(
        0.f, 1.f, 2.f, 3.f,
        4.f, 5.f, 6.f, 7.f,
        8.f, 9.f, 10.f, 11.f,
        12.f, 13.f, 14.f, 15.f
    );

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m03);
    TEST_ASSERT_EQUAL_FLOAT(4.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(5.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(6.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(7.f, value.m13);
    TEST_ASSERT_EQUAL_FLOAT(8.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(9.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(10.f, value.m22);
    TEST_ASSERT_EQUAL_FLOAT(11.f, value.m23);
    TEST_ASSERT_EQUAL_FLOAT(12.f, value.m30);
    TEST_ASSERT_EQUAL_FLOAT(13.f, value.m31);
    TEST_ASSERT_EQUAL_FLOAT(14.f, value.m32);
    TEST_ASSERT_EQUAL_FLOAT(15.f, value.m33);
}

static void mat4x4f_test_2() {
    const Mat4x4f value = mat4x4f(
        vec4f(0.f, 1.f, 2.f, 3.f),
        vec4f(4.f, 5.f, 6.f, 7.f),
        vec4f(8.f, 9.f, 10.f, 11.f),
        vec4f(12.f, 13.f, 14.f, 15.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m03);
    TEST_ASSERT_EQUAL_FLOAT(4.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(5.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(6.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(7.f, value.m13);
    TEST_ASSERT_EQUAL_FLOAT(8.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(9.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(10.f, value.m22);
    TEST_ASSERT_EQUAL_FLOAT(11.f, value.m23);
    TEST_ASSERT_EQUAL_FLOAT(12.f, value.m30);
    TEST_ASSERT_EQUAL_FLOAT(13.f, value.m31);
    TEST_ASSERT_EQUAL_FLOAT(14.f, value.m32);
    TEST_ASSERT_EQUAL_FLOAT(15.f, value.m33);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat4x4f_test_1);
    RUN_TEST(mat4x4f_test_2);
    return UNITY_END();
}