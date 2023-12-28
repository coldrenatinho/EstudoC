#include <stdio.h>

#define text "Entrada e sainda de dados."

int main()
{

    int idade = 0;
    float altura = 0.0F;
    char nome[50] = "";

    printf("Digite a idade: %d.\n", idade);
    scanf("%d", &idade);

    printf("Digite a altura: %f.\n", altura);
    scanf("%f", altura);

    printf("Digite o nome: %s \n", nome);
    scanf("%s", nome);

    printf("Dados informados:\n");
    printf("Idade: %d.\t", idade);
    printf("Altura: %.2f.\t", altura);
    printf("Nome: %s.\n", nome);

    printf("Programa executado com sucesso !\n\a");
    printf("%s\n", text);

    return 0;
}