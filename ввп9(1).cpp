#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	printf("������� ����� ����� ������, ��������� � ������ �����\n");
	scanf("%d", &n);
	n = (n%60);
	printf("����� ������, ��������� � ������ ��������� ������, ����� %d", n);
	return 0;
}
