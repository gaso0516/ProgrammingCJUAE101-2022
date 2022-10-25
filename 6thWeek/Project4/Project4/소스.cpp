#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_MAX 10                               // �ִ�� ������ ���� ����

int main(void)
{
	int arr[10];
	int i,j;
	int tmp;

	srand((unsigned)time(NULL));                   
	printf("Random numbers\n");
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % RANDOM_MAX;              // ������ ������ �迭 arr�� ����
		printf("%5d", arr[i]);
	}
	for (i = 0; i < 10; i++)                        // �������� for��
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("\nascending order\n");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);                    // ��� ���
	}

	for (i = 0; i < 10; i++)                       // �������� for��
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("\nsdescending order\n");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);
	}

	return 0;

}
