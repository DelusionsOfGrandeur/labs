#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Russian");
 float v1, v2, s, t, s2;
 printf("введите скорость первого и второго автомобилей\n");
 scanf("%f %f", &v1, &v2);
 printf("введите начальное расстояние между автомобилями\n");
 scanf("%f", &s);
 printf("введите время автомобилей в движении в разные стороны\n");
 scanf("%f", &t);
 s2 = s + (v1*t) + (v2*t);
 printf("расстояние между автомобилями спустя заданное время равно %f", s2);
 return 0;
}
