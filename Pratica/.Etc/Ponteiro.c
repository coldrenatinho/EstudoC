/*
Renato Araujo da Silva 12-01-2024
Ponteiros em C
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int var = 12;
    int *ptr;

    ptr = &var;

    printf("Conteudo de var = %d\n", var);
    printf("Edereco de var = %p\n", var);
    printf("Valor do endereco 'apontador' *ptr %d\n", *ptr);
    printf("Valor do endereco de *ptr %d\n", ptr);
    printf("Valor do endereco de ptr %d\n", &ptr);

    return 0;
}
/*
*ptr : apontador por, conteudo do edereço da variavel que o ptr aponta
ptr : endereço de onde a vária está armazenada
&ptr : endereço de ptr

*/