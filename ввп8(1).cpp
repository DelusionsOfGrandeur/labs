#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	double x;
	printf("������� ������ ����� � ������\n");
	scanf("%d", &x);
	x = x / 1024;
	printf("������ ����� � ���������� ����� %d", x);
	return 0;
}
