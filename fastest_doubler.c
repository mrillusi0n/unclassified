/************************************\
 * Probably the fastest to compute  *
 * the double of a given number     *
 *                                  *
 * Author: @theteachr (Nikhil CSB)  *
\************************************/

#include <stdio.h>

int doubler(int n)
{
	return n << 1;
}

int main(int argc, char const *argv[])
{
	int number = 98;
	printf("%d x 2 = %d\n", number, doubler(number));
	return 0;
}

