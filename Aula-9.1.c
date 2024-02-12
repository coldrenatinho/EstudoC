/*
Renato Araujo da Silva  07/02/2024
Funçãoes
*/

#include <stdio.h>
#include <stdlib.h>

float maior(float num1, float num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
int main()
{
    float x = 0;
    float y = 0;

    puts("Digite um valor para x");
    scanf("%f", &x);
    puts("Digite um valof para y");
    scanf("%f", &y);
    float s = maior(x, y);
    printf("Maior valor digitado %f", s);
    return 0;
}