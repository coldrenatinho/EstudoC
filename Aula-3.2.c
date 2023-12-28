#include <stdio.h>

int main()
{
    int a, b, soma, sub;
    float div, mult;

    printf("Digite o valor para \'a\':\n");
    scanf("%d", &a);

    printf("Digite o valor para \'B\':\n");
    scanf("%d", &b);

    soma = a + b;
    sub = a - b;
    div = a / b;
    mult = a * b;

    printf("Valor da operação de adicição:\n %d \n", soma);
    printf("Valor da operação de subtração:\n %d \n", sub);
    printf("Valor da operação de divisão:\n %.2f \n", div);
    printf("Valor da operação de multiplicação:\n %.2f \n", mult);

    printf("O programa foi executando com exeto!\n\n");

    return 0;
}