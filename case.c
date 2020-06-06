/*********************************\
 * I figured a new cool way      *
 * to fiddle with letter         *
 * cases.                        *
 *                               *
 *                               *
 * Author: @theteachr            *
\*********************************/

#include <stdio.h>

char upper_case(char c)
{
    return c & 0b11011111;
}

char lower_case(char c)
{
    return c | 0b00100000;
}

char swap_case(char c)
{
    return c ^ 0b00100000;
}

int main()
{
    char letters[] = { 'h', 'w', 'P', 'i', 'u', 'v' };

    for (int i = 0; letters[i] != 0; i++)
        printf("%c ", swap_case(letters[i]));
    printf("\n");

    return 0;
}

