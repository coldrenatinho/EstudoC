#include <stdio.h>
#include <stdlib.h>

int main()
{

    size_t a = sizeof(int);
    size_t b = sizeof(float);
    size_t c = sizeof(5);
    size_t d = sizeof(5.143);
    size_t e = sizeof a;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);

    return 0;
}