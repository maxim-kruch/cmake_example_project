#include <stdio.h>
#include "header.h"
#include "lib.c"

int main() {
    printf("Hello World!\n");
    printf("%i\n", add(1, 1));
    printf("%i\n", sub(1, 1));
    return 0;
}