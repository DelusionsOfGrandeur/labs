#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Russian");
 float a, x, kg, y, kg2;
 printf("������� ���-�� ��������� ������ � �� ����\n");
 scanf("%f %f", &kg, &x);
 kg = kg / x;
 printf("1 ��������� ������ ����� %f\n", kg);
 printf("������� y ��������� ������\n");
 scanf("%f", &y);
 kg = kg * y;
 printf("y ��������� ������ ����� %f\n", kg);
 return 0;
}
 
 
 
