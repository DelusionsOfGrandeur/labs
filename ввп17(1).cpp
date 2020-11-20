#include<stdio.h>
#include<math.h>

int main()
{
	int i, kol, n, k, l, sum;
	float res;
	int a[n];
	n = sizeof(a) / sizeof(int);
	printf("vvedite n\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("zapolnite massiv\n");
		scanf("%d", &a[i]);
	}
	printf("vvedite k and l, uchityvaya, chto 1<= k <= l <= n\n");
	scanf("%d %d", &k, &l);
	sum = 0;
	for(i=k; i<=l; i++)
	{
		sum = a[i] + sum;
	}
	kol = l-k+1;
	res = sum/kol;
	printf("%f", res);
	return 0;
}
