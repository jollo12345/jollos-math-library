#include <unity.h>

#include "jml/tests/common.h"

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2b.h"
#include "jml/constructors/vec3b.h"
#include "jml/constructors/vec4b.h"
#include "jml/relational/any.h"

static void any_test_vec2b() {
    TEST_ASSERT_TRUE(any(vec2b(true, true)));
    TEST_ASSERT_TRUE(any(vec2b(false, true)));
    TEST_ASSERT_TRUE(any(vec2b(true, false)));
    TEST_ASSERT_FALSE(any(vec2b(false, false)));
}

static void any_test_vec3b() {
    TEST_ASSERT_TRUE(any(vec3b(true, true, true)));
    TEST_ASSERT_TRUE(any(vec3b(true, false, false)));
    TEST_ASSERT_TRUE(any(vec3b(false, true, false)));
    TEST_ASSERT_TRUE(any(vec3b(false, false, true)));
    TEST_ASSERT_FALSE(any(vec3b(false, false, false)));
}

static void any_test_vec4b() {
    TEST_ASSERT_TRUE(any(vec4b(true, true, true, true)));
    TEST_ASSERT_TRUE(any(vec4b(true, false, false, false)));
    TEST_ASSERT_TRUE(any(vec4b(false, true, false, false)));
    TEST_ASSERT_TRUE(any(vec4b(false, false, true, false)));
    TEST_ASSERT_TRUE(any(vec4b(false, false, false, true)));
    TEST_ASSERT_FALSE(any(vec4b(false, false, false, false)));
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(any_test_vec2b);
    RUN_TEST(any_test_vec3b);
    RUN_TEST(any_test_vec4b);
    return UNITY_END();
}