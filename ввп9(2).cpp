#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int K;
	printf("������� �������� �, ������� � ��������� 1-365\n");
	scanf("%d", &K);
	K = (K%7);
	printf("����� ��� ������ ����� %d", K);
	return 0;
}
