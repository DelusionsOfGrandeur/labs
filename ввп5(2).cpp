#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, ac, bc, s;
	printf("������� �������� ��� ����� a �� �������� ���\n");
	scanf("%d", &a);
	printf("������� �������� ��� ����� b �� �������� ���\n");
	scanf("%d", &b);
	printf("������� �������� ��� ����� c �� �������� ���\n");
	scanf("%d", &c);
	ac = abs(a - c);
	bc = abs(b - c);
	s = ac + bc;
	printf("����� ������� ac ����� " "%d\n", ac);
	printf("����� ������� bc ����� " "%d\n", bc);
	printf("����� ���� �������� ac � bc ����� " "%d\n", s);
	return 0;
}
