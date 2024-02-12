/*
Renato Araujo da Silva 17/02/2024
Argumentos
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc > 1)
    {
        printf("Foram inseridos mais de uma parmetro. Numero de parametros %d\n", argc - 1);
        printf("Parametro: %s\n", *argv[2]);
    }
    else
    {
        printf("Não foram inseridos argumetos\n");
    }
}