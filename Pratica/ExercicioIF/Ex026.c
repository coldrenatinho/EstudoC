/*
26. Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números.
*/

#include <stdio.h>

int main()
{

    int x = 0;
    int y = 0;
    int z = 0;

    printf("Digite trêz valores: x, y, z\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("O valor da multiplicação é igual há: %d\n", x * y * z);
}