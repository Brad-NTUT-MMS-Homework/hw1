#include <stdio.h>

int main(void)
{
	int input;
	printf("Please input an integer: ");
	scanf_s("%d", &input);
	if ((input % 2) != 0) {
		printf("%d is odd number!", input);
	}
	else {
		printf("%d is even number!", input);
	}

	return 0;
}