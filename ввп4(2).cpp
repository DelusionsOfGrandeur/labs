#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Russian");
	float d, l, p;
	p = 3.14;
	printf("¬ведите диаметр окружности\n");
	scanf("%f", &d);
	l = p * d;
	printf("ƒлина окружности равна " "%f", l);
	return 0;
}

