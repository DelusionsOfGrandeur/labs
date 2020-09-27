#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, ac, bc, s;
	printf("введите значение для точки a на числовой оси\n");
	scanf("%d", &a);
	printf("введите значение для точки b на числовой оси\n");
	scanf("%d", &b);
	printf("введите значение для точки c на числовой оси\n");
	scanf("%d", &c);
	ac = abs(a - c);
	bc = abs(b - c);
	s = ac + bc;
	printf("длина отрезка ac равна " "%d\n", ac);
	printf("длина отрезка bc равна " "%d\n", bc);
	printf("сумма длин отрезков ac и bc равна " "%d\n", s);
	return 0;
}
