#include<stdio.h>
#include<math.h>

int main()
{
	int i, k = 0, n = 15; 
	int a[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5};
	int b[k]; 
	int c[k];
	n = sizeof(a) / sizeof(int);
	for(i=0; i<n-1; i++)
	{
		if(a[i] > a[i+1])
		{
			k = k + 1;
			b[k] = i;	
		}
	}
	for(i=0; i<k; i++)
	{
		printf("%d ", b[k]);
	}
	return 0;
}
