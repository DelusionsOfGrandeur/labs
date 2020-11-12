#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, res;
	printf("vvedite celye polojitelnye chisla a and b\n");
	scanf("%i %i", &a, &b);
	while(a!=b)
	{
		if(a>b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	if(a=b)
	{
		res = a;
	    printf("nod raven %i", res);
    }
	return 0;
}
