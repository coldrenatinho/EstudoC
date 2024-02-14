#include <stdio.h>

int main()
{
    int c, nl, tab, bl;
    c = 0;
    nl = 0;
    tab = 0;
    bl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            nl++;
        }
        if (c == '\t')
        {
            tab++;
        }
        if (c == 32)
        {
            bl++;
        }
    }
}