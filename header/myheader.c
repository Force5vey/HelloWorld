#include <stdio.h>
#include "myheader.h"

void greet()
{
    printf("Hellow from a function in a header file, My Header.\n\n");
}

int add(int a, int b)
{
    return a + b;
}