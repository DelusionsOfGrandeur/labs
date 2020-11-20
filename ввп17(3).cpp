#include<stdio.h>
#include<math.h>

int main()
{
	int n, min, i;
	int a[n];
	n = sizeof(a) / sizeof(int);
	printf("vvedite n\n");
	scanf("%d", &n);
	for(i=1; i<n; i++)
	{
		printf("zapolnite massiv\n");
		scanf("%d", &a[i]);
	}
	min = 10000;
	for(i=1; i<n; i++)
	{
		if(((i%2) == 0) && (a[i] < min))
		{
			min = a[i];
		}
	}
	printf("min element s chetnym nomerom %d", min);
	return 0;
}
