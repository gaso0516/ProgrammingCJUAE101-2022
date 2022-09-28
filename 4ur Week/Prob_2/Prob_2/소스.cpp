#include <stdio.h>
#include <stdlib.h>

#define under20MINCHESTSIZE  85
#define under20MAXCHESTSIZE  95
#define over20MINCHESTSIZE 90
#define over20MAXCHESTSIZE 100

int main(void)
{
	int inAge = 0;
	int inChest_Size = 0;
	char chChest_Size;

	printf("Inout your chest size and age:");
	scanf_s("%d%d", &inChest_Size, &inAge);

	if (inAge < 20)
	{
		if (inChest_Size >= under20MAXCHESTSIZE)
		{
			chChest_Size = 'L';
		}
		else if ((inChest_Size >= under20MINCHESTSIZE) && (inChest_Size < under20MAXCHESTSIZE))
		{
			chChest_Size = 'M';
		}
		else
		{
			chChest_Size = 'S';
		}
	}
	else
	{
		if (inChest_Size >= over20MAXCHESTSIZE)
		{
			chChest_Size = 'L';
		}
		else if ((inChest_Size >= over20MINCHESTSIZE) && (inChest_Size < over20MAXCHESTSIZE))
		{
			chChest_Size = 'M';
		}
		else
		{
			chChest_Size = 'S';
		}
	}

	printf("Your chest size is %c\n", chChest_Size);


	return 0;

}
