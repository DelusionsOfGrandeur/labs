#include<stdio.h>
#include<math.h>

int main()
{
	int i, n, max, min, x, y;
	int a[n];
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv a\n");
		scanf("%d", &a[i]);
	}
	max = -10000;
	min = 10000;
	for(i=0; i<n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			x = i;
		}
		if(a[i] < min)
		{
			min = a[i];
			y = i;
		}
	}
	for(i=0; i<n; i++)
	{
		if(((i>y) && (i<x)) or ((i<y) && (i>x)))
		{
			a[i] = 0;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
