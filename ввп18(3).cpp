#include<stdio.h>
#include<math.h>

int main()
{
	int i, n, x;
	int a[n];
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv a\n");
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		if((a[i]%2) != 0)
		{
			x = a[i];
		}
	}
	for(i=0; i<n; i++)
	{
		if((a[i]%2) != 0)
		{
			a[i] = a[i] + x;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
