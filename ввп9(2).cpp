#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int K;
	printf("введите значение К, лежащее в диапозоне 1-365\n");
	scanf("%d", &K);
	K = (K%7);
	printf("номер дня недели равен %d", K);
	return 0;
}
