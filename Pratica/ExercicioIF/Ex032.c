/*32. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso
em gramas.*/

#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argc[])
{
    float pesoAtual = 0;

    printf("Digite o peso atual\n");
    scanf("%f", &pesoAtual);
    printf("Peso em gramas: %.4fg\n", pesoAtual * 100);
}