/*36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário,
calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.*/

#include <stdio.h>
#include <stdlib.h>

float minimumWage[12] = {130.0, 136.0, 151.00, 180.0, 200.0, 240.0, 260.0, 300.0, 350.0, 380.0, 415.0, 465.0};

float calcWageYear(float cWage, int cYear)
{
    return cWage / minimumWage[cYear];
}

int main(int argc, char *argv[])
{
    float wage = 0;
    int year = 0;

    printf("Write wage in R$ for the worker\n");
    scanf("%f", &wage);

    puts("Select yaer base\n");
    for (int i = 0; i < 11; i++)
    {
        printf("\[%d\] - %d\n", i, 2000 + i);
    }

    scanf("%d", &year);

    printf("Total %.2f", calcWageYear(wage, year));
}