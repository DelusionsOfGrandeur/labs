#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, k, ost, zan;
	printf("������� ����� ������������� ����� a, b � c\n");
	scanf("%d %d %d", &a, &b, &c);
	k = (a/c) * (b/c);
	zan = k * pow(c, 2);
	ost = a * b - zan;
	printf("���������� ���������, ����������� �� �������������� ����� %d\n", k);
	printf("������� ��������� ����� �������������� ����� %d", ost);
	return 0;
}
