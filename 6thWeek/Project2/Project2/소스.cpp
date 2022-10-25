#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define RANDOM_MAX 100                    //������ ���� ũ�� 100
#define arr 10                            //�迭 ũ�� 10

int main(void)
{
	srand(time(NULL));
	int i;
	int a[arr];
	int sum = 0;
	double avg, std, var = 0;

	for (i = 0; i < arr; i++)               // ������ ���� ���ϴ� for��
	{
		a[i] = rand() % RANDOM_MAX;
	}
	for (i = 0; i < arr; i++)               // ��� ���ϴ� for��
	{
		printf("%3d", a[i]);
		sum += a[i];
	}
	avg = sum / arr;
	for (i = 0; i < arr; i++)               // �л� ���ϴ� for��
	{
		sum += sqrt((a[i] - avg) * (a[i] - avg));
	}
	var = sum / arr;

	for (i = 0; i < arr; i++)               // ǥ������ ���ϴ� for��
	{
		sum += sqrt((a[i] - avg) * (a[i] - avg));
	}
	std = sqrt(var);

	printf("\n");                           // ��� ����
	printf("average : %.1lf\n", avg);
	printf("standard deviation : %.1lf\n", sqrt(var));
	printf("variance : %.1lf\n", var);

	return 0;



}









