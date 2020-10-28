#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	printf("введите координаты точки (x; y)\n");
	scanf("%d %d", &x, &y);
	if((x>0)and(y>0))
	{
		printf("точка лежит в 1 четверти");
	}
	if((x<0)and(y>0))
	{
		printf("точка лежит во 2 четверти");
	}
	if((x<0)and(y<0))
	{
		printf("точка лежит в 3 четверти");
	}
	if((x>0)and(y<0))
	{
		printf("точка лежит в 4 четверти");
	}
	return 0;
}
