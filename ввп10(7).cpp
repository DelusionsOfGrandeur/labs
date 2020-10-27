#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("введите стороны треугольника\n");
	scanf("%d %d %d", &a, &b, &c);
	if((a+b>c)and(b+c>a)and(c+a>b))
	{
		printf("треугольник существует");
	}
	else
	{
		printf("треугольник не существует");
	}
	return 0;
}
