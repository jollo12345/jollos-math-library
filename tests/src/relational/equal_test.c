#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/constructors/vec2d.h"
#include "jml/constructors/vec2f.h"
#include "jml/constructors/vec2i.h"
#include "jml/constructors/vec2u.h"
#include "jml/constructors/vec3d.h"
#include "jml/constructors/vec3f.h"
#include "jml/constructors/vec3i.h"
#include "jml/constructors/vec3u.h"
#include "jml/constructors/vec4d.h"
#include "jml/constructors/vec4f.h"
#include "jml/constructors/vec4i.h"
#include "jml/constructors/vec4u.h"
#include "jml/relational/equal.h"

static void equal_test_vec2d_true() {
    const Vec2b value = equal(
        vec2d(1.0, 2.0),
        vec2d(1.0, 2.0)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void equal_test_vec2d_false() {
    const Vec2b value = equal(
        vec2d(-2.0, 2.0),
        vec2d(1.0, 3.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void equal_test_vec2d_mixed() {
    const Vec2b value = equal(
        vec2d(-2.0, 2.0),
        vec2d(1.0, 2.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void equal_test_vec2f_true() {
    const Vec2b value = equal(
        vec2f(6.f, 3.f),
        vec2f(6.f, 3.f)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void equal_test_vec2f_false() {
    const Vec2b value = equal(
        vec2f(6.f, 3.f),
        vec2f(1.f, 0.f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void equal_test_vec2f_mixed() {
    const Vec2b value = equal(
        vec2f(3.f, 4.f),
        vec2f(3.f, 7.f)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void equal_test_vec2i_true() {
    const Vec2b value = equal(
        vec2i(1, 7),
        vec2i(1, 7)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void equal_test_vec2i_false() {
    const Vec2b value = equal(
        vec2i(1, 7),
        vec2i(2, 8)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void equal_test_vec2i_mixed() {
    const Vec2b value = equal(
        vec2i(2, 3),
        vec2i(2, 4)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void equal_test_vec2u_true() {
    const Vec2b value = equal(
        vec2u(8u, 9u),
        vec2u(8u, 9u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void equal_test_vec2u_false() {
    const Vec2b value = equal(
        vec2u(2u, 5u),
        vec2u(4u, 8u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void equal_test_vec2u_mixed() {
    const Vec2b value = equal(
        vec2u(3u, 3u),
        vec2u(2u, 3u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void equal_test_vec3d_true() {
    const Vec3b value = equal(
        vec3d(1.0, 2.0, 3.0),
        vec3d(1.0, 2.0, 3.0)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void equal_test_vec3d_false() {
    const Vec3b value = equal(
        vec3d(1.0, 2.0, 3.0),
        vec3d(0.0, 1.0, 2.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void equal_test_vec3d_mixed() {
    const Vec3b value = equal(
        vec3d(3.0, 5.0, 3.0),
        vec3d(3.0, 2.0, 3.0)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void equal_test_vec3f_true() {
    const Vec3b value = equal(
        vec3f(2.f, 5.f, 1.f),
        vec3f(2.f, 5.f, 1.f)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void equal_test_vec3f_false() {
    const Vec3b value = equal(
        vec3f(2.f, 4.f, 3.f),
        vec3f(3.f, 3.f, 1.f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void equal_test_vec3f_mixed() {
    const Vec3b value = equal(
        vec3f(4.f, 2.f, 4.f),
        vec3f(3.f, 2.f, 4.f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void equal_test_vec3i_true() {
    const Vec3b value = equal(
        vec3i(4, 2, 1),
        vec3i(4, 2, 1)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void equal_test_vec3i_false() {
    const Vec3b value = equal(
        vec3i(4, 3, 8),
        vec3i(2, 4, 3)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void equal_test_vec3i_mixed() {
    const Vec3b value = equal(
        vec3i(2, 3, 4),
        vec3i(2, 5, 4)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void equal_test_vec3u_true() {
    const Vec3b value = equal(
        vec3u(1u, 2u, 7u),
        vec3u(1u, 2u, 7u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void equal_test_vec3u_false() {
    const Vec3b value = equal(
        vec3u(4u, 3u, 8u),
        vec3u(2u, 4u, 3u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void equal_test_vec3u_mixed() {
    const Vec3b value = equal(
        vec3u(8u, 7u, 2u),
        vec3u(8u, 4u, 3u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void equal_test_vec4d_true() {
    const Vec4b value = equal(
        vec4d(1.0, 2.0, 3.0, 4.0),
        vec4d(1.0, 2.0, 3.0, 4.0)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void equal_test_vec4d_false() {
    const Vec4b value = equal(
        vec4d(1.0, 2.0, 3.0, 5.0),
        vec4d(9.0, 1.0, 7.0, 4.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void equal_test_vec4d_mixed() {
    const Vec4b value = equal(
        vec4d(1.0, 2.0, 2.0, 6.0),
        vec4d(4.0, 2.0, 2.0, 4.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void equal_test_vec4f_true() {
    const Vec4b value = equal(
        vec4f(2.f, 6.f, 7.f, 5.f),
        vec4f(2.f, 6.f, 7.f, 5.f)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void equal_test_vec4f_false() {
    const Vec4b value = equal(
        vec4f(1.f, 7.f, 3.f, 6.f),
        vec4f(2.f, 2.f, 4.f, 4.f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void equal_test_vec4f_mixed() {
    const Vec4b value = equal(
        vec4f(-2.f, 2.f, 4.f, 1.f),
        vec4f(1.f, 2.f, 4.f, 3.f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void equal_test_vec4i_true() {
    const Vec4b value = equal(
        vec4i(4, 5, 6, 8),
        vec4i(4, 5, 6, 8)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void equal_test_vec4i_false() {
    const Vec4b value = equal(
        vec4i(1, 6, 3, 5),
        vec4i(2, 2, 2, 4)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void equal_test_vec4i_mixed() {
    const Vec4b value = equal(
        vec4i(-2, 2, 3, 4),
        vec4i(1, 2, 6, 4)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void equal_test_vec4u_true() {
    const Vec4b value = equal(
        vec4u(1u, 2u, 3u, 4u),
        vec4u(1u, 2u, 3u, 4u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void equal_test_vec4u_false() {
    const Vec4b value = equal(
        vec4u(2u, 3u, 4u, 5u),
        vec4u(1u, 2u, 3u, 4u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void equal_test_vec4u_mixed() {
    const Vec4b value = equal(
        vec4u(1u, 2u, 6u, 4u),
        vec4u(1u, 2u, 3u, 4u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(equal_test_vec2d_true);
    RUN_TEST(equal_test_vec2d_false);
    RUN_TEST(equal_test_vec2d_mixed);

    RUN_TEST(equal_test_vec2f_true);
    RUN_TEST(equal_test_vec2f_false);
    RUN_TEST(equal_test_vec2f_mixed);

    RUN_TEST(equal_test_vec2i_true);
    RUN_TEST(equal_test_vec2i_false);
    RUN_TEST(equal_test_vec2i_mixed);

    RUN_TEST(equal_test_vec2u_true);
    RUN_TEST(equal_test_vec2u_false);
    RUN_TEST(equal_test_vec2u_mixed);

    RUN_TEST(equal_test_vec3d_true);
    RUN_TEST(equal_test_vec3d_false);
    RUN_TEST(equal_test_vec3d_mixed);

    RUN_TEST(equal_test_vec3f_true);
    RUN_TEST(equal_test_vec3f_false);
    RUN_TEST(equal_test_vec3f_mixed);

    RUN_TEST(equal_test_vec3i_true);
    RUN_TEST(equal_test_vec3i_false);
    RUN_TEST(equal_test_vec3i_mixed);

    RUN_TEST(equal_test_vec3u_true);
    RUN_TEST(equal_test_vec3u_false);
    RUN_TEST(equal_test_vec3u_mixed);

    RUN_TEST(equal_test_vec4d_true);
    RUN_TEST(equal_test_vec4d_false);
    RUN_TEST(equal_test_vec4d_mixed);

    RUN_TEST(equal_test_vec4f_true);
    RUN_TEST(equal_test_vec4f_false);
    RUN_TEST(equal_test_vec4f_mixed);

    RUN_TEST(equal_test_vec4i_true);
    RUN_TEST(equal_test_vec4i_false);
    RUN_TEST(equal_test_vec4i_mixed);

    RUN_TEST(equal_test_vec4u_true);
    RUN_TEST(equal_test_vec4u_false);
    RUN_TEST(equal_test_vec4u_mixed);

    return UNITY_END();
}