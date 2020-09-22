#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, r, p, d;
	printf("введите числа, которые не равны нулю\n");
	scanf("%f %f", &a, &b);
	s = abs(a) + abs(b);
	r = abs(a) - abs(b);
	p = abs(a) * abs(b);
	d = abs(a) / abs(b);
	printf("сумма модулей введённых чисел равна " "%f\n", s);
	printf("разность модулей введённых чисел равна " "%f\n", r);
	printf("произведение модулей введённых чисел равно " "%f\n", p);
	printf("частное модулей введённых чисел равно " "%f\n", d);
	return 0;
}
	
