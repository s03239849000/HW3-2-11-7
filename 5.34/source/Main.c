#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);

int main()
{
	int base, exponent;
	printf("Enter base :");
	scanf_s("%d", &base);
	printf("Enter exponent :");
	scanf_s("%d", &exponent);
	printf("The value is :%d", power(base, exponent));
	system("pause");
	return 0;
}

int power(int base, int exponent)
{
	if (exponent != 1)
	{
		return base * power(base, exponent - 1);
	}
	return base;
}