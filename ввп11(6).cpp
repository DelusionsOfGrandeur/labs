#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("������� �����, ������� � ��������� 1-999\n");
	scanf("%d", &x);
	if ((x%2) == 0)
	{
		printf("�������� ����� ������\n");
	}
	else
	{
		printf("�������� ����� ��������\n");
	}
	if((x>=1)and(x<10))
	{
		printf("�������� ����� �����������\n");
	}
	if((x>=10)and(x<100))
	{
		printf("�������� ����� ����������\n");
	}
	if((x>=100)and(x<1000))
	{
		printf("�������� ����� ����������\n");
	}
	return 0;
}
	
