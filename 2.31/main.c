#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x = 0, i = 0;
	printf("number square cube\n");
	for (i = 0; i <= 10; i++)
	{
		printf("%-7d""%-7d""%-7d\n", x, x * x, x * x * x);
		x = x + 1;
	}

	system("pause");
	return 0;
}