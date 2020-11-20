#include<stdio.h>
#include<math.h>

int main()
{
	int n, lmax, i, x;
	int a[n];
	n = sizeof(a) / sizeof(int);
	printf("vvedite n\n");
	scanf("%d", &n);
	for(i=1; i<n; i++)
	{
		printf("zapolnite massiv\n");
		scanf("%d", &a[i]);
	}
	lmax = -10000;
	for(i=1; i<n; i++)
	{
		if((a[i] > a[i+1]) && (a[i] > a[i-1]) && (a[i] > lmax))
		{
			lmax = a[i];
			x = i;
		}
	}
	printf("number of local max = %d", x);
	return 0;
}
