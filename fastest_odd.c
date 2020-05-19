#include <stdio.h>

char is_odd(int n)
{
	return n & 1;
}

int main(int argc, char* argv[])
{
	int number = 45;
	
	if (is_odd(number))
		printf("%d is odd.\n", number);
	else
		printf("%d is even.\n", number);

	return 0;
}

