#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, ac, bc, p;
	printf("������� �������� ��� ����� a �� �������� ���\n");
	scanf("%d", &a);
	printf("������� �������� ��� ����� b �� �������� ���\n");
	scanf("%d", &b);
	printf("������� �������� ��� ����� c �� �������� ���, ��������, ��� ����� c ����������� ����� ������� a � b\n");
	scanf("%d", &c);
	ac = abs(a - c);
	bc = abs(b - c);
	p = ac * bc;
	printf("������������ �������� ac � bc ����� " "%d\n", p);
	return 0;
}
