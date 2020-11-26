#include<stdio.h>
#include<math.h>

	double powerA3(float a, float b)
	{
		b = a * a * a;
		return (b);
	}
	
	int main()
{
	float a, b, res;
	int i;
	for(i=2; i<7; i++)
	{
		res = powerA3(i, b);
		printf("%i v 3 stepeni %f\n", i, res);
	}
	return 0;
}
