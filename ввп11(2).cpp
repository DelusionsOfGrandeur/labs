#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, s;
	printf("введите значения для a, b и c\n");
	scanf("%d %d %d", &a, &b, &c);
	if((c <= a)and(c <= b))
	{
		s = a + b;
		printf("сумма двух наибольших из введённых чисел равна %d", s);
	}
	else
	{
		if((b <= a)and(b <= c))
		{
			s = a + c;
			printf("сумма двух наибольших из введённых чисел равна %d", s);
		}
		else
		{
			s = b + c;
			printf("сумма двух наибольших из введённых чисел равна %d", s);
		}
	}
	return 0;
}
