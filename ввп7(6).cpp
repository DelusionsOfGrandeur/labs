#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Russian");
 float a, b, z, c, d, e, x, y, buf;
 printf("������� �������� a, b � z ��� ������� ��������� �������\n");
 scanf("%f %f %f", &a, &b, &z);
 printf("������� �������� c, d � e ��� ������� ��������� �������\n");
 scanf("%f %f %f", &c, &d, &e);
 buf = -b*y + d*y;
 y = (e - z) / 2;
 x = z - b*y; 
 printf("x = %f\n", x);
 printf("y = %f", y);
 return 0;
}
 
