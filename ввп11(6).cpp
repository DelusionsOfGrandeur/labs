#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("введите число, лежащее в диапозоне 1-999\n");
	scanf("%d", &x);
	if ((x%2) == 0)
	{
		printf("введённое число чётное\n");
	}
	else
	{
		printf("введённое число нечётное\n");
	}
	if((x>=1)and(x<10))
	{
		printf("введённое число однозначное\n");
	}
	if((x>=10)and(x<100))
	{
		printf("введённое число двузначное\n");
	}
	if((x>=100)and(x<1000))
	{
		printf("введённое число трёхзначное\n");
	}
	return 0;
}
	
