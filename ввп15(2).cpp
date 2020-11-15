#include<stdio.h>
#include<math.h>

int sign(float x)
{
	float sign1;
	if(x<0)
	{
		sign1 = -1;
	}
    if(x==0)
    {
    	sign1 = 0;
	}
	if(x>0)
	{
		sign1 = 1;
	}
	return(sign1);
}

int main()
{
	float x, resultx;
	printf("vvedite znachenie x\n");
	scanf("%f", &x);
	resultx = sign(x);
	printf("%f\n", resultx);
	float a, b;
	printf("vvedite znacheniya a and b\n");
	scanf("%f %f", &a, &b);
	float res;
	res = sign(a) + sign(b);
	printf("%f\n", res);
	return 0;
}
