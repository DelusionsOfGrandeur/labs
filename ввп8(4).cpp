#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("������� ���������� �����\n");
	scanf("%d", &x);
	x = x/10 + (x%10)*10;
	printf("�������� ����� ����� ����� ������������ ���� ����� %d", x);
	return 0;
}
