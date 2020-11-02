#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("ââĺäčňĺ öĺëîĺ ÷čńëî â äčŕďîçîíĺ 100-999\n");
	scanf("%d", &x);
	switch (x/100)
	{
		case 1:
			printf("сто ");
			break;
		case 2:
			printf("двести ");
			break;
		case 3:
			printf("триста ");
			break;
		case 4:
			printf("четыреста ");
			break;
		case 5:
			printf("пятьсот ");
			break;
		case 6:
			printf("шестьсот ");
			break;
		case 7:
			printf("семьсот ");
			break;
		case 8:
			printf("восемьсот ");
			break;
		case 9:
			printf("девтьсот ");
			break;
	}
	if (((x%100) > 9) & ((x%100) < 20))
	{
		switch((x%100))
		{
			case 10:
				printf("десять ");
				break;
			case 11:
				printf("одиннадцать ");
				break;
			case 12:
				printf("двенадцать ");
				break;
			case 13:
				printf("тринадцать ");
				break;
			case 14:
				printf("четырнадцать ");
				break;
			case 15:
				printf("пятнадцать ");
				break;
			case 16:
				printf("шестнадцать ");
				break;
			case 17:
				printf("семнадцать ");
				break;
			case 18:
				printf("восемнадцать ");
				break;
			case 19:
				printf("девятнадцать ");
				break;
		}	
	}
	else
	{
		switch((x%100)/10)
		{
			case 2:
				printf("двадцать ");
				break;
			case 3:
				printf("тридцать ");
				break;
			case 4:
				printf("сорок ");
				break;
			case 5:
				printf("пятьдесят ");
				break;
			case 6:
				printf("шестьдесят ");
				break;
			case 7:
				printf("семьдесят ");
				break;
			case 8:
				printf("восемьдесят ");
				break;
			case 9:
				printf("девяносто ");
				break;
		}
		switch((x%10))
		{
			case 1:
				printf("один");
				break;
			case 2:
				printf("два");
				break;
			case 3:
				printf("три");
				break;
			case 4:
				printf("четыре");
				break;
			case 5:
				printf("пять");
				break;
			case 6:
				printf("шесть");
				break;
			case 7:
				printf("семь");
				break;
			case 8:
				printf("восемь");
				break;
			case 9:
				printf("девять");
				break;
		}
	}
    return 0;
}

	
