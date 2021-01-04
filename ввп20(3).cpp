#include<stdio.h>
#include<math.h>

int main()
{
	int k, i, n, dl, nk = 1, bks = 1, lks =(k==1?1:0), bes;
	int a[20], b[20];
	n = sizeof(a) / sizeof(int);
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	printf("vvedite znachenie k > 0\n");
	scanf("%d", &k);
	for(i=0; i<n; i++)
	{
		printf("a[%i] : ", i);
		scanf("%i", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i-1] != a[i])
		{
			nk++;
			if(nk == k)
			{
				bks = i;
				bes = i;
			}
		}
		if(nk == k)
		{
			lks++;
		}
	}
	int i2 = -1;
	for(i=0; i<bks; i++)
	{
		b[i2++] = a[i];
	}
	for(i=bes; i<n; i++)
	{
		b[i2++] = a[i];
	}
	for(i=bks+lks; i<bes; i++)
	{
		b[i2++] = a[i];
	}
	for(i=bks; i<bks+lks; i++)
	{
		b[i2++] = a[i];
	}
	for(i=0; i<n; i++)
	{
		a[i] = b[i];
	}
	for(i=0; i<n; i++)
	{
		printf("a %i : %i\n", i, a[i]);
	}
	return 0;
}
