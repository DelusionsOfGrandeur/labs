#include <stdio.h>
#include <math.h>
 
int main()
{
    float a[10][2];
    int n, i, i2, i3, t1, t2, t3;
    float p, pmax = 0;
    printf("vvedite n > 2 ");
    scanf("%i",&n);
    for (i=0; i<n; ++i){
        printf("%i tochka:\n",i+1);
        printf("  x : ");
        scanf("%f",&a[i][0]);
        printf("  y : ");
        scanf("%f",&a[i][1]);
    }
    for(i=1; i<=n; i++)
    {
    	for(i2=i+1; i2<=n; i2++)
    	{
    		for(i3=i2+1; i3<=n; i3++)
    		{
    			p = 0;
    			p = p + sqrt(pow(a[i][1]-a[i2][1], 2)+pow(a[i][2]-a[i2][2], 2));
    			p = p + sqrt(pow(a[i2][1]-a[i3][1], 2)+pow(a[i2][2]-a[i3][2], 2));
    			p = p + sqrt(pow(a[i][1]-a[i3][1], 2)+pow[i][2]-a[i3][2], 2));
    			if(pmax<p)
    			{
    				pmax = p;
    				t1 = i;
    				t2 = i2;
    				t3 = i3;
				}
			}
		}
	}
	printf("max perimetr %f\n", pmax);
	printf("1 tochka:\n%f\n%f\n", a[t1][1], a[t1][2]);
	printf("2 tochka:\n%f\n%f\n", a[t2][1], a[t2][2]);
	printf("3 tochka:\n%f\n%f\n", a[t3][1], a[t3][2]);
	return 0;
}
