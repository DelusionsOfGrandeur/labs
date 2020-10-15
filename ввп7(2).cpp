#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Russian");
 float a, grad, pi;
 printf("введите значение угла а в радианах, 0 < a < 2*pi\n");
 scanf("%f", &a);
 pi = 3.14;
 grad = 180 * a / pi;
 printf("угол а в градусах равен %f\n", grad);
return 0;
}
