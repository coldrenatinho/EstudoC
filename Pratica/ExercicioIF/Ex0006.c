/*
Renato Araujo da Silva 12/01/2024
Lista de exercícios IF
*/

/*
6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo
que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a
balança já desconte o peso do prato.
*/

#include <stdio.h>
#include <stdlib.h>

#define ValorRefeicao 12.00

float TaraPrato = 0.350;
float Pesagem = 0;

int main()
{

    printf("Digite o peso do prato:\n");
    scanf("%f", &Pesagem);
    printf("Valor a ser pago:\t R$%.2f", (Pesagem - TaraPrato) * ValorRefeicao);
    return 0;
}