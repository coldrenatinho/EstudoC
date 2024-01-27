/*
12. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento,
desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final.
*/

#include <stdio.h>
#include <string.h>

struct Funcionario
{
    char Nome[200];
    float SalarioInicial;
    float salaioAumento;
    float salarioFinal;
};

int main()
{

    float aumtP, amr;
    aumtP = 0;
    amr = 0;

    int qauntidadeFuncionario = 0;

    printf("Digite a quantidade de Funcionario:\n");
    scantf("%d", &qauntidadeFuncionario);

    struct Funcionario funcionario[qauntidadeFuncionario];

    for (int i = 0; i < qauntidadeFuncionario; i++)
    {
        funcionario[i].Nome = "";
        funcionario[i].SalarioInicial = 0;
        funcionario[i].SalarioAumento = 0;
        funcionario[i].SalarioFinal = 0;
    }

    printf("Digite a porcentagem de Aumento:\t\n");
    scatf("%d", &);
    printf("Digite a porcentagem de Amor:\t\n");

    for (int i = 0; i < qauntidadeFuncionario; i++)
    {

        printf("Digite o nome do funcionario:\n");
        fgets(funcionario[i].Nome, sizeof(funcionario[i].Nome), stdim);
        fflush(stdin);
        printf("Digite o salario atualdo do funcionario: %s\n", funcionario[i].Nome);
        scanf("%f", funcionario[i].SalarioInicial);
    }

    do
    {
        printf("Digite")
    }
}