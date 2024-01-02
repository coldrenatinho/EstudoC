#include <stdio.h>
#include <stdlib.h>
// trabalando com arrays de string
int main()
{

    char e[10];

    printf("Digite o texto:.\n");
    scanf("%9[^\n]s", e);
    fflush(stdin);

    printf("Resultado:\n\n");
    printf("%s\n\n", e);

    return 0;
}