#include <stdio.h>
#include <stdlib.h>

// Type Cast

int main()
{
    float x;
    int y = 7;
    int z = 3;
    x = (y / (float)z);

    printf("%f\n", x);

    return 0;
}