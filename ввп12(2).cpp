#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int start, n;
	printf("������� ������� 0, 1 ��� -1\n");
	scanf("%d", &n);
	if(n == 0)
	{
		printf("����������� ������ - �����\n");
	}
	if(n == 1)
	{
		printf("����������� ������ - �����\n");
	}
	if(n == -1)
	{
		printf("����������� ������ - ������\n");
	}
	return 0;
}
