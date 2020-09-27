#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, ac, bc, p;
	printf("введите значение для точки a на числовой оси\n");
	scanf("%d", &a);
	printf("введите значение для точки b на числовой оси\n");
	scanf("%d", &b);
	printf("введите значение для точки c на числовой оси, учитывая, что точка c расположена между точками a и b\n");
	scanf("%d", &c);
	ac = abs(a - c);
	bc = abs(b - c);
	p = ac * bc;
	printf("произведение отрезков ac и bc равно " "%d\n", p);
	return 0;
}
