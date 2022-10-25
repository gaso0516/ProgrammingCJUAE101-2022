#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define RANDOM_MAX 100                    //무작위 숫자 크기 100
#define arr 10                            //배열 크기 10

int main(void)
{
	srand(time(NULL));
	int i;
	int a[arr];
	int sum = 0;
	double avg, std, var = 0;

	for (i = 0; i < arr; i++)               // 무작위 숫자 구하는 for문
	{
		a[i] = rand() % RANDOM_MAX;
	}
	for (i = 0; i < arr; i++)               // 평균 구하는 for문
	{
		printf("%3d", a[i]);
		sum += a[i];
	}
	avg = sum / arr;
	for (i = 0; i < arr; i++)               // 분산 구하는 for문
	{
		sum += sqrt((a[i] - avg) * (a[i] - avg));
	}
	var = sum / arr;

	for (i = 0; i < arr; i++)               // 표준편차 구하는 for문
	{
		sum += sqrt((a[i] - avg) * (a[i] - avg));
	}
	std = sqrt(var);

	printf("\n");                           // 결과 도출
	printf("average : %.1lf\n", avg);
	printf("standard deviation : %.1lf\n", sqrt(var));
	printf("variance : %.1lf\n", var);

	return 0;



}









