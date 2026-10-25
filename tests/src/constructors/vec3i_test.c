#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2i.h"
#include "jml/constructors/vec3i.h"

static void vec3i_test_1() {
    const Vec3i value = vec3i(0, 1, 2);

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
}

static void vec3i_test_2() {
    const Vec3i value = vec3i(0, vec2i(1, 2));

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
}

static void vec3i_test_3() {
    const Vec3i value = vec3i(vec2i(0, 1), 2);

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
    TEST_ASSERT_EQUAL_INT(2, value.z);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec3i_test_1);
    RUN_TEST(vec3i_test_2);
    RUN_TEST(vec3i_test_3);
    return UNITY_END();
}