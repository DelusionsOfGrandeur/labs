#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	printf("������� ����� �������� ��� a � b\n");
	scanf("%d %d", &a, &b);
	if(a > 2)
	{
		printf("����������� � > 2 �����������\n");
	}
	else
	{
		printf("���������� � > 2 �������������\n");
	}
	if(b <= 3)
	{
		printf ("����������� b <= 3 �����������\n");
	}
	else
	{
		printf("����������� b <= 3 �������������\n");
	}
	return 0;
}
