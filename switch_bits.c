/*
 * To experiment on the behaviour of `switch`
 * and attempt at passing flags as just
 * one var, and use bit masking techniques.
 *
 * `case` needs to be a constant expression.
 */

#include <stdio.h>

#define DO_REV 1
#define DO_TWICE 2

int rev_int(int);
int twice(int);
int manipulate(int, int);

// internal
int _rev_int(int, int);

int main() {
    int num = 16;

    printf("%d\n", manipulate(num, DO_REV));
    printf("%d\n", manipulate(num, DO_TWICE));
    printf("%d\n", manipulate(num, DO_REV | DO_TWICE)); // order should have mattered
}

int rev_int(int n) {
    return _rev_int(n, 0);
}

int _rev_int(int n, int acc) {
    if (!n)
        return acc;
    return _rev_int(n / 10, acc * 10 + n % 10);
}

int twice(int n) {
    return n << 1;
}

int manipulate(int n, int flags) {
    int (*funcs[])(int) = { rev_int, twice };

    for (int i = 1; i <= 2; i = i << 1)
        if (flags & i)
            n = funcs[i-1](n);

    return n;
}
