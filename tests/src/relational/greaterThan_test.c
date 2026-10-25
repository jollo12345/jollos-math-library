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
#include "jml/relational/greaterThan.h"

static void greaterThan_test_vec2d_true() {
    const Vec2b value = greaterThan(
        vec2d(2.0, 4.0),
        vec2d(-5.0, -2.0)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void greaterThan_test_vec2d_false() {
    const Vec2b value = greaterThan(
        vec2d(-5.0, -2.0),
        vec2d(-5.0, 4.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void greaterThan_test_vec2d_mixed() {
    const Vec2b value = greaterThan(
        vec2d(-5.0, 4.0),
        vec2d(2.0, -2.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void greaterThan_test_vec2f_true() {
    const Vec2b value = greaterThan(
        vec2f(2.0f, 4.0f),
        vec2f(-5.0f, -2.0f)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void greaterThan_test_vec2f_false() {
    const Vec2b value = greaterThan(
        vec2f(-5.0f, -2.0f),
        vec2f(-5.0f, 4.0f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void greaterThan_test_vec2f_mixed() {
    const Vec2b value = greaterThan(
        vec2f(-5.0f, 4.0f),
        vec2f(2.0f, -2.0f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void greaterThan_test_vec2i_true() {
    const Vec2b value = greaterThan(
        vec2i(2, 4),
        vec2i(-5, -2)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void greaterThan_test_vec2i_false() {
    const Vec2b value = greaterThan(
        vec2i(-5, -2),
        vec2i(-5, 4)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void greaterThan_test_vec2i_mixed() {
    const Vec2b value = greaterThan(
        vec2i(-5, 4),
        vec2i(2, -2)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void greaterThan_test_vec2u_true() {
    const Vec2b value = greaterThan(
        vec2u(5u, 7u),
        vec2u(1u, 2u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void greaterThan_test_vec2u_false() {
    const Vec2b value = greaterThan(
        vec2u(1u, 2u),
        vec2u(1u, 7u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
}

static void greaterThan_test_vec2u_mixed() {
    const Vec2b value = greaterThan(
        vec2u(1u, 7u),
        vec2u(5u, 2u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
}

static void greaterThan_test_vec3d_true() {
    const Vec3b value = greaterThan(
        vec3d(2.0, 4.0, 6.0),
        vec3d(-5.0, -2.0, 1.0)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void greaterThan_test_vec3d_false() {
    const Vec3b value = greaterThan(
        vec3d(-5.0, -2.0, 1.0),
        vec3d(-5.0, 4.0, 1.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void greaterThan_test_vec3d_mixed() {
    const Vec3b value = greaterThan(
        vec3d(2.0, -2.0, 6.0),
        vec3d(-5.0, -2.0, 1.0)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void greaterThan_test_vec3f_true() {
    const Vec3b value = greaterThan(
        vec3f(2.0f, 4.0f, 6.0f),
        vec3f(-5.0f, -2.0f, 1.0f)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void greaterThan_test_vec3f_false() {
    const Vec3b value = greaterThan(
        vec3f(-5.0f, -2.0f, 1.0f),
        vec3f(-5.0f, 4.0f, 1.0f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void greaterThan_test_vec3f_mixed() {
    const Vec3b value = greaterThan(
        vec3f(2.0f, -2.0f, 6.0f),
        vec3f(-5.0f, -2.0f, 1.0f)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void greaterThan_test_vec3i_true() {
    const Vec3b value = greaterThan(
        vec3i(2, 4, 6),
        vec3i(-5, -2, 1)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void greaterThan_test_vec3i_false() {
    const Vec3b value = greaterThan(
        vec3i(-5, -2, 1),
        vec3i(-5, 4, 1)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void greaterThan_test_vec3i_mixed() {
    const Vec3b value = greaterThan(
        vec3i(2, -2, 6),
        vec3i(-5, -2, 1)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void greaterThan_test_vec3u_true() {
    const Vec3b value = greaterThan(
        vec3u(5u, 7u, 6u),
        vec3u(1u, 2u, 3u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void greaterThan_test_vec3u_false() {
    const Vec3b value = greaterThan(
        vec3u(1u, 2u, 3u),
        vec3u(1u, 7u, 3u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
}

static void greaterThan_test_vec3u_mixed() {
    const Vec3b value = greaterThan(
        vec3u(5u, 2u, 6u),
        vec3u(1u, 2u, 3u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_TRUE(value.z);
}

static void greaterThan_test_vec4d_true() {
    const Vec4b value = greaterThan(
        vec4d(2.0, 4.0, 6.0, 8.0),
        vec4d(-5.0, -2.0, 1.0, 3.0)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void greaterThan_test_vec4d_false() {
    const Vec4b value = greaterThan(
        vec4d(-5.0, -2.0, 1.0, 3.0),
        vec4d(-5.0, 4.0, 1.0, 8.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void greaterThan_test_vec4d_mixed() {
    const Vec4b value = greaterThan(
        vec4d(-5.0, 4.0, 6.0, 3.0),
        vec4d(2.0, -2.0, 1.0, 3.0)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void greaterThan_test_vec4f_true() {
    const Vec4b value = greaterThan(
        vec4f(2.0f, 4.0f, 6.0f, 8.0f),
        vec4f(-5.0f, -2.0f, 1.0f, 3.0f)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void greaterThan_test_vec4f_false() {
    const Vec4b value = greaterThan(
        vec4f(-5.0f, -2.0f, 1.0f, 3.0f),
        vec4f(-5.0f, 4.0f, 1.0f, 8.0f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void greaterThan_test_vec4f_mixed() {
    const Vec4b value = greaterThan(
        vec4f(-5.0f, 4.0f, 6.0f, 3.0f),
        vec4f(2.0f, -2.0f, 1.0f, 3.0f)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void greaterThan_test_vec4i_true() {
    const Vec4b value = greaterThan(
        vec4i(2, 4, 6, 8),
        vec4i(-5, -2, 1, 3)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void greaterThan_test_vec4i_false() {
    const Vec4b value = greaterThan(
        vec4i(-5, -2, 1, 3),
        vec4i(-5, 4, 1, 8)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void greaterThan_test_vec4i_mixed() {
    const Vec4b value = greaterThan(
        vec4i(-5, 4, 6, 3),
        vec4i(2, -2, 1, 3)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void greaterThan_test_vec4u_true() {
    const Vec4b value = greaterThan(
        vec4u(5u, 7u, 6u, 9u),
        vec4u(1u, 2u, 3u, 4u)
    );

    TEST_ASSERT_TRUE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_TRUE(value.w);
}

static void greaterThan_test_vec4u_false() {
    const Vec4b value = greaterThan(
        vec4u(1u, 2u, 3u, 4u),
        vec4u(1u, 7u, 3u, 9u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_FALSE(value.y);
    TEST_ASSERT_FALSE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

static void greaterThan_test_vec4u_mixed() {
    const Vec4b value = greaterThan(
        vec4u(1u, 7u, 6u, 4u),
        vec4u(5u, 2u, 3u, 4u)
    );

    TEST_ASSERT_FALSE(value.x);
    TEST_ASSERT_TRUE(value.y);
    TEST_ASSERT_TRUE(value.z);
    TEST_ASSERT_FALSE(value.w);
}

void setUp() {}

void tearDown() {}

int main(int argc, char* argv[]) {
    UNITY_BEGIN();

    RUN_TEST(greaterThan_test_vec2d_true);
    RUN_TEST(greaterThan_test_vec2d_false);
    RUN_TEST(greaterThan_test_vec2d_mixed);

    RUN_TEST(greaterThan_test_vec2f_true);
    RUN_TEST(greaterThan_test_vec2f_false);
    RUN_TEST(greaterThan_test_vec2f_mixed);

    RUN_TEST(greaterThan_test_vec2i_true);
    RUN_TEST(greaterThan_test_vec2i_false);
    RUN_TEST(greaterThan_test_vec2i_mixed);

    RUN_TEST(greaterThan_test_vec2u_true);
    RUN_TEST(greaterThan_test_vec2u_false);
    RUN_TEST(greaterThan_test_vec2u_mixed);

    RUN_TEST(greaterThan_test_vec3d_true);
    RUN_TEST(greaterThan_test_vec3d_false);
    RUN_TEST(greaterThan_test_vec3d_mixed);

    RUN_TEST(greaterThan_test_vec3f_true);
    RUN_TEST(greaterThan_test_vec3f_false);
    RUN_TEST(greaterThan_test_vec3f_mixed);

    RUN_TEST(greaterThan_test_vec3i_true);
    RUN_TEST(greaterThan_test_vec3i_false);
    RUN_TEST(greaterThan_test_vec3i_mixed);

    RUN_TEST(greaterThan_test_vec3u_true);
    RUN_TEST(greaterThan_test_vec3u_false);
    RUN_TEST(greaterThan_test_vec3u_mixed);

    RUN_TEST(greaterThan_test_vec4d_true);
    RUN_TEST(greaterThan_test_vec4d_false);
    RUN_TEST(greaterThan_test_vec4d_mixed);

    RUN_TEST(greaterThan_test_vec4f_true);
    RUN_TEST(greaterThan_test_vec4f_false);
    RUN_TEST(greaterThan_test_vec4f_mixed);

    RUN_TEST(greaterThan_test_vec4i_true);
    RUN_TEST(greaterThan_test_vec4i_false);
    RUN_TEST(greaterThan_test_vec4i_mixed);

    RUN_TEST(greaterThan_test_vec4u_true);
    RUN_TEST(greaterThan_test_vec4u_false);
    RUN_TEST(greaterThan_test_vec4u_mixed);

    return UNITY_END();
}