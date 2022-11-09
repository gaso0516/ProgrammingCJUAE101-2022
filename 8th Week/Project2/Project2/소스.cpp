#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[80]; // Array to enter a string 
	char skip_str[80]; // Array to store abbreviated strings
	const char* star = "**********"; // String to populate the ellipsis
	int length; // Archive length of input string
	printf("Input word : ");
	scanf_s("%s", str, 80);
	length = strlen(str); // Copy as is if length is less than 5

	if (length <= 5)
	{
		strcpy(skip_str, str);
	}
	else
	{
		strncpy(skip_str, str, 5); // Copy only five characters
		skip_str[5] = '\0'; // Save your text message at the end
		strncat(skip_str, star, static_cast<size_t>(length) - 5); // Replace by string length
	}
	printf("입력한 단어 : %s, 생략한 단어 : %s\n", str, skip_str);
	return 0;
}