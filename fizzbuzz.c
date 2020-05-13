/************************************\
** Fizzzz Buzzzzz                   **
**                                  **
** Author: @theteachr (Nikhil CSB)  **
\************************************/

#include <stdio.h>

char *VERSES[] = {
    "3Fizz",
    "5Buzz"
};

void fizzbuzz(int num)
{
    int flag = 0;

    if (num % 3 == 0)
    {
        printf("Fizz");
        flag++;
    }

    if (num % 5 == 0)
    {
        printf("Buzz");
        flag++;
    }

    if (!flag)
        printf("%d", num);

    printf("\n");
}

int main()
{
    for (int i = 0; i < 100; ++i)
        fizzbuzz(i);
}

