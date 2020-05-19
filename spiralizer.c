/************************************\
 * Spiral Numbers                   *
 *                                  *
 * Author: @theteachr (Nikhil CSB)  *
\************************************/

#include <stdio.h>
#include <stdlib.h>

void _print(unsigned short **m, unsigned short n) {
    int row, col;

    for (row = 0; row < n; ++row) {
        for (col = 0; col < n; ++col)
            printf("%2u ", m[row][col]);
        printf("\n");
    }
}

void spiralize(unsigned short n) {
    unsigned short** spiral = (unsigned short **) calloc(sizeof(unsigned short *), n);

    for (size_t i = 0; i < n; i++)
        spiral[i] = (unsigned short *) calloc(sizeof(unsigned short), n);
    
    
    unsigned short top_left;
    unsigned short top_right;
    unsigned short bottom_right;
    unsigned short bottom_left = 1;

    unsigned short difference = n - 1;
    unsigned short level = 1;

    unsigned short row;
    unsigned short col;

    if (n % 2 == 1)
        spiral[n / 2][n / 2] = n * n;

    for (row = 0; row < n - 1; ++row, ++level, difference -= 2)
    {
        top_left = bottom_left;
        top_right = top_left + difference;
        bottom_right = top_right + difference;
        bottom_left = bottom_right + difference;
        
        for (col = row; col < n - level; ++col) {
            spiral[row][col] = top_left++;
            spiral[col][n - level] = top_right++;
            spiral[n - level][n - 1 - col] = bottom_right++;
            spiral[n - 1 - col][row] = bottom_left++;

            // _print(spiral, n);
            // printf("\n");
        }
    }
    
    _print(spiral, n);
}

int main(int argc, char* argv[]) {
    unsigned int order = 4;

    if (argc > 1)
        sscanf(argv[1], "%u", &order);

    spiralize(order);

    return 0;
}

