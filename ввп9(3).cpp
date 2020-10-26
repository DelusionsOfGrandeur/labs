#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, res;
	printf("введите число К, лежащее в диапозоне 1-365\n");
	scanf("%d", &k);
	printf("введите целое число N, лежащее в диапозоне 1-7\n");
	scanf("%d", &n);
	res = ((k + n - 2)%7) + 1;
	printf("номер дня недели равен %d", res);
	return 0;
}
