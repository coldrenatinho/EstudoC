#include <stdio.h>
#include "second.h"

int main()
{

    int a = 1;
    int b = 5;

    int s = sum(a, b);
    printf("%d\n", s);

    s = sub(a, b);
    printf("%d\n", s);

    s = div(a, b);
    printf("%d\n", s);
    return 0;
}