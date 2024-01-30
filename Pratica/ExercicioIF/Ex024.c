/*
24. Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se fazer X
litros de refresco (informados pelo usuário).
*/
#include <stdio.h>

int main()
{

    float xLitros = 0.0;
    // float sLitrosAgua = 0.0;
    // float sLitrosSuco = 0.0;

    printf("Digite a quantidade de sudo desejada: \n");
    scanf("%f", &xLitros);
    printf("Total de litros de agua: %f\n", xLitros * 0.75);
    printf("Total de litros de suco: %f\n", xLitros * 0.25);
}