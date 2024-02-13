/*33. Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior +
base menor)* altura)/2 ;*/

#include <stdio.h>
#include <stdlib.h>

float calculaAreaTrapezio(int baseMenor, int baseMaior, int altura)
{
    return (baseMenor + baseMaior) * altura / 2;
}
int main(int argc, char *argv[])
{
    int _baseMenor = 0;
    int _baseMaior = 0;
    int _altura = 0;

    printf("Digite qual o tamanho da base Maior do trapezio:\n");
    scanf("%d", &_baseMaior);
    printf("Digite o tamanho da base menor do trapézio:\n");
    scanf("%d", &_baseMenor);
    printf("Digite a altura da o trapedio:\n");
    scanf("%d", &_altura);
    float areaTotal = calculaAreaTrapezio(_baseMenor, _baseMaior, _altura);
    printf("Area total do trapezio é de %f\n", areaTotal);
}