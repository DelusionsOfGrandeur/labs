#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	printf("введите год\n");
	scanf("%d", &year);
	switch((year%10))
	{
		case 1:
			printf("зелёный год ");
			break;
		case 2:
			printf("красный год ");
			break;
		case 3:
			printf("жёлтый год ");
			break;
		case 4:
			printf("белый год ");
			break;
		case 5:
			printf("чёрный год ");
			break;				
	}
	switch(((year+8)%12))
	{
		case 1:
			printf("крысы");
			break;
		case 2:
			printf("коровы");
			break;
		case 3:
			printf("тигра");
			break;
		case 4:
			printf("зайца");
			break;
		case 5:
			printf("дракона");
			break;
		case 6:
			printf("змеи");
			break;
		case 7:
			printf("лошади");
			break;
		case 8:
			printf("овцы");
			break;
		case 9:
			printf("обезьяны");
			break;
		case 10:
			printf("курицы");
			break;
		case 11:
			printf("собаки");
			break;
		case 12:
			printf("свиньи");
			break;											
	}
	return 0;
}
