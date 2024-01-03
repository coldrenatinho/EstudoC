#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50] = "Renato Araujo da Silva";
    char endereco[200] = "Av. dos ipês";
    char i[300];
    int valor = 0;

    strcpy(i, "Bigorna"); // Alerar o consteudo de um string no meio do codigo
    puts(i);
    puts("\n\n");

    strcat(i, nome); // Concatena estrings
    strcat(i, endereco);
    puts(i);
    puts("\n\n");

    valor = strlen(i); // Mostra o tamanho da string
    printf("O valor da string é: %zu\n\n", valor);

    int j = 0;

    if (strcmp(i, endereco) == 0)
    {
        puts("O valor é igual.\n\n");
    }
    else
        puts("O valor é false.\n\n");
}