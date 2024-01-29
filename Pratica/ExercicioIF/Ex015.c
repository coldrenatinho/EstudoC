/*
14. Calcule a área de uma pizza que possui um raio R (pi=3.14).
*/

#include <stdio.h>
#include <math.h>

#define pi 3.14

int main(int args)
{
    double r = args;
    double a = 0;

    a = pi * pow(r, 2);
    printf("Valor da area = %.4f\n", a);
}