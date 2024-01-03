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
    char DB[50];
    int Port;
};

int main()
{
    puts(logo);
    puts(versao);
    puts("\n\n");

    struct Conexao pssql;
    int trueConexao;

    while (trueConexao != 200)
    {

        char ValidacaoConexao[2];

        printf("Digite o usuario da coneão.\n");
        fgets(pssql.Usuario, sizeof(pssql.Usuario), stdin);
        fflush(stdin);

        printf("Digite a senha da conexão.\n");
        fgets(pssql.Senha, sizeof(pssql.Senha), stdin);
        fflush(stdin);

        printf("Digite a port da conexão.\n");
        scanf("%d", &pssql.Port);
        while (getchar() != '\n')
            ;

        printf("Digite o banco da conexão.\n");
        fgets(pssql.DB, sizeof(pssql.DB), stdin);
        fflush(stdin);

        printf("Os dados de conexão estão corretos ?\n Usuário: %s\n Senha: %s\n Banco: %s\n Porta: %d\n\n [S\\N]\n", pssql.Usuario, pssql.Senha, pssql.DB, pssql.Port);
        fgets(ValidacaoConexao, 2, stdin);

        if (strcmp(ValidacaoConexao, "s") == 0 || strcmp(ValidacaoConexao, "S") == 0)
        {
            trueConexao = 200;
            puts("Conectado com sucesso !\n\n");
        }
        else
            trueConexao = 400;
        puts("Digite novamente as credenciais");
    }

    return 0;
}
