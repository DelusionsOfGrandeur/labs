#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	printf("������� ���������� ����� (x; y)\n");
	scanf("%d %d", &x, &y);
	if((x>0)and(y>0))
	{
		printf("����� ����� � 1 ��������");
	}
	if((x<0)and(y>0))
	{
		printf("����� ����� �� 2 ��������");
	}
	if((x<0)and(y<0))
	{
		printf("����� ����� � 3 ��������");
	}
	if((x>0)and(y<0))
	{
		printf("����� ����� � 4 ��������");
	}
	return 0;
}
