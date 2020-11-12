#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, res;
	printf("vvdetite chislo n>0\n");
	scanf("%d", &n);
	res = 0;
	for(i = 1; i <= (2*n-1); i+=2)
	{
		res = i + res;
		printf("%d\n", res);
	}
	return 0;
}
