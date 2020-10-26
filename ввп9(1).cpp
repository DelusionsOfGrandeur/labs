#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	printf("введите целое число секунд, прошедших с начала суток\n");
	scanf("%d", &n);
	n = (n%60);
	printf("число секунд, прошедших с начала последней минуты, равно %d", n);
	return 0;
}
