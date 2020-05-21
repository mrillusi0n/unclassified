/********************************\
 *                              *
 *            2 2 2             *
 *            2 1 2             *
 *            2 2 2             *
 *                              *
 *          3 3 3 3 3           *
 *          3 2 2 2 3           *
 *          3 2 1 2 3           *
 *          3 2 2 2 3           *
 *          3 3 3 3 3           *
 *                              *
 *                              *
 *        4 4 4 4 4 4 4         *
 *        4 3 3 3 3 3 4         *
 *        4 3 2 2 2 3 4         *
 *        4 3 2 1 2 3 4         *
 *        4 3 2 2 2 3 4         *
 *        4 3 3 3 3 3 4         *
 *        4 4 4 4 4 4 4         *
 *                              *
 *                              *
 * Author: @theteachr           *
\********************************/


#include <stdio.h>

void printer(int outer, int inner) {
	int o = outer;

	while (o > inner) printf("%d ", o--);
	for (int i = 0; i < inner * 2 - 1; ++i) printf("%d ", inner);
	while (inner < outer) printf("%d ", ++inner);
}

void concentricize(int size)
{
    int i;

	for (i = size; i > 0; --i) {
		printer(size, i);
		printf("\n");
	}

	for (i = 2; i <= size; ++i) {
		printer(size, i);
		printf("\n");
	}
}

int main() {

	int n = 4;
	int i;
	
    concentricize(n);
	
	return 0;
}
