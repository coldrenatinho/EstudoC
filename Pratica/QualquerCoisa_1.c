#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define logo "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n██░▄▄▀█▀▄▄▀█░██░▄▀█░▄▄▀█░▄▄█░▄▄▀█░▄▄▀█▄░▄██▄██░▄▄▀█░████▀▄▄▀█\n██░████░██░█░██░█░█░▀▀▄█░▄▄█░██░█░▀▀░██░███░▄█░██░█░▄▄░█░██░█\n██░▀▀▄██▄▄██▄▄█▄▄██▄█▄▄█▄▄▄█▄██▄█▄██▄██▄██▄▄▄█▄██▄█▄██▄██▄▄██\n▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
#define versao "0.0.1"

struct Conexao
{
    char Usuario[50];
    char Senha[50];
    char Banco[50];
    int port;
};

int main()
{
    puts(logo);
    return 0;

    struct Conexao pssql;

    printf("Digite o usuario da coneão.\n");
    fgets(pssql.Usuario, sizeof(pssql.Usuario), stdin);
    fflush(stdin);

    pritf(pssql.Usuario);
    puts("\n\n");

    return 0;
}
