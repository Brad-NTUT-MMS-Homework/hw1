#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("Please enter two numbers: ");
	scanf_s("%d %d", &a, &b);

	if ((a % b) == 0) {
		printf("A is a multiple of B\n");
	} else {
		printf("A is not a multiple of B\n");
	}
	system("pause");
	return 0;
}