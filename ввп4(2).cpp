#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Russian");
	float d, l, p;
	p = 3.14;
	printf("������� ������� ����������\n");
	scanf("%f", &d);
	l = p * d;
	printf("����� ���������� ����� " "%f", l);
	return 0;
}

