#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("������� ������������� �����\n");
	scanf("%d", &x);
	if((x/100) == (x%100))
	{
		printf("�������� ����� �������� ��������� ����� ������� � ������ ������");
	}
	else
	{
		printf("�������� ����� �� �������� ��������� ����� ������� � ������ ������");
	}
	return 0;
}
