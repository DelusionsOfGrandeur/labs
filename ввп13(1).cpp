#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, i;
	printf("vvedite cenu 1 kg konfet\n");
	scanf("%f", &x);
	i = 0.1;
	while(i<1.1)
	{
		printf("%f kg stoit %f\n", i, x*i);
		i = i + 0.1;
	}
	return 0;
}
