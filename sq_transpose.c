/********************************\
 * Transpose a 2D Matrix        *
 * (SQUARE)                     *
 *                              *
 *                              *
 *                              *
 * Author: @theteachr           *
\********************************/

#include <stdio.h>

int ORDER = 5;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void transpose(int matrix[][ORDER], int order)
{
    for (int i = 0; i < order; i++)
        for (int j = i; j < order; j++)
            swap(&matrix[i][j], &matrix[j][i]);
}

int main()
{
    int gen[ORDER][ORDER];
    int count = 1;

    for (int i = 0; i < ORDER; i++)
    {
        for (int j = 0; j < ORDER; j++)
            gen[i][j] = count++;
    }

    transpose(gen, ORDER);

    for (int i = 0; i < ORDER; i++)
    {
        for (int j = 0; j < ORDER; j++)
            printf("%d ", gen[i][j]);
        printf("\n");
    }
}

