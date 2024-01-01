#include <stdio.h>

int main()
{

    int v;
    v = 0;

    printf("O Programa a seguir mostra o dia de semana por extenso:\n\nDigite um valor:\n");
    scanf("%d", &v);

    switch (v)
    {
    case 2:
        printf("Segunda-feira.\n");
        break;

    case 3:
        printf("Terça-feira.\n");
        break;

    case 4:
        printf("Quarta-feira.\n");
        break;

    case 5:
        printf("Quinta-feira.\n");
        break;

    case 6:
        printf("Sexta-feira.\n");
        break;

    case 7:
        printf("Sábado.\n");
        break;

    case 1:
        printf("Domingo.\n");
        break;

    default:
        if (v < 1)
        {
            printf("O Valor digitado é menor que um: %d\n", v);
        }
        else
            printf("Valor é maior que 7: %d.\n", v);

        return 0;
    }
}