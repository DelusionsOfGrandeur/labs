#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	printf("������� ���\n");
	scanf("%d", &year);
	switch((year%10))
	{
		case 1:
			printf("������ ��� ");
			break;
		case 2:
			printf("������� ��� ");
			break;
		case 3:
			printf("����� ��� ");
			break;
		case 4:
			printf("����� ��� ");
			break;
		case 5:
			printf("������ ��� ");
			break;				
	}
	switch(((year+8)%12))
	{
		case 1:
			printf("�����");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�����");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("����");
			break;
		case 7:
			printf("������");
			break;
		case 8:
			printf("����");
			break;
		case 9:
			printf("��������");
			break;
		case 10:
			printf("������");
			break;
		case 11:
			printf("������");
			break;
		case 12:
			printf("������");
			break;											
	}
	return 0;
}
