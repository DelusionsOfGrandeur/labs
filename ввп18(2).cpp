#include<stdio.h>
#include<math.h>

int main()
{
	int i, j, s, n;
	int a[n]; float b[n];
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv a\n");
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		s = 0;
		for(j=i; j<n; j++)
		{
			s = s + a[j];
			b[i] = s/(n-i+1);
		}
	}
	printf("massiv b: ");
	for(i=0; i<n; i++)
	{
		printf("%f ", b[i]);
	}
	return 0;
}
