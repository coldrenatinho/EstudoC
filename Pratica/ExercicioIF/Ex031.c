/*31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    float pesoAtual = 0;
    float pesoAumentoPercentual = 0;
    float pesoReducaoPercentual = 0;

    printf("Digite o peso atual:\n");
    scanf("%f", &pesoAtual);
    pesoAumentoPercentual = pesoAtual + pesoAtual * 15 / 100;
    printf("Peso caso o usuário engorde em 15%% será de %f\n", pesoAumentoPercentual);
    pesoReducaoPercentual = pesoAtual - pesoAtual * 20 / 100;
    printf("Peso caso o usuário aumente seu peso em 20%% %f\n", pesoReducaoPercentual);
}