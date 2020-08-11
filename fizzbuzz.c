/************************************\
 * Fizzzz Buzzzzz                   *
 *                                  *
 * Author: @theteachr               *
\************************************/

#include <stdio.h>

struct Verse {
    int num;
    char *verse;
};

void fizzbuzz(int num, struct Verse *verses, int n_verses) {
    int flag = 0;

    for (int i = 0; i < n_verses; i++) {
        if (num % verses[i].num == 0) {
            printf("%s", verses[i].verse);
            flag++;
        }
    }

    if (!flag)
        printf("%d", num);

    printf("\n");
}

int main() {
    struct Verse verses[] = {
        {3, "Fizz"},
        {5, "Buzz"},
        {7, "Shizz"},
    };

    int times = 100;

    for (int i = 0; i < times; ++i)
        fizzbuzz(i, verses, 3);
}
