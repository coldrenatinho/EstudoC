/*
Renato Araujo da Silva 12/01/2024
Lista de exercícios IF
*/

/*
5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o
preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no
tanque.
*/

#include <stdio.h>
#include <stdlib.h>

float ValorGasolina = 0.0;
float ValorPagamento = 0.0;

int main()
{

    printf("Digite o valor do litro de gasolina:\n");
    scanf("%f", &ValorGasolina);
    printf("Digite o valor a ser pago:\n");
    scanf("%f", &ValorPagamento);
    printf("Quantidade de listra a ser abastecido: %.4fL\n", ValorPagamento / ValorGasolina);
}