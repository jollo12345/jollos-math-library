#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec3d.h"

static void vec3d_test_1() {
    const Vec3d value = vec3d(0.0, 1.0, 2.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.z);
}

static void vec3d_test_2() {
    const Vec3d value = vec3d(0.0, vec2d(1.0, 2.0));

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.z);
}

static void vec3d_test_3() {
    const Vec3d value = vec3d(vec2d(0.0, 1.0), 2.0);

    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 0.0, value.x);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 1.0, value.y);
    TEST_ASSERT_DOUBLE_WITHIN(EPSILON_D, 2.0, value.z);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3d_test_1);
    RUN_TEST(vec3d_test_2);
    RUN_TEST(vec3d_test_3);
    return UNITY_END();
}