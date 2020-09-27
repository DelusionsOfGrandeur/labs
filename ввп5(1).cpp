#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, r;
	printf("введите координаты первой точки\n");
	scanf("%d %d", &x1, &y1);
	printf("введите координаты второй точки\n");
	scanf("%d %d", &x2, &y2);
	r = sqrt( (x2 - x1)*(x2 - x1) + (y2-y1)*(y2 - y1) );
	printf("расстояние между точками равно " "%d\n", r);
	return 0;
}
