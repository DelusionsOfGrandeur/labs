#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int year, stolet;
	printf("������� ����� ����, ������� �������� ����� ������������� ������\n");
	scanf("%d", &year);
	stolet = (year-1)/100 + 1;
	printf("�������� ����� %d\n", stolet);
}
