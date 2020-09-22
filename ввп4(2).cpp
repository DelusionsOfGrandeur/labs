#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Russian");
	float d, l, p;
	p = 3.14;
	printf("Введите диаметр окружности\n");
	scanf("%f", &d);
	l = p * d;
	printf("Длина окружности равна " "%f", l);
	return 0;
}

