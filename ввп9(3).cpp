#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, res;
	printf("������� ����� �, ������� � ��������� 1-365\n");
	scanf("%d", &k);
	printf("������� ����� ����� N, ������� � ��������� 1-7\n");
	scanf("%d", &n);
	res = ((k + n - 2)%7) + 1;
	printf("����� ��� ������ ����� %d", res);
	return 0;
}
