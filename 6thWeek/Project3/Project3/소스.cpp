#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANDOM_MAX 9  //������ �迭 ���� 9��

int main(void)
{
	srand(time(NULL));
	int a[3][4] = {};                  //�Լ� ����
	int b[4][3] = {};
	int c[3][3] = {};
	int mul;
	int i, j, k;

	printf("a procession\n");                

	for (i = 0; i < 3; i++)               //a �迭 ���ϴ� for��
	{
		for (j = 0; j < 4; j++)
		{
			a[i][j] = rand() % RANDOM_MAX;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}

	printf("b procession\n");             //b �迭 ���ϴ�  for��

	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 3; k++)
		{
			b[i][k] = rand() % RANDOM_MAX;
			printf("%5d", b[i][k]);
		}
		printf("\n");
	} 
	printf("a*b procession : \n");          // a*b �迭 ���ϴ� foe��

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			mul = 0;
			for (k = 0; k < 4; k++)
			{
				mul += a[i][k] * b[k][j];
			}
			c[i][j] = mul;
		}
	}
	for (i = 0; i < 3; i++)               //��� ����
	{
		for(j = 0; j < 3; j++)
		{
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}