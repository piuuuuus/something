#include<stdio.h>
int main()
{
	int num1 = 9;
	int num2 = 1;
	int sum = 2;
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
