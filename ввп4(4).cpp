#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, r, p, d;
	printf("¬ведите числа, которые не равны нулю\n");
	scanf("%f %f", &a, &b);
	s = a*a + b*b;
	r = abs(a*a - b*b);
	p = (a*a) * (b*b);
	d = (a*a) / (b*b);
	printf("сумма квадратов введЄнных чисел равна " "%f\n", s);
	printf("разность квадратов введЄнных чисел равна " "%f\n", r);
	printf("произведение квадратов введЄнных чисел равно " "%f\n", p);
	printf("частное квадратов введЄнных чисел равно " "%f\n", d);
	return 0;
}
