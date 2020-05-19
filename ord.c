/********************************\
 * Return ASCII Number          *
 * of a characer.               *
 *                              *
 * Author: @theteachr           *
\********************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s [character]\n", argv[0]);
        return -1;
    }

    printf("ord('%c') = %u\n", argv[1][0], argv[1][0]);

    return 0;
}

