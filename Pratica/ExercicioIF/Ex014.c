/*
13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma:
CENTENA = x
DEZENA = x
UNIDADE = x
*/

#include <stdio.h>

int main()
{
    int numero = 0;
    int c = 0, d = 0, u = 0;

    printf("Digite uma centerna: \n");
    scanf("%3d", &numero);

    if (numero < 100)
    {
        printf("Erro. O valor não é valido: %d\n", numero);
        return 0;
    }

    c = numero / 100;
    printf("Centena: %d\n", c);

    d = (numero - c * 100) / 10;
    printf("Dezena %d\n", d);

    u = (numero - c * 100) - d * 10;
    printf("Unidade %d\n", u);
}