#include <stdio.h>
#include "add.h"

int main() {
    int x = 5, y = 7;
    int result = add(x, y);

    printf("Result of add(%d, %d) = %d\n", x, y, result);

    return 0;
}
