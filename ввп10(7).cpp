#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("������� ������� ������������\n");
	scanf("%d %d %d", &a, &b, &c);
	if((a+b>c)and(b+c>a)and(c+a>b))
	{
		printf("����������� ����������");
	}
	else
	{
		printf("����������� �� ����������");
	}
	return 0;
}
