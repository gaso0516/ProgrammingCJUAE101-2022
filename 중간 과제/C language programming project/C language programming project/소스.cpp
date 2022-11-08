#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int cpu;  // Variables to store arbitrary numbers determined by the computer
	int user; // Variable to store the number entered by the user
	int count = 0; 
	int MAX_INPUT;  

	srand(time(NULL));
	cpu = rand() % 100 + 1;
	MAX_INPUT = rand() % 10;

	printf("Up & Down Game\n\n");
	printf("%d chances in total\n", MAX_INPUT);
	printf("Exit when 0 is entered\n\n");
	while (count < MAX_INPUT) // Repeat only while the current number of attempts is less than the maximum number of attempts
	{
		printf("IN PUT YUOR NUMBER(0~100) : ");
		scanf_s("%d", &user);
		if (user == 0) // Exit if the entered number is zero
		{
			printf("Game over.\n");
			return 0;
		}
		else if (user < 0 || user > 100) // If the entered number is out of range, it will be re-entered
			printf("Out of range.\n");
		else
		{
			count++; // Increase the number of times only when entering a number within the normal range
			if (user == cpu) // Win if the number entered equals the number on your computer
			{
				printf("The answer after %d attempts.\n", count);
				return 0;
			}
			else // If it is not the same, print out the UP or DOWN and forward it to the user
				printf("%d tries : %s\n", count, (user > cpu ? "DOWN" : "UP"));
		}
	}
	printf("Defeat. The answer is : %d\n", cpu); // If you don't win within the maximum number of attempts, you lose
	return 0;
}