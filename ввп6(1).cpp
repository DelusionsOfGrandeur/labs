#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, buf;
	printf("������� �������� �\n");
	scanf("%d", &a);
	printf("������� �������� b\n");
	scanf("%d", &b);
	buf = a;
	a = b;
	b = buf;
	printf("a = " "%d\n", a);
	printf("b = " "%d\n", b);
	return 0;
}
