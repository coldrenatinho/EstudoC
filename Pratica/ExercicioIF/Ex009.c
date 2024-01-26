/*
  9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a
quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a máquina
informe quanto será o valor arrecadado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limparTela()
{
    printf("\e[1;1H\e[2J");
}

int main()
{

    float p, m, g;
    p = 10.00;
    m = 12.00;
    g = 15.00;

    float ValorTotal = 0;
    int x = 0;
    int sc = 200;

    do
    {
        printf("Digite o produto desejado\n"
               "[0] - Camiseta 'P'\n"
               "[1] - Camiseta 'M'\n"
               "[2] - Camiseta 'G'\n"
               "[9] - Sair\n"
               "---------------------\n");

        printf("Digite o produto:\n");
        scanf("%d", &sc);

        switch (sc)
        {
        case 0:
            printf("Digite a quantidade de camisetas do Tamanho 'P'\t");
            scanf("%d", &x);
            ValorTotal += x * p;
            break;

        case 1:
            printf("Digite a quantidade de camisetas do Tamanho 'M'\t");
            scanf("%d", &x);
            ValorTotal += x * m;
            break;

        case 2:
            printf("Digite a quantidade de camisetas do Tamanho 'G'\t");
            scanf("%d", &x);
            ValorTotal += x * g;
            break;
        case 9:
            sc = 9;
        }
    } while (sc != 9);

    printf("Valor Total:\t R$%.2f", ValorTotal);
}