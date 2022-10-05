#include <stdio.h>

int main(void)
{
	int i, j;
	int num;
	int count = 0;

	
	printf("Please enter an integer greater than or equal to 2 : ");
	scanf_s("%d", &num);

	for (i = 2; i <= num; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if ((i % j) == 0) 
				break;
		}
		if (i == j)
		{
			printf("%d", i);
			count++;
			if ((count % 5) == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
	
}