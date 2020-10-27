#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("введите целые значения для a, b и c\n");
	scanf("%d %d %d", &a, &b, &c);
	if(b > a)
	{
		if(b < c)
		{
			printf("неравество a < b < c справедливо\n");
		}
		else
		{
			printf("неравенство a < b < c несправедливо\n");
		}
	}
	else
	{
		printf("неравенство a < b < c несправедливо\n");
	}
	return 0;
}
