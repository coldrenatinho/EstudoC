#include <stdio.h>

int main()
{

    float nota;
    float nota2;

    nota = 0.0;
    nota2 = 0.0;

    printf("Insira o valor da nota.\n");
    scanf("%f", &nota);

    if (nota >= 4 && nota <= 7)
    {
        printf("Aluno ficou em rucuperacao.\n");
    }
    else if (nota >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno repovado.\n");
    }

    printf("\n\nPrograma executado com exito!\n");
    return 0;
}
