#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("введите целое положительное число\n");
	scanf("%d", &x);
	if((x > 9) and (x < 100))
	{
		if((x%2) == 0)
		{
			printf("введённое число чётное и двузначное");
		}
		else
		{
			printf("введённое число нечётное");
		}
	}
	else
	{
		printf("введённое число недвузначное");
	}
	return 0;
}
