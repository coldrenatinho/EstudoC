/*
Renato Arajo da Silva
Execício IF
10/01/2024
*/

/*
2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.
*/
#include <stdio.h>
#include <stdlib.h>

#define Ferraduras 4

int QuantidadeCavalo = 0;
int S = 0;
int main()
{
    printf("Digite a quantidade de cavalos comprados:\n");
    scanf("%d", &QuantidadeCavalo);
    S = QuantidadeCavalo * Ferraduras;
    printf("Quatidade necessária de ferraduras para %d cavalos é igual ha: %d.\n", &QuantidadeCavalo, S);

    return 0;
}