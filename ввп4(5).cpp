#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, r, p, d;
	printf("������� �����, ������� �� ����� ����\n");
	scanf("%f %f", &a, &b);
	s = abs(a) + abs(b);
	r = abs(a) - abs(b);
	p = abs(a) * abs(b);
	d = abs(a) / abs(b);
	printf("����� ������� �������� ����� ����� " "%f\n", s);
	printf("�������� ������� �������� ����� ����� " "%f\n", r);
	printf("������������ ������� �������� ����� ����� " "%f\n", p);
	printf("������� ������� �������� ����� ����� " "%f\n", d);
	return 0;
}
	
