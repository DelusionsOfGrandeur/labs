#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Russian");
float a, rad, pi;
printf("������� �������� ���� � � ��������, 0 < a < 360\n");
scanf("%f", &a);
pi = 3.14;
rad = a * pi / 180;
printf("���� � � �������� ����� %f\n", rad);
return 0;
}
