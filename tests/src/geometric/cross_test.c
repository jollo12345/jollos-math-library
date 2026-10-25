#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/geometric/cross.h"

static void cross_test_vec3d_1() {
    const Vec3d value = cross(
        vec3d(1.0, 2.0, 3.0),
        vec3d(4.0, 5.0, 6.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 6.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, -3.0, value.z);
}

static void cross_test_vec3d_2() {
    const Vec3d value = cross(
        vec3d(1.0, 2.0, 3.0),
        vec3d(2.0, 4.0, 6.0)
    );

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.z);
}

static void cross_test_vec3f_1() {
    const Vec3f value = cross(
        vec3f(1.f, 2.f, 3.f),
        vec3f(4.f, 5.f, 6.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 6.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, -3.f, value.z);
}

static void cross_test_vec3f_2() {
    const Vec3f value = cross(
        vec3f(1.f, 2.f, 3.f),
        vec3f(2.f, 4.f, 6.f)
    );

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.z);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(cross_test_vec3d_1);
    RUN_TEST(cross_test_vec3d_2);

    RUN_TEST(cross_test_vec3f_1);
    RUN_TEST(cross_test_vec3f_2);

    return UNITY_END();
}