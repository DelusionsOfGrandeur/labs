#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float p, n;
	int i;
	printf("vvdetite chislo n>0\n");
	scanf("%f", &n);
	p = 1;
	for(i = 0; i <= n; i++)
	{
		p = (1 + 0.1*i) * p;
	}
	printf("result %f\n", p);
	return 0;
}
