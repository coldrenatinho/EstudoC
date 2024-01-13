/*
Renato Araujo da Silva 12/01/2024
Lista de exercícios IF
*/

/*
4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida
ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa
com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935
DIAS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ano 365
struct Pessoa
{
    int Idade;
    char Nome[200];
};

int main()
{
    struct Pessoa PessoaVar = {0, ""};

    printf("Digite seu nome:\n");
    fgets(PessoaVar.Nome, sizeof(PessoaVar.Nome), stdin);
    printf("Digite sua idade em anos:\n");
    scanf("%d", &PessoaVar.Idade);
    printf("%s Já viveu %d dias !\n", PessoaVar.Nome, PessoaVar.Idade * ano);

    if (PessoaVar.Idade = 22)
    {
        puts("\n8.000 dias na Terra e ainda não encontrei razão\nNem todo sorriso é feliz, nem todo choro é triste\nNem toda saudade é má, nem toda fé persiste");
    }
    return 0;
}