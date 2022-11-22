#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;
	int* pn;
	int i, j;
	int count = 0;

	printf("> Positive Input : ");
	scanf_s("%d", &number);

	pn = (int*)calloc(number, sizeof(int));
	if (pn == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	for (i = 0; i < (number - 1); i++)
	{
		pn[i] = i + 2;
	}
	for (i = 0; i < (number - 1); i++)
	{
		for (j = 2; j <= number; j++)
		{
			if ((i + 2 != j) && ((i + 2) % j == 0))
			{
				pn[i] = 1;
			}
		}
	}
	for (i = 0; i < (number - 1); i++)
	{
		if ((count != 0) && (count % 5 == 0))
		{
			printf("\n");
		}
		count++;

		if (pn[i] == 1)
		{
			printf("%5c", 'X');
		}
		else
		{
			printf("%5d", pn[i]);
		}
	}

	free(pn);

	return 0;
}
