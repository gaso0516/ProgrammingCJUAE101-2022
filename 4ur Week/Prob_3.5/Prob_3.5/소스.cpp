#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nA = 0;
	int nB = 0;
	int nRes;
	char Arithmeticoperations;

	printf("Input your arithmetic operation:\n");
	scanf_s("%d%c%d", &nA, &Arithmeticoperations, 1, &nB);

	if (Arithmeticoperations == '+')
	{
		printf("Addtion:\n");
		int nRes = nA + nB;
		printf("%d %c %d = %d\n", nA, Arithmeticoperations, nB, nRes);
	}
	else if (Arithmeticoperations == '-')
	{
		printf("Subtraction:\n");
		int nRes = nA - nB;
		printf("%d %c %d = %d\n", nA, Arithmeticoperations, nB, nRes);
	}
	else if (Arithmeticoperations == '*')
	{
		printf("Multipilcation:\n");
		int nRes = nA * nB;
		printf("%d %c %d = %d\n", nA, Arithmeticoperations, nB, nRes);
	}
	else
	{
		printf("division:\n");
		int nRes = nA / nB;
		printf("%d %c %d = %d\n", nA, Arithmeticoperations, nB, nRes);
	}
	
	system("pause");
	return 0;
}