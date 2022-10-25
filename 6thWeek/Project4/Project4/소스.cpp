#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_MAX 10                               // 최대로 가지는 정수 개수

int main(void)
{
	int arr[10];
	int i,j;
	int tmp;

	srand((unsigned)time(NULL));                   
	printf("Random numbers\n");
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % RANDOM_MAX;              // 무작위 정수를 배열 arr에 대입
		printf("%5d", arr[i]);
	}
	for (i = 0; i < 10; i++)                        // 내림차순 for문
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
		printf("%5d", arr[i]);                    // 결과 출력
	}

	for (i = 0; i < 10; i++)                       // 오름차순 for문
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
