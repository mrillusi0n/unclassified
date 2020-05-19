/************************************\
 * A big endian system outputs an   *
 * 'a', while a little endian       *
 * system outputs a 'b'.            *
 *                                  *
 * Author: @theteachr (Nikhil CSB)  *
\************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    short ab = ('a' << 8) | 'b'; 
    printf("%c\n", ab); 
    return 0;
}

