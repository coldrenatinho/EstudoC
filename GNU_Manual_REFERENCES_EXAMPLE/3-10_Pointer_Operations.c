#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *pointer_to_x = &x;

    printf("Valor armazenado na variável x: %d\n", x);
    printf("Valor apontado pelo ponteiro pointer_to_x: %d\n", *pointer_to_x);
    printf("Endereço da variável x: %p\n", (void *)&x);
    printf("Endereço armazenado no ponteiro pointer_to_x: %p\n", (void *)pointer_to_x);

    return 0;
}
