#include <stdlib.h>
#include <unity.h>

#define JML_WITHOUT_PREFIX
#include "jml/jml.h"

/* Checks if including all files in the library creates any compiler errors to
 * make sure there are no basic syntax errors. Also allows gcovr to pick up on
 * all unused files in the coverage report. */

int main(int argc, char* argv[]) {
    return 0;
}