#include <stdio.h>

int main(void)
{
	int i, j;                                       // control variables for counting the number of iterations

	for (i = 2; i <= 9; i++)                        // i increases from 2 to 9 and repeats 8 times
	{
		for (j = 1; j <= 9; j++)                    // j increases from 1 to 9 and repeats 9 times
		{
			printf("%d * %d = %d\n", i, j, i * j);  // display i multiplied by j
		}
	}

	return 0;

}