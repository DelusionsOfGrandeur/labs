#include<stdio.h>
#include<math.h>

int main()
{
	int l, i, n;
	int a[20], b[20];
	n = sizeof(a) / sizeof(int);
	printf("vvedite razmer massiva\n");
	scanf("%d", &n);
	printf("vvedite znachenie l > 0\n");
	scanf("%d", &l);
	for(i=0; i<n; i++)
	{
		printf("a[%i] : ", i);
		scanf("%i", &a[i]);
	}
	int i2 = -1, dl = 1, i3, kn = n;
	for(i=0; i<n; i++)
	{
		if(a[i-1] != a[i])
		{
			if(dl>l)
			{
				b[i2++] = 0;
				kn -= dl - 1;
			}
			else
			{
				for(i3=0; i3<dl; i3++)
				{
					b[i2++] = a[i-1];
				}
			}
			dl = 0;
		}
		dl++;
	}
	if(dl>l)
	{
		b[i2++] = 0;
		kn -= dl - 1;
	}
	else
	{
		for(i3=1; i3<=dl; i3++)
		{
			b[i2++] = a[i-1];
		}
	}
	for(i=0; i<kn; i++)
	{
		a[i] = b[i];
	}
	for(i=0; i<kn; i++)
	{
		printf("a %i : %i\n", i, a[i]);
	}
	return 0;
}
