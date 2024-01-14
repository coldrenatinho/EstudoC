#include <stdio.h>
#include <time.h>

int main()
{
    // Obtendo a data e hora atual
    time_t t;
    struct tm *info;
    time(&t);
    info = localtime(&t);

    // Extraindo os componentes da data e hora
    int ano = info->tm_year + 1900; // tm_year representa os anos desde 1900
    int mes = info->tm_mon + 1;     // tm_mon representa os meses de 0 a 11
    int dia = info->tm_mday;
    int hora = info->tm_hour;
    int minuto = info->tm_min;
    int segundo = info->tm_sec;

    // Exibindo a data e hora formatadas
    printf("Data atual: %04d-%02d-%02d\n", ano, mes, dia);
    printf("Hora atual: %02d:%02d:%02d\n", hora, minuto, segundo);

    return 0;
}
