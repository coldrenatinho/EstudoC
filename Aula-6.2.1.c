#include <stdio.h>
#include <stdlib.h>

/*
Renato Araujo da Silva - 01/01/2024
Trabalhando com dados de texto
*/

int main()
{

    char s[60];

    printf("Digite um texto qualquer %s.\n\n", s);
    fgets(s, 20, stdin);
    fflush(stdin);

    puts("Resultado:\n");
    puts(s);
    puts("");

    printf("Digite algo (litura pelo fgets):\n");
    fgets(s, 20, stdin);

    puts("Resultado:\n");
    puts(s);

    return 0;
}