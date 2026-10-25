#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2u.h"

static void vec2u_test_1() {
    const Vec2u value = vec2u(0u, 1u);

    TEST_ASSERT_EQUAL_UINT(0u, value.x);
    TEST_ASSERT_EQUAL_UINT(1u, value.y);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2u_test_1);
    return UNITY_END();
}