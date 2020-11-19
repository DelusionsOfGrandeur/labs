#include<stdio.h>
#include<math.h>

int main()
{
	int n, z, i;
	float a, d;
	int m[n];
	n = sizeof(m) / sizeof(int);
	printf("vvedite perviy chlen geometricheskoy progressii\n");
	scanf("%f", &a);
	printf("vvedite znamenatel geometricheskoy progressii\n");
	scanf("%f", &d);
	printf("vvedite celoe n > 1\n");
	scanf("%d", &n);
	z = 1;
	for(i=0; i<n; i++)
	{
		m[i] = a * z;
		z = z * d;
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n", m[i]);
	}
	return 0;
}
