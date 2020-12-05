#include<stdio.h>
#include<math.h>

int main()
{
	int i, n;
	int a[n]; int b[n];
	printf("vvedite razmer massivov\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv a\n");
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv b\n");
		scanf("%d", &b[i]);
	}
	for(i=0; i<n; i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
	printf("izmennenyiy massiv a: ");
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("izmennenyiy massiv b "); 
	for(i=0; i<n; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
