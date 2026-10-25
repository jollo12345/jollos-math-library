#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/mat3x3f.h"
#include "jml/constructors/vec3f.h"

static void mat3x3f_test_1() {
    const Mat3x3f value = mat3x3f(
        0.f, 1.f, 2.f,
        3.f, 4.f, 5.f,
        6.f, 7.f, 8.f
    );

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(4.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(5.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(6.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(7.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(8.f, value.m22);
}

static void mat3x3f_test_2() {
    const Mat3x3f value = mat3x3f(
        vec3f(0.f, 1.f, 2.f),
        vec3f(3.f, 4.f, 5.f),
        vec3f(6.f, 7.f, 8.f)
    );

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.m00);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.m01);
    TEST_ASSERT_EQUAL_FLOAT(2.f, value.m02);
    TEST_ASSERT_EQUAL_FLOAT(3.f, value.m10);
    TEST_ASSERT_EQUAL_FLOAT(4.f, value.m11);
    TEST_ASSERT_EQUAL_FLOAT(5.f, value.m12);
    TEST_ASSERT_EQUAL_FLOAT(6.f, value.m20);
    TEST_ASSERT_EQUAL_FLOAT(7.f, value.m21);
    TEST_ASSERT_EQUAL_FLOAT(8.f, value.m22);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(mat3x3f_test_1);
    RUN_TEST(mat3x3f_test_2);
    return UNITY_END();
}