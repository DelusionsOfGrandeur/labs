#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	printf("введите значение x\n");
	scanf("%d", &x);
	y = 4*(sqrt(x-3)*sqrt(x-3)*sqrt(x-3)) - 7*sqrt(x-3) + 2;
	printf("y = " "%d\n", y);
	return 0;
}
