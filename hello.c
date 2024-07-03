#include <stdio.h>
#include "header/myheader.h"

int main()
{
    int endKey = 1;

    while (endKey != 0)
    {
        greet();

        int sum = add(3, 4);

        printf("Sum: %d\n", sum);

        printf("\n\nPress 0 key to close...");

        if (scanf_s("%d", &endKey) != 1) // 1 being a success return value.
        {

            while (getchar() != '\n'); // Clear input buffer

            endKey = 1;
        }
    }
    return 0;
}
