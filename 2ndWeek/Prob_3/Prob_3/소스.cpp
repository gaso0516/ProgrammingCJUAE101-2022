#include<stdio.h>

int main(void)
{
	double Weight;
	double Height;
	double BMI;
	double height;

	printf("Weight(kg) and Height(cm) input : ");
	scanf_s("%lf%lf", &Weight, &height);
	Height = height/100;
	BMI = Weight /(Height * Height);
	(BMI >= 20.0) && (BMI < 25.0)
		? printf("It's a standard body type")
		: printf("You need to take care of your weight.");

	return 0;

}