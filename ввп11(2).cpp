#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, s;
	printf("������� �������� ��� a, b � c\n");
	scanf("%d %d %d", &a, &b, &c);
	if((c <= a)and(c <= b))
	{
		s = a + b;
		printf("����� ���� ���������� �� �������� ����� ����� %d", s);
	}
	else
	{
		if((b <= a)and(b <= c))
		{
			s = a + c;
			printf("����� ���� ���������� �� �������� ����� ����� %d", s);
		}
		else
		{
			s = b + c;
			printf("����� ���� ���������� �� �������� ����� ����� %d", s);
		}
	}
	return 0;
}
