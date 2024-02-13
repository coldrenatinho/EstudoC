/**34. Faça um algoritmo que calcule e mostre a área de um quadrado.
Sabe-se que: A = lado * lado;*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 0;

    printf("write the measurement of the  face of squarez\n");
    scanf("%d", &a);
    a = a * 2;
    printf("The area of square is: %d\n", a);

    return 0;
}