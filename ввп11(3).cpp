#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, ab, ac;
	printf("������� �������� ��� ����� A, B � C\n");
	scanf("%d %d %d", &A, &B, &C);
	ab = abs(A - B);
	ac = abs(A - C);
	if(ab < ac)
	{
		printf("����� B ����������� ����� � ����� �, ���������� ����� %d\n", ab);
	}
	if(ac < ab)
	{
		printf("����� C ����������� ����� � ����� �, ���������� ����� %d\n", ac);
	}
	if(ac == ab)
	{
		printf("����� B � C ������������ �� ����� �, ���������� ����� %d\n", ab);
	}
	return 0;
}
