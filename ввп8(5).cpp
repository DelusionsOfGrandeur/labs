#include <stdio.h>
#include <math.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Russian");
	int x, buf, res;
	printf("������� ���������� �����\n");
	scanf("%d", &x);
	buf = x;
	x = x%100;
	res = (x%10)*10 + (x/10)*100 + buf/100;
	printf("���������� ����� ����� %d",res);
	return 0;
}
