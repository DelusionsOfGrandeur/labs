#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Russian");
 float a, grad, pi;
 printf("������� �������� ���� � � ��������, 0 < a < 360\n");
 scanf("%f", &a);
 pi = 3.14;
 grad = 180 * a / pi;
 printf("���� � � �������� ����� %f\n", grad);
return 0;
}
