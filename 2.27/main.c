#include <stdio.h>

int main() {
	int rows = 5;
	int space, star;

	for (int i = 1; i <= rows; i++) {
		// Print spaces before the stars
		for (space = 1; space <= rows - i; space++) {
			printf(" ");
		}

		// Print stars
		for (star = 1; star <= 2 * i - 1; star++) {
			printf("*");
		}

		// Move to the next line after each row is printed
		printf("\n");
	}

	return 0;
}
