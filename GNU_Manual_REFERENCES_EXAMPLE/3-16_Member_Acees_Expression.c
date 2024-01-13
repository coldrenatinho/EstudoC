#include <stdio.h>
#include <stdlib.h>

/*
Com o operador de acesso de memório é possivel acessar o valores de uma união de dados (struct)
com o operador ->

*/

int main()
{

    struct point
    {
        int x, y;
    };

    struct point first_point;

    // Acessando a váriavel via "." operador
    first_point.x = 0;
    first_point.y = 5;

    printf("%d\n%d\n", first_point.x, first_point.y);

    // Acessando membros da Struct inderetamente

    struct fish
    {
        int length, weigth;
    };

    struct fish salmon;

    struct fish *fish_pointer = &salmon;

    fish_pointer->length = 3;
    fish_pointer->weigth = 10;

    printf("Comprimento do salmao: %d\n", fish_pointer->length);
    printf("Peso do salmao: %d\n", fish_pointer->weigth);

    return 0;
}