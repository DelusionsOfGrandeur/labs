#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, buf;
	printf("введите значение à\n");
	scanf("%d", &a);
	printf("введите значение b\n");
	scanf("%d", &b);
	printf("введите значение c\n");
	scanf("%d", &c);
	buf = a;
	a = c;
	c = buf;
	buf = a;
	a = b;
	b = buf;
	printf("a = " "%d\n", a);
	printf("b = " "%d\n", b);
	printf("c = " "%d\n", c);
	return 0;
}
	
	
