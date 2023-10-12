#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	int largest, smallest;

	largest = smallest = num1;

	if (num2 > largest) {
		largest = num2;
	}
	else if (num2 < smallest) {
		smallest = num2;
	}

	if (num3 > largest) {
		largest = num3;
	}
	else if (num3 < smallest) {
		smallest = num3;
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	system("pause");
	return 0;
}
