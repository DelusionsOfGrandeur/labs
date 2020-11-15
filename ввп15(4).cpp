#include<stdio.h>
#include<math.h>

int quarter(float x, float y)
{
	if((x>0) and (y>0))
	{
		printf("tochka nahoditsya v 1 chetverti\n");
	}
	if((x<0) and (y>0))
	{
		printf("tochka nahoditsya vo 2 chetverti\n");
	}
	if((x<0) and (y<0))
	{
		printf("tochka nahoditsya v 3 chetverti\n");
	}
	if((x>0) and (y<0))
	{
		printf("tochka nahoditsya v 4 chetverti\n");
	}
}

int main()
{
	float x, y, res;
	int i;
	for(i=1; i<=3; i++)
	{
		printf("vvedite koordinaty tochki po osi x and po osi y\n");
		scanf("%f %f", &x, &y);
		res = quarter(x, y);
		printf("\n", res);
	}
	return 0;
}
