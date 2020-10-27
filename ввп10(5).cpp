#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("введите четырёхзначное число\n");
	scanf("%d", &x);
	if((x/100) == (x%100))
	{
		printf("введённое число читается одинаково слева направо и справа налево");
	}
	else
	{
		printf("введённое число не читается одинаково слева направо и справа налево");
	}
	return 0;
}
