#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Russian");
	float a, b, p, s;
	printf("Введите стороны прямоугольника\n");
	scanf("%f %f", &a, &b );
	s = a * b;
	p = 2 * (a + b);
	printf("Площадь равна\n " "%f\n", s);
	printf("Периметр равен\n" "%f\n", p);
	return 0;
}
