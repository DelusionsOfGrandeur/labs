#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, x, y, j;
	int a[n];
	n = sizeof(a) / sizeof(int);
	printf("vvedite n\n");
	scanf("%d", &n);
	for(i=1; i<n; i++)
	{
		printf("zapolnite massiv, uchityvaya, chto v nem doljno byt rovno dva odinakovyh elementa\n");
		scanf("%d", &a[i]);
	}
	for(i=1; i<n; i++)
	{
		for(j=1; j < i-1; j++)
		{
			if(a[i] == a[j])
		    {
			    x = j;
			    y = i;
		    }
		}
	}
	printf("nomera odynakobyh elementov %d and %d", x, y);
	return 0;
}
