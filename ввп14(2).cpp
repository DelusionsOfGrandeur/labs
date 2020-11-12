#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	printf("vvedite celye polojitelnie chisla a and b, pomnite, chto a > b\n");
	scanf("%i %i", &a, &b);
	while(a>=b)
	{
		a = a - b;
	}
	printf("nezanyataya dlina otrezka a ravna %i", a);
	return 0;
}
