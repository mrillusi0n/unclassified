/*********************************\
 * I figured a new cool way      *
 * to fiddle with letter         *
 * cases.                        *
 *                               *
 * (Will mess up if the          *
 * functions are given chars     *
 * that are not letters.)        *
 *                               *
 * Author: @theteachr            *
\*********************************/

#include <stdio.h>

char upper_case(char c) {
    return c & ~32;
}

char lower_case(char c) {
    return c | 32;
}

char swap_case(char c) {
    return c ^ 32;
}

int main() {
    char letters[] = { 'h', 'w', 'P', 'i', 'u', 'v', 0 };

    for (int i = 0; letters[i] != 0; i++) {
        int letter = letters[i];

        printf("swap(%c) = %c, ", letter, swap_case(letter));
        printf("lower(%c) = %c, ", letter, lower_case(letter));
        printf("upper(%c) = %c\n", letter, upper_case(letter));
    }

    return 0;
}