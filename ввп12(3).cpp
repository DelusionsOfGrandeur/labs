#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("������� ����� ����� � ��������� 10-40\n");
	scanf("%d", &x);
	if((x>9)and(x<41))
	{
		printf("%d ", x);
		printf("������� �������");
	}
	return 0;
}
