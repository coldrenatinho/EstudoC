/*
Renato Araujo da Silva - 10/01/2024
Lista de exercícios Istituto Federal de Ciência e Tecnologia
*/

/*
1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define logo "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n██░▄▄▀█▀▄▄▀█░██░▄▀█░▄▄▀█░▄▄█░▄▄▀█░▄▄▀█▄░▄██▄██░▄▄▀█░████▀▄▄▀█\n██░████░██░█░██░█░█░▀▀▄█░▄▄█░██░█░▀▀░██░███░▄█░██░█░▄▄░█░██░█\n██░▀▀▄██▄▄██▄▄█▄▄██▄█▄▄█▄▄▄█▄██▄█▄██▄██▄██▄▄▄█▄██▄█▄██▄██▄▄██\n▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n"
#define versao "-------------------------------------------------0.0.0-------\n"

float Largura = 0;
float Comprimento = 0;

int main()
{
    printf(logo);
    printf(versao);
    printf("Digite o valor para o lagura do terreno.\n");
    scanf("%f", &Largura);
    printf("Digite o valor para o comrimento do terreno.\n");
    scanf("%f", &Comprimento);
    printf("A area do terreno é igua à: %.4F\n", Largura * Comprimento);

    return 0;
}
