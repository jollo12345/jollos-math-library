#ifndef JML_UTIL_H
#define JML_UTIL_H

#define JML_NARGS_HELPER(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, N, ...) N
#define JML_NARGS(...) JML_NARGS_HELPER(__VA_ARGS__, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

#define JML_CONCAT(a, b) a##b
#define JML_CONCAT_EXPAND(a, b) JML_CONCAT(a, b)

#define JML_DISPATCH(macro, ...) macro(__VA_ARGS__)

void JML_INVALID_ARGUMENT_TYPES();

#endif