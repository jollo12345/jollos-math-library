#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2b.h"
#include "jml/constructors/vec3b.h"

static void vec3b_test_1() {
    Vec3b value = vec3b(true, false, true);

    TEST_ASSERT_EQUAL_CHAR(true, value.x);
    TEST_ASSERT_EQUAL_CHAR(false, value.y);
    TEST_ASSERT_EQUAL_CHAR(true, value.z);
}

static void vec3b_test_2() {
    Vec3b value = vec3b(true, vec2b(false, true));

    TEST_ASSERT_EQUAL_CHAR(true, value.x);
    TEST_ASSERT_EQUAL_CHAR(false, value.y);
    TEST_ASSERT_EQUAL_CHAR(true, value.z);
}

static void vec3b_test_3() {
    Vec3b value = vec3b(vec2b(true, false), true);

    TEST_ASSERT_EQUAL_CHAR(true, value.x);
    TEST_ASSERT_EQUAL_CHAR(false, value.y);
    TEST_ASSERT_EQUAL_CHAR(true, value.z);
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