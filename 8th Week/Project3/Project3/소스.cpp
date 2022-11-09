#include<stdio.h>
#include<string.h>
void my_number(char* ps, char* pc, char* pa);
void a_swap(char* a, char* b);


int main(void)
{
	char c1[20], c2[20], c3[20]; 
	printf("세 단어 입력 : ");
	scanf("%s%s%s", c1, c2, c3);
	my_number(c1, c2, c3);

	printf("%s, %s, %s", c1, c2, c3);

	return 0;
}

void my_number(char* ps, char* pc, char* pa)
{
	if (strcmp(ps, pc) > 0)a_swap(ps, pc);
	if (strcmp(ps, pa) > 0)a_swap(ps, pa);
	if (strcmp(pc, pa) > 0)a_swap(pc, pa);

}

void a_swap(char* a, char* b)
{
	char temp[20];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}
