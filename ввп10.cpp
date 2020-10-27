#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	printf("введите целые значения для a и b\n");
	scanf("%d %d", &a, &b);
	if(a > 2)
	{
		printf("неравенство а > 2 справедливо\n");
	}
	else
	{
		printf("неравество а > 2 несправедливо\n");
	}
	if(b <= 3)
	{
		printf ("неравенство b <= 3 справедливо\n");
	}
	else
	{
		printf("неравенство b <= 3 несправедливо\n");
	}
	return 0;
}
