/*
15. Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um
algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que
Carlos e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para
Carlos, R$33,00 para André e R$35,53 para Felipe.
*/

#include <stdio.h>
#include <math.h>

int main()
{

    float Total = 0;
    int vCalos = 0;
    int vAndre = 0;
    float vFelipe = 0;

    printf("Digite o valor da Conta: ");
    scanf("%f", &Total);

    vCalos = Total / 3;
    vAndre = Total / 3;
    vFelipe = Total - (vCalos + vAndre);
    printf("Total: %.2f\nCalos: %d\n Andre: %d\n Felipe: %.2f", Total, vCalos, vAndre, vFelipe);
}