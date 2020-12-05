#include<stdio.h>
#include<math.h>

int main()
{
	int i, j, n, buf;
	int a[n];
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv a\n");
		scanf("%d", &a[i]);
	}
	for(i=0; i<n - 1; i++)
	{
		for(j=0; j<n - 1 - i; j++)
		{
			if(a[j]>a[j+1])
			{
				buf = a[j];
				a[j] = a[j+1];
				a[j+1] = buf;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
