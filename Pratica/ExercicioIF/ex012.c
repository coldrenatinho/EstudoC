/*
12. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento,
desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final.
*/

#include <stdio.h>
#include <string.h>

struct Funcionario
{
    char Nome[200];
    float salarioInicial;
    float salarioAumento;
    float salarioFinal;
};

void f_calculaAumentoSalario(struct Funcionario *funcionario, int cq, float aumentoP, float descontoR)
{

    for (int i = 0; i < cq; i++)
    {
        funcionario[i].salarioAumento = funcionario[i].salarioInicial * (aumentoP / 100.0) + funcionario[i].salarioInicial;
        funcionario[i].salarioFinal = funcionario[i].salarioAumento - funcionario[i].salarioAumento * (descontoR / 100.0);
    }
}

void f_mostraResultado(struct Funcionario *funcionario, int rq)
{
    for (int i = 0; i < rq; i++)
    {
        printf(
            "Funcionario: %s\n Salario Inicial:\t %f\t Reajuste salario:\t %f\t Salario Final: %f\t",
            funcionario[i].Nome, funcionario[i].salarioInicial, funcionario[i].salarioAumento, funcionario[i].salarioFinal);
    }
}

int main()
{

    float aumtP, amr;
    aumtP = 0;
    amr = 0;

    int qauntidadeFuncionario = 0;

    printf("Digite a quantidade de Funcionario:\n");
    scanf("%d", &qauntidadeFuncionario);

    struct Funcionario funcionario[qauntidadeFuncionario];

    for (int i = 0; i < qauntidadeFuncionario; i++)
    {
        strcpy(funcionario[i].Nome, "");
        funcionario[i].salarioInicial = 0;
        funcionario[i].salarioAumento = 0;
        funcionario[i].salarioFinal = 0;
    }

    printf("Digite a porcentagem de Aumento:\t\n");
    scanf("%f", &aumtP);
    printf("Digite a porcentagem de Amor:\t\n");
    scanf("%f", &amr);

    for (int i = 0; i < qauntidadeFuncionario; i++)
    {
        printf("Digite o nome do funcionario:\n");
        scanf("%s", &funcionario[i].Nome);
        printf("Digite o salario atualdo do funcionario:\n");
        scanf("%f", &funcionario[i].salarioInicial);
    }

    f_calculaAumentoSalario(funcionario, qauntidadeFuncionario, aumtP, amr);
    f_mostraResultado(funcionario, qauntidadeFuncionario);
}