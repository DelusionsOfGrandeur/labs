#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Russian");
 float v1, v2, s, t, s2;
 printf("������� �������� ������� � ������� �����������\n");
 scanf("%f %f", &v1, &v2);
 printf("������� ��������� ���������� ����� ������������\n");
 scanf("%f", &s);
 printf("������� ����� ����������� � �������� � ������ �������\n");
 scanf("%f", &t);
 s2 = s + (v1*t) + (v2*t);
 printf("���������� ����� ������������ ������ �������� ����� ����� %f", s2);
 return 0;
}
