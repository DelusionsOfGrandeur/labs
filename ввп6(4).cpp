#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	printf("введите значение x\n");
	scanf("%d", &x);
	y = 3*(sqrt(x)*sqrt(x)*sqrt(x)) - 6*sqrt(x) - 7;
	printf("y = " "%d\n", y);
	return 0;
}
	
