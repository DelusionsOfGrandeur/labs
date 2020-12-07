#include<stdio.h>
#include<math.h>

int main()
{
	int i, n, min, max, x , y;
	int a[n];
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv\n");
		scanf("%d", &a[i]);
	}
	min = a[0];
	max = a[0];
	for(i=0; i<n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			x = i;
		}
	}
	for(i=0; i<n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
			y = i;
		}
	}
	for(i=0; i<n; i++)
	{
		if(y - i == 1)
		{
			a[i] = 0;
		}
		if(i - x == 1)
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
