#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec3f.h"

static void vec3f_test_1() {
    const Vec3f value = vec3f(0.f, 1.f, 2.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.z);
}

static void vec3f_test_2() {
    const Vec3f value = vec3f(0.f, vec2f(1.f, 2.f));

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.z);
}

static void vec3f_test_3() {
    const Vec3f value = vec3f(vec2f(0.f, 1.f), 2.f);

    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 0.f, value.x);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 1.f, value.y);
    TEST_ASSERT_FLOAT_WITHIN(EPSILON_F, 2.f, value.z);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3f_test_1);
    RUN_TEST(vec3f_test_2);
    RUN_TEST(vec3f_test_3);
    return UNITY_END();
}