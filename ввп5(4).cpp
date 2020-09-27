#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, p, s, dlina, shirina;
	printf("введите координаты вершины прямоугольника\n");
	scanf("%d %d", &x1, &y1);
	printf("введите координаты противополжной вершины прямоугольника\n");
	scanf("%d %d", &x2, &y2);
	dlina = abs(x1 - x2);
	shirina = abs(y1 - y2);
	p = 2*(dlina + shirina);
	s = dlina * shirina;
	printf("периметр прямоугольника равен " "%d\n", p);
	printf("плошадь прямоугольника равна " "%d\n", s);
	return 0;
}
