#include <stdio.h>

int main()
{
    int i = 0;

    printf("Digite um valor menor ou igual a 20.\n");
    scanf("%d", &i);

    if (i < 0 || i > 20)
    {
        printf("Valor inválido: %d.\n", i);
    }
    else
    {
        while (i <= 20 && i >= 0)
        {
            printf("Hello %d.\n", i);
            i--;
        }
    }
    return 0;
}