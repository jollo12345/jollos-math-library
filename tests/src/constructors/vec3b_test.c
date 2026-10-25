#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2b.h"
#include "jml/constructors/vec3b.h"

static void vec3b_test_1() {
    const Vec3b value = vec3b(true, false, true);

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void vec3b_test_2() {
    const Vec3b value = vec3b(true, vec2b(false, true));

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void vec3b_test_3() {
    const Vec3b value = vec3b(vec2b(true, false), true);

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3b_test_1);
    RUN_TEST(vec3b_test_2);
    RUN_TEST(vec3b_test_3);
    return UNITY_END();
}