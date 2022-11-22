#include<stdio.h>

struct cracker
{
	int price;
	int calories;
};

int main(void)
{
	struct cracker basasak; //구조체 변수 선언
	printf("Enter the price and calories of Basasak : ");
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	printf("price of basasak : %dwon\n", basasak.price);
	printf("calories of basasak : %dkcal\n", basasak.calories);
	return 0;
}