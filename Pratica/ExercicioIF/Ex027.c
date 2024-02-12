/*
27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número
pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto não é necessário se
preocupar com validações.
*/

#include <stdio.h>

int main()
{

    int x, y;
    x = 0;
    y = 0;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &x);

    printf("Digite o segundo valor:\n");
    scanf("%d", &y);

    if (y == 0)
    {
        printf("Valor inválido");
        return 0;
    }
    printf("Valor da divisão de %d por %d igual a: %f", x, y, (float)x / y);
}