#include <unity.h>

#include "jml/jml.h"

void setUp() {
}

void tearDown() {
}

void firstTest() {
    JML_Mat3x3f a = JML_mat3x3f(
        1.f, 0.f, 0.f,
        0.f, 1.f, 0.f,
        0.f, 0.f, 1.f
    );
    TEST_ASSERT_EQUAL_FLOAT(a.m00, 1.f);
    TEST_ASSERT_EQUAL_FLOAT(a.m01, 0.f);
}

int main(int argc, char* argv[]) {
    RUN_TEST(firstTest);
    return 0;
}