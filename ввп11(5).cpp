#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("введите целое число\n");
	scanf("%d", &x);
	if(x>0)
	{
		printf("введённое число положительное\n");
	}
	if(x<0)
	{
		printf("введённое число отрицательное\n");
	}
	if(x == 0)
	{
		printf("введённое число нулевое\n");
	}
	if((x%2) == 0)
	{
		printf("введённое число чётное\n");
	}
	else
	{
		printf("введённое число нечётное\n");
	}
	return 0;
}
