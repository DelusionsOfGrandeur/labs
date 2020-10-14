#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, buf, buf2, res;
	printf("введите значение a\n");
	scanf("%d", &a);
	buf = pow(a, 2);
	buf2 = a * buf;
	buf2 = buf * buf2;
	buf = buf2 * buf2;
	buf = buf * buf2;
	res = buf;
	printf("a^15 = " "%d\n", res);
	return 0;
}
	
