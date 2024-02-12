/*
25. Calcule o volume de uma caixa d'água cilíndrica.
*/

#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main()
{

    // =πr² . h

    double r = 0;
    double h = 0;

    printf("Digite o raio do cilindro\n");
    scanf("%lf", &r);
    printf("Digite a altura do cilindro:\n");
    scanf("%lf", &h);
    printf("Volume igual ha: %lf", pi * pow(r, 2) * h);
}