/*
11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um
algoritmo para converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre
30 dias.
*/

#include <stdio.h>
#include <time.h>

void converterDias(int dias)
{
    int anos, meses, dias_restantes;
    time_t agora;
    struct tm *data;

    time(&agora);
    data = localtime(&agora);

    dias_restantes = dias;

    anos = dias / 365;
    dias_restantes %= 365;

    meses = dias_restantes / 30;
    dias_restantes %= 30;

    printf("Anos: %d\tMeses: %d\tDias: %d\n", anos, meses, dias_restantes);
}

int main()
{
    int quantidadeDias = 0;

    printf("Digite a quantidade de dias:\n");
    scanf("%d", &quantidadeDias);
    puts("Estamos sem acidente há:\n");
    converterDias(quantidadeDias);

    return 0;
}
