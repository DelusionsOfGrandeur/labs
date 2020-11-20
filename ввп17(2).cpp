#include<stdio.h>
#include<math.h>

int main()
{
	int i, n, raz;
	int m[n];
	printf("vvedite n\n");
	scanf("%d", &n);
	for(i=1; i<n; i++)
	{
		printf("zapolnite massiv\n");
		scanf("%d", &m[i]);
	}
	raz = m[2] - m[1];
	for(i=2; i<n; i++)
	{
		if(raz != (m[i] - m[i-1]))
		{
			raz = 0;
		}
	}
	if(raz == 0)
	{
		printf("arifmeticheskaya progressiya otsutstvuet");
	}
	else
	{
		printf("raznost arifmeticheskoy progressii %d", raz);
	}
	return 0;
}
