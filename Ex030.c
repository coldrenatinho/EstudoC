/*30. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um
algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a
comissão e o salário final do funcionário.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    float valorSalario = 0;
    float valorComissao = 0;
    float valorVendas = 0;

    printf("Digite o valor do salario do funcionario:\n");
    scanf("%f", &valorSalario);
    printf("Digite o valor de venda do funcionario:\n");
    scanf("%f", &valorVendas);
    valorComissao = valorVendas * 4 / 100;
    printf("Total de comissão: %f\tTotal a ser pago: %f\n", valorComissao, valorComissao + valorSalario);
}