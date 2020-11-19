#include<stdio.h>
#include<math.h>

int main()
{
	int n, a, b, i, s;
	int m[n];
	n = sizeof(m) / sizeof(int);
	printf("vvedite celoe chislo n > 2\n");
	scanf("%d", &n);
	printf("vvedite chelye chisla a and b\n");
	scanf("%d %d", &a, &b);
	m[1] = a;
	m[2] = b;
	s = m[1] + m[2];
	for(i=3; i<n; i++)
	{
		m[i] = s;
		s = s + m[i];
	}
	for(i=1; i<n; i++)
	{
		printf("%d element massiva raven %d\n", i, m[i]);
	}
	return 0;
}
