#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s;
	printf("������� �����\n");
	scanf("%f %f", &a, &b);
	s = (a + b) / 2;
	printf("������� �������������� �����" "%f", s);
	return 0;
}
