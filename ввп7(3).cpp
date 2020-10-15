#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Russian");
 float a, x, kg, y, kg2;
 printf("введите кол-во килограмм конфет и их цену\n");
 scanf("%f %f", &kg, &x);
 kg = kg / x;
 printf("1 килограмм конфет стоит %f\n", kg);
 printf("введите y килограмм конфет\n");
 scanf("%f", &y);
 kg = kg * y;
 printf("y килограмм конфет стоит %f\n", kg);
 return 0;
}
 
 
 
