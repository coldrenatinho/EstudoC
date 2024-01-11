/*
Renato Arajo da Silva
Execício IF
10/01/2024
*/

/*
3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a
cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber
quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de
poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com
base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular
os dados solicitados.
*/

#include <stdio.h>
#include <stdlib.h>

#define paozinho 0.12
#define broa 1.50
#define Moeda "R$"

int QtdP = 0;
int QtdB = 0;
float TotalVenda = 0;

int main()
{
    printf("Digite a quantidade paeszinhos vendidos:\n");
    scanf("%d", &QtdP);
    printf("Digite a quantidade de broas vendidas:\n");
    scanf("%d", &QtdB);
    TotalVenda = paozinho * QtdP + broa * QtdB;
    printf("Total Vendas: %s %.2f\n\n", Moeda, TotalVenda);
    printf("Valor a ser guardado %s %f", Moeda, TotalVenda * 10 / 100);
    return 0;
}