#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input, output;
	printf("Enter an alphabet:");
	scanf_s("%c", &input);
	if (input <= 90)
	{
		output = input + 32;
		printf("%c=>%c", input, output);
	}
	else
	{
		output = input - 32;
		printf("%c=>%c", input, output);
	}
	system("pause");
	return 0;
}