#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2b.h"
#include "jml/constructors/vec3b.h"
#include "jml/constructors/vec4b.h"
#include "jml/relational/all.h"

static void all_test_vec2b() {
    TEST_ASSERT_TRUE(all(vec2b(true, true)));
    TEST_ASSERT_FALSE(all(vec2b(false, true)));
    TEST_ASSERT_FALSE(all(vec2b(true, false)));
    TEST_ASSERT_FALSE(all(vec2b(false, false)));
}

static void all_test_vec3b() {
    TEST_ASSERT_TRUE(all(vec3b(true, true, true)));
    TEST_ASSERT_FALSE(all(vec3b(false, true, true)));
    TEST_ASSERT_FALSE(all(vec3b(true, false, true)));
    TEST_ASSERT_FALSE(all(vec3b(true, true, false)));
    TEST_ASSERT_FALSE(all(vec3b(false, false, false)));
}

static void all_test_vec4b() {
    TEST_ASSERT_TRUE(all(vec4b(true, true, true, true)));
    TEST_ASSERT_FALSE(all(vec4b(false, true, true, true)));
    TEST_ASSERT_FALSE(all(vec4b(true, false, true, true)));
    TEST_ASSERT_FALSE(all(vec4b(true, true, false, true)));
    TEST_ASSERT_FALSE(all(vec4b(true, true, true, false)));
    TEST_ASSERT_FALSE(all(vec4b(false, false, false, false)));
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(all_test_vec2b);
    RUN_TEST(all_test_vec3b);
    RUN_TEST(all_test_vec4b);
    return UNITY_END();
}