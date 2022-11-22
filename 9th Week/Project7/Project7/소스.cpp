#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentscore
{
	int id;
	char name[20];
	int kor, eng, math;
	int sum;
	double avg;
	char grade;
};

int main(void)
{
	struct studentscore score[5] = {
		{0,"snagwon",0,0,0}};
	struct studentscore temp;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("Class number : ");
		scanf("%d", &score[i].id);
		printf("name : ");
		scanf("%s", score[i].name);
		printf("Korean, English, and math scores : ");
		scanf("%d%d%d", &score[i].kor, &score[i].eng, &score[i].math);
		score[i].sum = score[i].kor + score[i].eng + score[i].math;
		score[i].avg = (double)score[i].sum / 3.0;
		if (score[i].avg >= 90)score[i].grade = 'A';
		else if (score[i].avg >= 80)score[i].grade = 'B';
		else if (score[i].avg >= 70)score[i].grade = 'C';
		else score[i].grade = 'F';
	}

	printf("#Data Before Sort...\n");
	for (i = 0; i < 5; i++)
	{
		printf("%5d %5s%5d%5d%5d%5d%5.1lf%5c\n", score[i].id, score[i].name, score[i].kor, score[i].eng, score[i].math, score[i].sum, score[i].avg, score[i].grade);
	}
	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (score[j].sum < score[i].sum)
			{
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}

	printf("# Data after sorting...\n");
	for (i = 0; i < 5; i++)
	{
		printf("%5d %5s%5d%5d%5d%5d%5.1lf%5c\n", score[i].id, score[i].name, score[i].kor, score[i].eng, score[i].math, score[i].sum, score[i].avg, score[i].grade);
	}

	return 0;
}














