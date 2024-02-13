/**37. Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int NumTab = 0;

    printf("Wire a number of tabuada\n\n");
    scanf("%d", &NumTab);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i * NumTab);
    }
}