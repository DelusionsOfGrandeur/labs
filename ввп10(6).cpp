#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("������� ������� ������������\n");
	scanf("%d %d %d", &a, &b, &c);
	a = pow(a, 2);
	b = pow(b, 2);
	c = pow(c, 2);
	if((a+b) == c)
	{
		printf("����������� �������������");
	}
	else
	{
		printf("����������� �� �������������");
	}
	return 0;
}
