/************************************\
 * Probably the fastest to compute  *
 * whether a given number is even.  *
 *                                  *
 * Author: @theteachr (Nikhil CSB)  *
\************************************/

#include <stdio.h>

char is_even(int n)
{
	return !(n & 1);
}

int main(int argc, char const *argv[])
{
	int number = 2465;

	if (is_even(number)) printf("%d is even.\n", number);
	else printf("%d is odd.\n", number);

	return 0;
}
