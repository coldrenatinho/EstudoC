#include <stdio.h>

int main()
{

    float m;

    printf("Digite um valor!\n");
    scanf("%f", &m);

    if (m >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}