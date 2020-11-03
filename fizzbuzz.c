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
	char str_n[4];

	sprintf(str_n, "%d", num);

	char *choice[] = {str_n, ""};

    for (int i = 0; i < n_verses; i++)
		flag |= (num % verses[i].num) ? 0 : 1 & printf("%s", verses[i].verse);

	printf("flag = %d, num = %d\n", flag, num);
    printf("%s\n", choice[flag]);
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
