#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	int a, b, k;
	printf("������� ����� ������� �, ��������, ��� ����� � ������ ����� b\n");
	scanf("%d", &a);
	printf("������� ����� ������� b, ��������, ��� ����� � ������ ����� b\n");
	scanf("%d", &b);
	k = a / b;
	printf("���������� �������� b, ����������� �� ������� �, ��� ���������, ����� %d", k);
	return 0;
}
