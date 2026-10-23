#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2f.h"

static void vec2f_test_1() {
    Vec2f value = vec2f(0.f, 1.f);

    TEST_ASSERT_EQUAL_FLOAT(0.f, value.x);
    TEST_ASSERT_EQUAL_FLOAT(1.f, value.y);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();
    RUN_TEST(vec2f_test_1);
    return UNITY_END();
}