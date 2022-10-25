#include <stdio.h>

int main(void)
{
	int i, j;                                                             // control variables for counting the number of iterations
	int num;
	int count = 0;

	
	printf("Please enter an integer greater than or equal to 2 : ");        
	scanf_s("%d", &num);

	for (i = 2; i <= num; i++)         //i increases from 2 to num and repeats num times
	{
		for (j = 2; j <= i; j++)       //j increases from 2 to until j is equal to or less than i and repeats
		{
			if ((i % j) == 0)          // If i and j are the rest of the calculations, if it is 0, we end the repetition sentence
				break;
		}
		if (i == j)                    
		{
			printf("%5d", i);
			count++;                   // increase by 1 every iteration
			if ((count % 5) == 0)      // end with 'break' when the value of cumt becomes 5
			{
				printf("\n");
			}
		}
	}
	return 0;
	
}