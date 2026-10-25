#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"

static void vec2d_test_1() {
    const Vec2d value = vec2d(0.0, 1.0);

    TEST_ASSERT_EQUAL_DOUBLE(0.0, value.x);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, value.y);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2d_test_1);
    return UNITY_END();
}