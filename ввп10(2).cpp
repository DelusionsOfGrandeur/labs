#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("������� ����� �������� ��� a, b � c\n");
	scanf("%d %d %d", &a, &b, &c);
	if(b > a)
	{
		if(b < c)
		{
			printf("���������� a < b < c �����������\n");
		}
		else
		{
			printf("����������� a < b < c �������������\n");
		}
	}
	else
	{
		printf("����������� a < b < c �������������\n");
	}
	return 0;
}
