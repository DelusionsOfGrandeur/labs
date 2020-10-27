#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, s, d, e;
	printf("введите трёхзначное число\n");
	scanf("%d", &x);
	e = (x%10);
	d = ((x/10)%10);
	s = x/100;
	if ((s < d)and(d < e))
	{
		printf("цифры числа расположены в порядке возрастания");
	}
	if((e<d)and(d<s))
	{
		printf("цифры числа расположены в порядке убывания");
	}
	return 0;
}
