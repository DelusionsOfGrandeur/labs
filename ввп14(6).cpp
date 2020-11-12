#include<stdio.h>
#include<math.h>

int main()
{
	int n, ch0, ch1, ch2, k;
	printf("vvedite chislo n > 1, kotoroe yavlyaetsya chislom Fibonachchi\n");
	scanf("%i", &n);
	ch0 = 0;
	ch1 = 1;
	ch2 = 1;
	k = 2;
	while(ch0<n)
	{
		k++;
		ch0 = ch1 + ch2;
		ch2 = ch1;
		ch1 = ch0;
	}
	printf("poryadkoviy nomer chisla Fibonachchi raven %i", k);
	return 0;
}
