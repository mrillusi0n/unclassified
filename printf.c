// From Reddit...

#include <stdio.h>

int main(void) {
	char *text = "Welcome, %s.\n";
	printf((const char *) text, "Vulner");

	for (int i = 0; text[i] != 0; i++)
		printf("Forms a triangle.\n" + i); // warns
}
