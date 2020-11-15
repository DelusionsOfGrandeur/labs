#include<stdio.h>
#include<math.h>

	double powerA3(float a, float b)
	{
		b = a * a * a;
		printf("%f\n", b);
		return (b);
	}
	double powerA3(int i, float b)
		{
			b = i * i * i;
			printf("%f\n", b);
  			return (b);		
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
		res = powerA3(i, b);
	}
	return 0;
}
