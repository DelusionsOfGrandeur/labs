#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("введите двузначное число\n");
	scanf("%d", &x);
	x = x/10 + (x%10)*10;
	printf("введённое ранее число после перестановки цифр равно %d", x);
	return 0;
}
