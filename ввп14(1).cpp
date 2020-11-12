#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, i, j;
	printf("vvedite celye polojitelnie chisla a and b, pomnite, chto a < b\n");
	scanf("%i %i", &a, &b);
	i = a;
	for(i; i<=b; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%i", i);
		}
	}
	return 0;
}
