#include <stdio.h>
#include <stdlib.h>

void hannoi(int brick, char from, char buffer, char to);

int step;

int main()
{
	int brick;
	printf("Enter Hanoi brick amount :");
	step = 0;
	scanf_s("%d", &brick);
	hannoi(brick, '1', '2', '3');
	printf("All need %d step", step);
	system("pause");
	return 0;
}

void hannoi(int brick, char from, char buffer, char to)
{
	if (brick == 0)
	{
		return;
	}
	hannoi(brick - 1, from, to, buffer);
	printf("Move brick%d ", brick);
	printf("from tower%c ", from);
	printf("to tower%c\n", to);
	step++;
	hannoi(brick - 1, buffer, from, to);
}