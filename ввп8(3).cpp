#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	int a, b, k, x;
	printf("������� ����� ������� �, ��������, ��� ����� � ������ ����� b\n");
	scanf("%d", &a);
	printf("������� ����� ������� b, ��������, ��� ����� � ������ ����� b\n");
	scanf("%d", &b);
	x = a / b;
	k = a - x*b;
	printf("����� ��������� ����� ������� � ����� %d", k);
	return 0;
}
