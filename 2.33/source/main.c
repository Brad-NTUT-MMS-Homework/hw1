#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e, f;
	printf("請輸入一整天的總里程數,汽油一公升/加侖多少錢,平均一公升/加侖能行駛多少公里,一天的停車費,一天的通行費(過路費)\n");
	scanf_s("%f %f %f %f %f", &a, &b, &c, &d, &e);
	f = a * (b / c) + d + e;
	printf("一天開車所需要的花費: %.2f\n", f);
	system("pause");
	return 0;
}