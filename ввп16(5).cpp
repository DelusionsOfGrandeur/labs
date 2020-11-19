#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, k;
	int a[n];
	n = sizeof(a) / sizeof(int);
	printf("vvedite chislo n\n");
	scanf("%i", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv chislami\n");
		scanf("%i", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(((i%2)!=0) && (i<n))
		{
			printf("%d ", a[i]);
		}
	}
	for(i=0; i<n; i++)
	{
		if(((i%2)==0) && (i<n))
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}
