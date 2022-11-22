#include<stdio.h>

struct book
{
	char title[50];
	char author[20];
	int page;
	int price;
};

int main(void)
{
	struct book list[3] = {
	{"The little prince", "Saint Exupery", 160, 8820},
	{"Romance of the three kingdoms", "Luo Guanzhong", 3000, 8000},
	{"Harry Potter", "JK_Rowling", 472, 8400}
	};

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%10s%5s%15d%15d\n",
			list[i].title, list[i].author, list[i].page, list[i].price);

	}

	return 0;
}