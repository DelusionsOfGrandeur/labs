#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Russian");
	float a, b, p, s;
	printf("������� ������� ��������������\n");
	scanf("%f %f", &a, &b );
	s = a * b;
	p = 2 * (a + b);
	printf("������� �����\n " "%f\n", s);
	printf("�������� �����\n" "%f\n", p);
	return 0;
}
