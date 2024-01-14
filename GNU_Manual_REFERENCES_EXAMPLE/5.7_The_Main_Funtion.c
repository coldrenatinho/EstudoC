#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int counter;

    for (counter = 0; counter < argc; counter++)

        printf("%s\n", argv[counter]);

    return counter;
}