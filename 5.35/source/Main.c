#include <stdio.h>
#include <stdlib.h>

long long int f(int n);

int main()
{
	int n;
	printf("Enter n :");
	scanf_s("%d", &n);
	printf("f(%d)=%d", n, f(n));
	system("pause");
	return 0;
}

long long int f(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return f(n - 1) + f(n - 2);
}