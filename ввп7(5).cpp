#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Russian");
 float a, b, x;
 printf("введите значение a и b, учитывая, что а не равено нулю\n");
 scanf("%f %f", &a, &b);
 x = (-b) / a;
 printf("x = %f", x);
 return 0;
}
