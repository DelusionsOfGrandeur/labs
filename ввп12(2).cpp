#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int start, n;
	printf("введите команду 0, 1 или -1\n");
	scanf("%d", &n);
	if(n == 0)
	{
		printf("направление робота - север\n");
	}
	if(n == 1)
	{
		printf("направление робота - запад\n");
	}
	if(n == -1)
	{
		printf("направление робота - восток\n");
	}
	return 0;
}
