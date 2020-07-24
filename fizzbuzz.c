/************************************\
 * Fizzzz Buzzzzz                   *
 *                                  *
 * Author: @theteachr (Nikhil CSB)  *
\************************************/

#include <stdio.h>

char *VERSES[] = {
    "3Fizz",
    "5Buzz",
    "7Boop"
};

int NUM_VERSES = 3;

void fizzbuzz(int num, char *verses[], int n_verses)
{
    int flag = 0;

    for (int i = 0; i < n_verses; i++)
    {
        int div;
        char msg[5];

        sscanf(verses[i], "%d%s", &div, msg);

        if (num % div == 0)
        {
            printf("%s", msg);
            flag++;
        }
    }

    if (!flag)
        printf("%d", num);

    printf("\n");
}

int main()
{
    for (int i = 0; i < 40; ++i)
        fizzbuzz(i, VERSES, 3);
}