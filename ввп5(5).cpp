#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, x3, y3, p, s, ab, bc, ac, h, pp;
	printf("������� ���������� ������ ������� ������������\n");
	scanf("%d %d", &x1, &y1);
	printf("������� ���������� ������ ������� ������������\n");
	scanf("%d %d", &x2, &y2);
	printf("������� ���������� ������� ������� ������������\n");
	scanf("%d %d", &x3, &y3);
	ab = sqrt( (x2 - x1)*(x2 - x1) + (y2-y1)*(y2 - y1) );
	bc = sqrt( (x3 - x2)*(x3 - x2) + (y3-y2)*(y3 - y2) );
	ac = sqrt( (x1 - x3)*(x1 - x3) + (y1-y3)*(y1 - y3) );
	p = ab + bc + ac;
	pp = p / 2;
	h = (2*sqrt(pp * (pp - ab)*(pp - bc)*(pp - ac))) / ac;
	s = (ac * h) / 2;
	printf("�������� ������������ ����� " "%d\n", p);
	printf("������� ������������ ����� " "%d\n", s);
	return 0; 
}
