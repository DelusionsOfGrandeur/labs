#include<stdio.h>
#include<math.h>

int main()
{
	int n, k, s;
	printf("vvedite chislo n > 1\n");
	scanf("%i", &n);
	s = 0;
	k = 0;
	while(s<=n)
	{
		k++;
		s = s + k;
	}
	printf("k = %i\n",k);
	printf("summa = %i", s);
	return 0;
}
