#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, r, p, d;
	printf("������� �����, ������� �� ����� ����\n");
	scanf("%f %f", &a, &b);
	s = a*a + b*b;
	r = abs(a*a - b*b);
	p = (a*a) * (b*b);
	d = (a*a) / (b*b);
	printf("����� ��������� �������� ����� ����� " "%f\n", s);
	printf("�������� ��������� �������� ����� ����� " "%f\n", r);
	printf("������������ ��������� �������� ����� ����� " "%f\n", p);
	printf("������� ��������� �������� ����� ����� " "%f\n", d);
	return 0;
}
