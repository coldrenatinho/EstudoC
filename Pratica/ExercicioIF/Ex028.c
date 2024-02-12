/*
28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas,
considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
*/
#include <stdio.h>

int main(int argc, char *argv[])
{

    float nota0 = 0;
    float nota1 = 0;
    float mediaPoderada = 0;

    printf("Digite o valor para a primeira nota:\n");
    scanf("%f", &nota0);
    printf("Digite o valor para a segunda nota:\n");
    scanf("%f", &nota1);

    /*Calcula a media poderada*/
    float fator = nota0 * 2 + nota1 * 3;
    mediaPoderada = fator / (2 + 3);

    printf("A média ponderada para o aluno é de %f", mediaPoderada);
}
