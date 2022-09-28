#include <stdio.h>
#include <stdlib.h>

#define MINCHESTSIZE  90
#define MAXCHESTSIZE  100

int main(void)
{
	int inChest_Size = 0;
	char chChest_Size;

	printf("Inout your chest size:");
	scanf_s("%d", &inChest_Size);

	if (inChest_Size > MAXCHESTSIZE)
	{
		chChest_Size = 'L';
	}
	else if ((inChest_Size > MINCHESTSIZE) && (inChest_Size <= MAXCHESTSIZE))
	{
		chChest_Size = 'M';
	}
	else 
	{
		chChest_Size = 'S';
	}

	printf("Your chest size is %c\n", chChest_Size);


	return 0;

}
