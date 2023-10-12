#include <stdio.h>
#include "pattern.h"

void square() {
	for (int i = 0; i <= 8; ++i) {
		for (int j = 0; j <= 8; ++j) {
			if (i == 0 || i == 8 || j == 0 || j == 8) {
				printf("*");
			}
			else {
				printf(" ");
			}
			if (j == 8 && i != 8)
				printf("\n");
		}
	}
}

void oval() {
	for (int i = 0; i <= 8; ++i) {
		for (int j = 0; j <= 8; ++j) {
			if ((i == 0 || i == 8) && j >= 3 && j <= 5) {
				printf("*");
			} else if ((i == 1 || i == 7) && (j == 1 || j == 7)) {
				printf("*");
			} else if ((j == 0 || j == 8) && i >= 2 && i <= 6) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void arraw()
{
	for (int i = 0; i<=2 ; ++i) {
		for (int j = 0; j <= 2 - i; ++j)
			printf(" ");
		for (int k = 0; k <= i * 2 ; k++) {
			printf("*");
		}
		puts("");
	}
	for (int i = 0; i < 5; i++) {
		puts("   *");
	}
}

void diamond()
{
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5 - i; ++j) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			//判斷在需要列印的地方的第一位和最後一位列印*號，中間位置空格 
			if ((j == 0) || (j + 1 == 2 * i + 1)) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < i + 2; j++) {
			printf(" ");
		}
		for (int j = 8; j > 2 * i + 1; j--) {
			//判斷在需要列印的地方的第一位和最後一位列印*號，中間位置空格 
			if ((j == 8) || (j - 1 == 2 * i + 1)) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void spacing() {
	puts("\n");

	for (int i = 0; i < 20; ++i) {
		printf("-");
	}

	puts("\n");
}
