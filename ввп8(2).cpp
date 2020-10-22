#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	int a, b, k;
	printf("укажите длину отрезка а, учитывая, что длина а больше длины b\n");
	scanf("%d", &a);
	printf("укажите длину отрезка b, учитывая, что длина а больше длины b\n");
	scanf("%d", &b);
	k = a / b;
	printf("количество отрезков b, размещённых на отрезке а, без наложений, равно %d", k);
	return 0;
}
