#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	double x;
	printf("укажите размер файла в байтах\n");
	scanf("%d", &x);
	x = x / 1024;
	printf("размер файла в килобайтах равен %d", x);
	return 0;
}
