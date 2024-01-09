#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define logo "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n██░▄▄▀█▀▄▄▀█░██░▄▀█░▄▄▀█░▄▄█░▄▄▀█░▄▄▀█▄░▄██▄██░▄▄▀█░████▀▄▄▀█\n██░████░██░█░██░█░█░▀▀▄█░▄▄█░██░█░▀▀░██░███░▄█░██░█░▄▄░█░██░█\n██░▀▀▄██▄▄██▄▄█▄▄██▄█▄▄█▄▄▄█▄██▄█▄██▄██▄██▄▄▄█▄██▄█▄██▄██▄▄██\n▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
#define versao "-------------------------------------------------0.0.2-------\n"

typedef struct TipoPessoa TipoPessoa;

struct Conexao
{
    char Usuario[50];
    char Senha[50];
    char DB[50];
    int Port;
};

struct odbc
{
    char Name[200];
};

int main()
{
    puts(logo);
    puts(versao);
    puts("\n\n");

    struct odbc dns;
    struct Conexao pssql;
    strcpy(dns.Name, "psqlDocker");
    strcpy(pssql.DB, "app");
    int trueConexao = 0;

    while (trueConexao != 1)
    {
        char ValidacaoConexao[2];

        printf("Digite o usuario da coneão.\n");
        fgets(pssql.Usuario, sizeof(pssql.Usuario), stdin);
        fflush(stdin);

        printf("Digite a senha da conexão.\n");
        fgets(pssql.Senha, sizeof(pssql.Senha), stdin);
        fflush(stdin);

        // printf("Digite a port da conexão.\n");
        // scanf("%d", &pssql.Port);
        // while (getchar() != '\n')
        ;

        // printf("Digite o banco da conexão.\n");
        // fgets(pssql.DB, sizeof(pssql.DB), stdin);
        // fflush(stdin);

        printf("Dados de conexão fornecidos:\nUsuário: %s\nSenha: %s\n", pssql.Usuario, pssql.Senha);
        printf("Os dados de conexão estão corretos? [S/N]\n");
        fgets(ValidacaoConexao, 2, stdin);

        if (strcmp(ValidacaoConexao, "s") == 0 || strcmp(ValidacaoConexao, "S") == 0)
        {
            char ConexaoOBDC[400] = "";
            trueConexao = 1;
            system("clear");
            puts(logo);
            puts(versao);
            strcat(ConexaoOBDC, "isql ");
            strcat(ConexaoOBDC, dns.Name);
            strcat(ConexaoOBDC, " ");
            strcat(ConexaoOBDC, pssql.Usuario);
            strcat(ConexaoOBDC, " ");
            strcat(ConexaoOBDC, pssql.Senha);
            strcat(ConexaoOBDC, "-b -H -k -J");
            puts("Conectado com sucesso !\n\n");
            puts(ConexaoOBDC);
            system(ConexaoOBDC);
            continue;
        }

        return 0;
    };
}
