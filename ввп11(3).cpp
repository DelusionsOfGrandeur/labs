#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, ab, ac;
	printf("введите значения для точек A, B и C\n");
	scanf("%d %d %d", &A, &B, &C);
	ab = abs(A - B);
	ac = abs(A - C);
	if(ab < ac)
	{
		printf("точка B расположена ближе к точке А, расстояние равно %d\n", ab);
	}
	if(ac < ab)
	{
		printf("точка C расположена ближе к точке А, расстояние равно %d\n", ac);
	}
	if(ac == ab)
	{
		printf("точки B и C равноудалены от точки А, расстояние равно %d\n", ab);
	}
	return 0;
}
