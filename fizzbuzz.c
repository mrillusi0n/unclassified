/************************************\
** Fizzzz Buzzzzz                   **
**                                  **
** Author: @theteachr (Nikhil CSB)  **
\************************************/

#include <stdio.h>

char *VERSES[] = {
    "3Fizz",
    "4Buzz",
    "5Boob"
};

int NUM_VERSES = 3;

void fizzbuzz(int num)
{
    int flag = 0;

    for (int i = 0; i < NUM_VERSES; ++i)
    {
        int div;
        char msg[5];

        sscanf(VERSES[i], "%d%s", &div, msg);

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
        fizzbuzz(i);
}

