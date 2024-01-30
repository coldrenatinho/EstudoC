/*
23. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente
longa. Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre
da sua altura, faça um algoritmo para ler os dados necessários e calcular a altura do prédio.
*/

#include <stdio.h>

int main()
{
    float suaAltura = 0.0;
    float suaSombra = 0.0;
    float sombraPredio = 0.0;
    float alturaPredio = 0.0;

    printf("Digite a sua altura em centímetros (ex: 152cm):\n");
    scanf("%f", &suaAltura);

    printf("Digite o tamanho medido em sua sombra em centímetros (ex: 102cm):\n");
    scanf("%f", &suaSombra);

    printf("Digite o tamanho da sombra projetada pelo prédio em centímetros (ex: 2000cm):\n");
    scanf("%f", &sombraPredio);

    alturaPredio = (suaAltura / suaSombra) * sombraPredio;

    printf("Total da altura do prédio: %f\n", alturaPredio);

    return 0;
}
