#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("������� ����� ������������� �����\n");
	scanf("%d", &x);
	if((x > 9) and (x < 100))
	{
		if((x%2) == 0)
		{
			printf("�������� ����� ������ � ����������");
		}
		else
		{
			printf("�������� ����� ��������");
		}
	}
	else
	{
		printf("�������� ����� ������������");
	}
	return 0;
}
