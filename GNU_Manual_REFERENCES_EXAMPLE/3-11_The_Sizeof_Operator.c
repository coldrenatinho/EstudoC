#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static const int values[] = {1, 2, 48, 681};
#define ARRAYSIZE(x) (sizeof x / sizeof x[0]) // Recebe um array divide o tamananho total de bits do arrays pelo tamanho do elemento

int main(int argc, char *argsv[])
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

    size_t i;

    for (i = 0; i < ARRAYSIZE(values); i++) // Sabendo q quantidade de elementos da array se faz o uso dor for
    {
        printf("%d\n", values[i]);
    }

    return 0;
}