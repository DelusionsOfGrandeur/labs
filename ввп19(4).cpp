#include<stdio.h>
#include<math.h>

int main()
{
	int n, i;
	int a[n];
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	printf("zapolnite massiv\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i] < 0)
		{
			a[i+1] = 0;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
