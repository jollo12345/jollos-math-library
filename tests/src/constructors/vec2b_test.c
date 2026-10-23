#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2b.h"

static void vec2b_test_1() {
    Vec2b value = vec2b(true, false);

    TEST_ASSERT_EQUAL_CHAR(true, value.x);
    TEST_ASSERT_EQUAL_CHAR(false, value.y);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2b_test_1);
    return UNITY_END();
}