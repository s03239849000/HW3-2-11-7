#include <stdio.h>
#include <stdlib.h>

int GCD(int a1, int a2);
int LCM(int a1, int a2);

int main()
{
	int a1, a2;
	printf("Enter number1 :");
	scanf_s("%d", &a1);
	printf("Enter number2 :");
	scanf_s("%d", &a2);
	printf("Least Common Multiple is :%d", LCM(a1, a2));
	system("pause");
	return 0;
}

int GCD(int a1, int a2)
{
	if (a2) while ((a1 %= a2) && (a2 %= a1));
	return a1 + a2;
}

int LCM(int a1, int a2)
{
	return a1 * a2 / GCD(a1, a2);
}