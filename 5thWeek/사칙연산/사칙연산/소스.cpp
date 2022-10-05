#include<stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int rem(int x, int y);

int main(void)
{
	int a, b;
	int result1;
	int result2;
	int result3;
	int result4;
	int result5;

	printf("Enter the value to be calculated : ");
	scanf_s("%d%d", &a, &b);

	result1 = sum(a, b);
	result2 = sub(a, b);
	result3 = mul(a, b);
	result4 = div(a, b);
	result5 = rem(a, b);

	printf("sum : %d\nsub : %d\nmul : %d\ndiv : %d\nrem : %d\n", result1, result2, result3, result4, result5);

	return 0;
}

int sum(int x, int y)
{
	int temp;

	temp = x+y;

	return temp;
}

int sub(int x, int y)
{
	int temp1;

	temp1 = x-y;

	return temp1;
}

int mul(int x, int y)
{
	int temp2;

	temp2 = x*y;

	return temp2;
}

int div(int x, int y)
{
	int temp3;

	temp3 = x / y;

	return temp3;
}

int rem(int x, int y)
{
	int temp4;

	temp4 = x % y;

	return temp4;
}