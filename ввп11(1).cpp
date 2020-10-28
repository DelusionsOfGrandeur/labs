#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	printf("введите целые значения для а и b\n");
	scanf("%d %d", &a, &b);
	if (a != b)
	{
		if(a>b)
		{
			b = a;
			printf("a = %d\n" "b = %d\n", a, b);
		}
		else
		{
			a = b;
			printf("a = %d\n" "b = %d\n", a, b);
		}
	}
	else
	{
		a = 0;
		b = 0;
		printf("a = %d\n" "b = %d\n", a, b);
	}
	return 0;
}
