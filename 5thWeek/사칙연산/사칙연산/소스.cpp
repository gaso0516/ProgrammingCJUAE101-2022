#include<stdio.h>

int sum(int x, int y);             // declaration of sum functions
int sub(int x, int y);             // declaration of sub functions           
int mul(int x, int y);             // declaration of mul functions
int div(int x, int y);             // declaration of div functions
int rem(int x, int y);             // declaration of rem functions

int main(void)                     // start main function
{
	int a, b;
	int result1;                   // variable to store the result of adding two integers
	int result2;               
	int result3;
	int result4;
	int result5;

	printf("Enter the value to be calculated : ");
	scanf_s("%d%d", &a, &b);
	 
	result1 = sum(a, b);           // sum function call
	result2 = sub(a, b);           // sub function call
	result3 = mul(a, b);           // mul function call
	result4 = div(a, b);           // div function call
	result5 = rem(a, b);           // rem function call

	printf("sum : %d\nsub : %d\nmul : %d\ndiv : %d\nrem : %d\n", result1, result2, result3, result4, result5);

	return 0;
}                                  // end of main function
 
int sum(int x, int y)              // starting sum function definition
{
	int temp;                      // variable to store the sum of two integers briefly
	temp = x+y;

	return temp;                   // return temp value
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