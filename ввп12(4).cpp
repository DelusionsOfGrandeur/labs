#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("������� ����� ����� � ��������� 100-999\n");
	scanf("%d", &x);
	switch (x/100)
	{
		case 1:
			printf("��� ");
			break;
		case 2:
			printf("������ ");
			break;
		case 3:
			printf("������ ");
			break;
		case 4:
			printf("��������� ");
			break;
		case 5:
			printf("������� ");
			break;
		case 6:
			printf("�������� ");
			break;
		case 7:
			printf("������� ");
			break;
		case 8:
			printf("��������� ");
			break;
		case 9:
			printf("���������");
			break;
	}
	if (((x%100) > 9) & ((x%100) < 20))
	{
		switch((x%100))
		{
			case 10:
				printf("������ ");
				break;
			case 11:
				printf("����������� ");
				break;
			case 12:
				printf("���������� ");
				break;
			case 13:
				printf("���������� ");
				break;
			case 14:
				printf("������������ ");
				break;
			case 15:
				printf("���������� ");
				break;
			case 16:
				printf("����������� ");
				break;
			case 17:
				printf("���������� ");
				break;
			case 18:
				printf("������������ ");
				break;
			case 19:
				printf("������������ ");
				break;
		}	
	}
	else
	{
		switch((x%100)/10)
		{
			case 2:
				printf("�������� ");
				break;
			case 3:
				printf("�������� ");
				break;
			case 4:
				printf("����� ");
				break;
			case 5:
				printf("��������� ");
				break;
			case 6:
				printf("���������� ");
				break;
			case 7:
				printf("��������� ");
				break;
			case 8:
				printf("����������� ");
				break;
			case 9:
				printf("��������� ");
				break;
		}
		switch((x%10))
		{
			case 1:
				printf("����");
				break;
			case 2:
				printf("���");
				break;
			case 3:
				printf("���");
				break;
			case 4:
				printf("������");
				break;
			case 5:
				printf("����");
				break;
			case 6:
				printf("�����");
				break;
			case 7:
				printf("����");
				break;
			case 8:
				printf("������");
				break;
			case 9:
				printf("������");
				break;
		}
	}
    return 0;
}

	
