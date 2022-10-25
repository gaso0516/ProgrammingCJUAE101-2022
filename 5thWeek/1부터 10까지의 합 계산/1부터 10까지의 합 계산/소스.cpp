#include<stdio.h>
int rec_func(int n);                 

int main(void)
{
	int a = 0;
	a = rec_func(10);                 
	printf("%d\n", a);
	return 0;
}

int rec_func(int n)
{
	if (n == 0) 
		return n;
	n = n + rec_func(n - 1);
	return n;
}