#include <stdio.h>

unsigned int distinctify(int *, unsigned int);

void print_arr(int *arr, unsigned int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int nums[10];
    int t;

    scanf("%d", &t);

    while (t--) {
        unsigned int size;

        scanf("%d", &size);

        for (int i = 0; i < size; ++i)
            scanf("%d", &nums[i]);

        // printf("Original: ");
        // print_arr(nums, size);

        unsigned int new_size = distinctify(nums, size);

        // printf("Set: ");
        print_arr(nums, new_size);
    }
}

void swap(int *a, int *b) {
    if (*a != *b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

unsigned int distinctify(int *arr, unsigned int size) {
    unsigned int j, i;
    for (i = 1, j = 0; i < size; ++i) {
        if (arr[j] == arr[i])
            continue;
        swap(arr + ++j, arr + i);
    }
    return j + 1;
}

