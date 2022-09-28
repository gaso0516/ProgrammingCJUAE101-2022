#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nA = 0;
	int nB = 0;
	char chOper;

	printf("Input your arithmetic operation:\n");
	scanf_s("%d%c%d", &nA, &chOper, 1, &nB);

	switch (chOper)
	{
	case '+':
	{
		printf("Addtion:\n");
		int nRes = nA + nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
	}
	case '-':
	{
		printf("Subtraction:\n");
		int nRes = nA - nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
	}
	case '*':
	{
		printf("Multipilcation:\n");
		int nRes = nA * nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
	}
	case '/':
	{
		printf("division:\n");
		int nRes = nA / nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
	}
	return 0;
	}
}

