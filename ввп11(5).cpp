#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("������� ����� �����\n");
	scanf("%d", &x);
	if(x>0)
	{
		printf("�������� ����� �������������\n");
	}
	if(x<0)
	{
		printf("�������� ����� �������������\n");
	}
	if(x == 0)
	{
		printf("�������� ����� �������\n");
	}
	if((x%2) == 0)
	{
		printf("�������� ����� ������\n");
	}
	else
	{
		printf("�������� ����� ��������\n");
	}
	return 0;
}
