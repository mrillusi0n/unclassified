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
 * Author: @theteachr           *
\********************************/


#include <stdio.h>

void printer(int outer, int inner) {
	int o = outer;

	while (o > inner) printf("%d ", o--);
	for (int i = 0; i < inner * 2 - 1; ++i) printf("%d ", inner);
	while (inner < outer) printf("%d ", ++inner);
}

int main() {

	int n = 6;
	int i;
	
	for (i = n; i > 0; --i) {
		printer(n, i);
		printf("\n");
	}

	for (i = 2; i <= n; ++i) {
		printer(n, i);
		printf("\n");
	}
	
	return 0;
}
