#include <stdio.h>

int main()
{

    char text[200] = {};
    int c = 0;
    int i = 0;

    while ((c = getchar()) != EOF && i < 199)
    {

        text[i] = c;

        // remove duplicate blank caracter
        if (i > 0 && text[i - 1] == ' ' && text[i] == ' ')
        {
            i--;
        }
        // replace tab for backspace
        if (i > 0 && text[i] == '\t')
        {
            text[i] = '\b';
        }
        // replace '/' for '\\'
        if (i > 0 && text[i] == '/')
        {
            text[i] = '\\';
            i++;
            text[i] = '\\';
        }

        i++;
    }

    text[i] = '\0';

    printf("%s\n", text);

    return 0;
}