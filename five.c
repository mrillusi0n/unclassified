#include <stdio.h>

int fivend(int n) {
    return n + (5 - n % 5);
}

int fivbeg(int n) {
    return n - (n % 5);
}

int main() {
    int nums[] = {12, 10, 17, 21, 38, 72}; // init the test cases

    for (int i = 0; i < 6; i++) {
        int num = nums[i];
        printf("%d ", fivend(num));
        printf("%d\n", fivbeg(num));
    }

    return 0;
}
