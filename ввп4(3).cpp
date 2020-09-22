#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s;
	printf("Введите числа\n");
	scanf("%f %f", &a, &b);
	s = (a + b) / 2;
	printf("Среднее арифметическое равно" "%f", s);
	return 0;
}
