#include <stdio.h>
#include <stdlib.h>

/*
Renato Araujo Da Silva - 14/14/2024
Matrizes e arrays
*/
int main()
{
    int matriz[3][3];

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;

    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    int total = sizeof(matriz);
    printf("%d", total);
    puts("\n");

    int coluna = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    printf("%d", coluna);
    puts("\n");

    int linha = sizeof(matriz) / sizeof(matriz[0]);
    printf("%d", linha);
    puts("\n");

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}