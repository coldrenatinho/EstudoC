#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char lorem[200];

int main()
{

    strcpy(lorem, "Lorem ipsum dolor sit amet, "
                  "consectetur adipiscing elit. "
                  "Sed rutrum est et justo accumsan, "
                  "eu accumsan libero maximus. Sed mi ante, "
                  "molestie vel magna nec, rhoncus lobortis quam. "
                  "Morbi vitae magna in.");

    puts(lorem);

    return 0;
}