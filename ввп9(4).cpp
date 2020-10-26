#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, k, ost, zan;
	printf("введите целые положительные числа a, b и c\n");
	scanf("%d %d %d", &a, &b, &c);
	k = (a/c) * (b/c);
	zan = k * pow(c, 2);
	ost = a * b - zan;
	printf("количество квадратов, размещённых на прямоугольнике равно %d\n", k);
	printf("площадь незанятой части прямоугольника равна %d", ost);
	return 0;
}
