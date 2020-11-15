#include<stdio.h>
#include<math.h>

float fact2(int n)
{
	float f2, m;
    f2 = 1;
    for(n; n>1; n = n - 2)
    {
    	f2 = f2 * n;
	}
	return(f2);
}

int main()
{
	int i, n, res;
	for(i=1; i<=3; i++)
	{
		printf("\nvvedite znachenie n > 0\n");
	    scanf("%d", &n);
	    res = fact2(n);
	    printf("dvoynoy factorial vvedennogo chisla raven %d\n", res);
	}
	return 0;
}
