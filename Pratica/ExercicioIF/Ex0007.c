/*
Renato Araujo da Silva 12/01/2024
Lista de exercícios IF
*/

/*
7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do
ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    struct tm data1;
    struct tm data2;
    time_t t1, t2;
    double difereca_em_segundos, diferenca_em_dias;

    data1.tm_year = 2022;
    data1.tm_mon = 2;
    data1.tm_mday = 7;
    data1.tm_hour = 0;
    data1.tm_min = 0;
    data1.tm_sec = 0;

    data2.tm_year = 2023;
    data2.tm_mon = 2;
    data2.tm_mday = 7;
    data2.tm_hour = 0;
    data2.tm_min = 0;
    data2.tm_sec = 0;

    t1 = mktime(&data1);
    t2 = mktime(&data2);

    difereca_em_segundos = difftime(t2, t1);

    diferenca_em_dias = difereca_em_segundos / (60 * 60 * 24);

    printf("Diferenca em dias %f\n", diferenca_em_dias);
}
