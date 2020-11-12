#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float res, a, x;
	int n, i;
	printf("vvdetite chislo n>0\n");
	scanf("%d", &n);
	printf("vvdetite chislo veshestvennoe chislo a\n");
	scanf("%f", &a);
	x = 1;
	res = 1;
	for(i = 1; i<=n; i++)
	{
		x = pow(a, i)*(-1);
		res = res + x;
	}
	printf("%f\n", res);
	return 0;
}
