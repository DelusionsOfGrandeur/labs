#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, k=0;
	int a[n];
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	printf("zapolnite massiv\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1; i<n; i++)
	{
		if(a[k] != a[i])
		{
			k++;
			a[k] = a[i];
		}
	}
	k++;
	printf("razmer massiva posle udaleniya sosedniyh odinakoviyh elementov %d\n", k);
	for(i=0; i<k; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
