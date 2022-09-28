#include <stdio.h>

int main(void)
{
	int kor = 3; // korcredits
	int eng = 5; // engcredits
	int mat = 4; // matcredits
	int credits = (kor + eng + mat); // all add credits

	double korgrade = 3.8; // kor  grade
	double enggrade = 4.4; // eng    "
	double matgrade = 3.9; // mat    "
	double grade = (korgrade * 3 + enggrade * 5 + matgrade * 4) / ((double)(credits)); // Calculation of ratings

	int res = ((credits) > 10) && (grade > 4); // If the mean exceeds 4 = 1 Otherwise, output 0
	printf("%d", res);

	return 0;

}