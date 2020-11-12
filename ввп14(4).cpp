#include<stdio.h>
#include<math.h>

int main()
{
	float p, k, s;
	printf("vvedite procent vklada ot 0 do 25\n");
	scanf("%f", &p);
	s = 1000;
	p = p/100 + 1;
	while(s < 1100)
	{
		s = s * p;
		k++;
	}
	printf("kolichestvo mesyacev ravno %f\n", k);
	printf("itogovyi razmer vklada raven %f", s);
	return 0;
}
