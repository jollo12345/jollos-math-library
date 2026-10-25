#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2i.h"

static void vec2i_test_1() {
    const Vec2i value = vec2i(0, 1);

    TEST_ASSERT_EQUAL_INT(0, value.x);
    TEST_ASSERT_EQUAL_INT(1, value.y);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2i_test_1);
    return UNITY_END();
}