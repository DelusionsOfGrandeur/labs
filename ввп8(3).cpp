#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	int a, b, k, x;
	printf("укажите длину отрезка а, учитывая, что длина а больше длины b\n");
	scanf("%d", &a);
	printf("укажите длину отрезка b, учитывая, что длина а больше длины b\n");
	scanf("%d", &b);
	x = a / b;
	k = a - x*b;
	printf("длина незанятой части отрезка а равна %d", k);
	return 0;
}
