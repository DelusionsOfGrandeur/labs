#include<stdio.h>
#include<math.h>

	double powerA3(float a, float b)
	{
		b = a * a * a;
		printf("%f\n", b);
		return (b);
	}
	double powerI3(int i, float x)
		{
			x = i * i * i;
			printf("%f\n", x);
  			return (x);		
		}
	int main()
{
	float a, b, voz1, res;
	int i;
	printf("vvedite znachenie a \n");
	scanf("%f", &a);
	voz1 = powerA3(a, b);
	for(i=2; i<7; i++)
	{
		res = powerI3(i, b);
	}
	return 0;
}
