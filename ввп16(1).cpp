#include<stdio.h>
#include<math.h>

int main()
{
	int i, a, dl;
	dl = 10;
	int m[dl];
	int n = sizeof(m) / sizeof(int);
	printf("vvedite znachenie n > 0\n");
	scanf("%i", &n);
	for(i=0; i<n; i++)
	{
		printf("zapolnite massiv chislami\n");
		scanf("%i", &m[i]);
	}
	for(i=0; i<n; i++)
	{
		if((m[i]%2) != 0)
		{
		printf("%d", m[i]);
	    }
	}
	return 0;
}
