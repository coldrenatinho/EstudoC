#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <unistd.h>

/*
Renato Araujo da Silva 08/01/2024
Stucts em C - tipo da dados compostos
*/

#define logo "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n██░▄▄▀█▀▄▄▀█░██░▄▀█░▄▄▀█░▄▄█░▄▄▀█░▄▄▀█▄░▄██▄██░▄▄▀█░████▀▄▄▀█\n██░████░██░█░██░█░█░▀▀▄█░▄▄█░██░█░▀▀░██░███░▄█░██░█░▄▄░█░██░█\n██░▀▀▄██▄▄██▄▄█▄▄██▄█▄▄█▄▄▄█▄██▄█▄██▄██▄██▄▄▄█▄██▄█▄██▄██▄▄██\n▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
#define versao "-------------------------------------------------0.0.1-------\n"

#define T 50

struct TipoPessoa
{
    int Idade;
    float Peso;
    char Nome[T];
};

typedef struct TipoPessoa TipoPessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    TipoPessoa Pedro = {0, 0.0, ""};
    TipoPessoa VarPessoa = {0, 0.0, ""};

    puts(logo);
    puts(versao);
    sleep(0.5);

    puts("Precione 'Enter' para continuar'\n");
    while (getchar() != '\n')
        ;

    printf("Inicio.:\n");
    printf("Pedro.idade: %d;\n", Pedro.Idade);
    printf("Pedro.Peso: %.4f;\n", Pedro.Peso);
    printf("Pedro.Nome: %s.\n", Pedro.Nome);
    puts("\n\n");

    Pedro.Idade = 10;
    Pedro.Peso = 85.741;
    strcpy(Pedro.Nome, "Pedro P. Silva");

    printf("Inserindo Dados via código.:\n");
    sleep(3);
    printf("Pedro.idade: %d;\n", Pedro.Idade);
    printf("Pedro.Peso: %.4f;\n", Pedro.Peso);
    printf("Pedro.Nome: %s.\n", Pedro.Nome);
    puts("\n\n");

    puts("Precione 'Enter' para iniciar'\n");
    while (getchar() != '\n')
        ;
    sleep(0.5);

    system("clear");
    puts(logo);
    puts(versao);
    sleep(0.5);

    puts("Iniciando com dados digitados pelo usuário.:\n");
    sleep(5);
    puts("Digite o Nome:\n");
    fgets(VarPessoa.Nome, sizeof(VarPessoa.Nome), stdin);
    fflush(stdin);
    puts("Digite a sua idade:\n");
    scanf("%d", &VarPessoa.Idade);
    puts("Digite o seu peso:\n");
    scanf("%f", &VarPessoa.Peso);

    printf("\nDados inseridos pelo usuário.:\n");
    sleep(0.3);
    printf("VarPessoa.idade: %d;\n", VarPessoa.Idade);
    printf("VarPessoa.Peso: %.2f;\n", VarPessoa.Peso);
    printf("VarPessoa.Nome: %s\n", VarPessoa.Nome);
    puts("\n\n");

    puts("Fim da exexução\n\n");

    return 0;
}