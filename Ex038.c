/**38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e
mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

    struct tm year0, yearActual;
    time_t timeBirt, timeActual;

    double _difftimeBirt = 0, _diffTimeActual;

    printf("Write the yeat of birt on format dd/mm/yyyy\n");
    scanf("%02d/%02d/%04d", &year0.tm_mday, &year0.tm_mon, &year0.tm_year);
    timeBirt = mktime(&year0);
    printf("Write actual date on format dd/mm/yyyy\n");
    scanf("%02d/%02d/%04d", &yearActual.tm_mday, &yearActual.tm_mon, &yearActual.tm_year);
    timeActual = mktime(&yearActual);
    _difftimeBirt = difftime(timeActual, timeBirt);
    int yearS = _difftimeBirt / (60 * 60 * 24 * 30 * 12);
    int monS = _difftimeBirt / (60 * 60 * 24 * 30);
    int dayS = _difftimeBirt / (60 * 60 * 24);
    int wenS = _difftimeBirt / (60 * 60 * 24 * 7);

    printf("Years %d\tMons: %d\t Days: %d\t weekeds: %d\n", yearS, monS, dayS, wenS);

    int SainDays = 8000 - dayS;
    printf("Falta %d. Sant\n", 8000 - dayS);
}