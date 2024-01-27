/*
10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada
ponto é um par ordenado (x,y).
*/

#include <stdio.h>
#include <math.h>

double calcularDistancia(double x1, double y1, double x2, double y2) // Formala
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
int main()
{
    struct Ponto
    {
        double x, y;
    };

    struct Ponto a, b;

    printf("Digite as coordenada do primeiro ponto (x1 y1): \n");
    scanf("%lf %lf", &a.x, &a.y);

    printf("Digite as coordenada do segundo ponto (x1 y1): \n");
    scanf("%lf %lf", &b.x, &b.y);

    double distancia = calcularDistancia(a.x, a.y, b.x, b.y);

    printf("A distância entro os pontos é de: %.2lf\n", distancia);

    return 0;
}