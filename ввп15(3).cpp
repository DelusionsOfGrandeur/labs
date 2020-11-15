#include<stdio.h>
#include<math.h>

float rings(float r1, float r2)
{
	float s;
	s = 3.14 * (pow(r1, 2) - pow(r2, 2));
	return(s);
}

int main()
{
	float r1, r2, s;
	int i;
	for(i=1; i<=3; i++)
	{
		printf("vvedite znachenie r1 and r2, uchityvaya, chto r1 > r2\n");
	    scanf("%f %f", &r1, &r2);
	    s = rings(r1, r2);
	    printf("s = %.2f\n", s);
	}
	return 0;
}
