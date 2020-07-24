/********************************\
 * Given a number,              *
 * return an array that         *
 * contains all the digits      *
 * and their frequencies.       *
 *                              *
 * Author: @theteachr           *
\********************************/

#include <stdio.h>
#include <stdlib.h>

int NUM = 923243;

int* repeater(int);

int main() {
    int *f;

    f = repeater(NUM);

    for (int i = 0; i < 10; i++)
        if (f[i] > 1)
            printf("%d ", i);

    printf("\n");
}

int *repeater(int n) {
    int *f = calloc(sizeof(int), 10);

    while (n) {
        f[n % 10]++;
        n /= 10;
    }

    return f;
}
