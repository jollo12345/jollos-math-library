#ifndef JML_TESTS_UTIL_H
#define JML_TESTS_UTIL_H

#include <unity.h>

#define INIT_BOOL_ARRAY(data, count)                    \
    do {                                                \
        for (int index = 0; index < (count); ++index) { \
            (data)[index] = rand() % 2 != 0;            \
        }                                               \
    } while (0)

#define INIT_DOUBLE_ARRAY(data, count)                  \
    do {                                                \
        for (int index = 0; index < (count); ++index) { \
            (data)[index] = (double)rand();             \
        }                                               \
    } while (0)

#define INIT_FLOAT_ARRAY(data, count)                   \
    do {                                                \
        for (int index = 0; index < (count); ++index) { \
            (data)[index] = (float)rand();              \
        }                                               \
    } while (0)

#define INIT_INT_ARRAY(data, count)                     \
    do {                                                \
        for (int index = 0; index < (count); ++index) { \
            (data)[index] = (int)rand();                \
        }                                               \
    } while (0)

#define INIT_UNSIGNED_ARRAY(data, count)                \
    do {                                                \
        for (int index = 0; index < (count); ++index) { \
            (data)[index] = (unsigned)rand();           \
        }                                               \
    } while (0)

#endif  // JML_TESTS_UTIL_H