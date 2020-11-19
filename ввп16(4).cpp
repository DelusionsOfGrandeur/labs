#include<stdio.h>
#include<math.h>

int main()
{
	int n, i;
	int a[n];
	n = sizeof(a) / sizeof(int);
	printf("vvedite chislo n\n");
	scanf("%i", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv chislami\n");
		scanf("%i", &a[i]);
	}
	i = 1;
	while(i<=(n/2)+1)
	{
		printf("%d element raven %d\n", i, a[i]);
		if(i<=n/2)
		{
			printf("%d element raven %d\n", i+1, a[i+1]);
	    }
	    if(n-i>n/2)
	    {
	    	printf("%d element raven %d\n", n-i+1, a[n-i+1]);
		}
		if(n-i-1>n/2)
		{
			printf("%d element raven %d\n", n-i, a[n-i]);
		}
		i = i+2;
	}
	return 0;
}
