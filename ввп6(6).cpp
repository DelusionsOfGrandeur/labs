#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, buf, res;
	printf("введите значение a\n");
	scanf("%d", &a);
	buf = pow(a, 2);
	res = pow(a, 2)*pow(a, 2)*pow(a, 2)*buf;
	printf("a^8 = " "%d\n", res);
	return 0;
}
