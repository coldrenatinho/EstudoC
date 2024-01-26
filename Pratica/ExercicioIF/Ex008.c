/*
8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média
ponderada (as notas tem pesos respectivos de 1, 2 e 3).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Nota0, Nota1, Nota2;
    float Media;
    Nota0 = 0;
    Nota1 = 0;
    Nota2 = 0;
    Media = 0.0;

    printf("Digite o valor da primeria nota para o aluno:\n");
    scanf("%d", &Nota0);
    printf("Digite o valor da primeria nota para o aluno:\n");
    scanf("%d", &Nota1);
    printf("Digite o valor da primeria nota para o aluno:\n");
    scanf("%d", &Nota2);
    Media = (Nota0 + Nota1 + Nota2) / 3;
    printf("A média do aluno é de %.4f", Media);
}