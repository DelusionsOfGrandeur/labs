#include<stdio.h>
#include<math.h>

int main()
{
	int i, n, k = 0;
	int a[n];
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv\n");
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i] == a[i+1])
		{
			a[i] = 0;
			a[i+1] = 0;
		}
	}
	for(i=0; i<n; i++)
	{
		if(a[i] != 0)
		{
			printf("%d ", a[i]);
			k = k + 1;
		}
	}
	printf("\nrazmer massiva %d", k);
	return 0;
}
