#include<stdio.h>

int main(void)
{
	char ch1 = 'A';
	char ch2 = 65;
	char ch3 = 't';
	char ch4 = 116;

	printf("문자 입력 : %d입니다.\n", ch1, ch1);
	printf("A문자의 아스키 코드 값은 %d입니다.\n", ch2, ch2);
	printf("문자 입력 : %d입니다.\n", ch3, ch3);
	printf("t문자의 아스키 코드 값은 %d입니다.\n", ch4, ch4);

	return 0;
}