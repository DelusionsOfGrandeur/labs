#include <stdio.h>
#include <math.h>
 
int main()
{
    float a[10][2];
    int n, i, amax = 0;
    float r, rmax;
    printf("vvedite n ");
    scanf("%i",&n);
    for (i=0; i<n; ++i){
        printf("%i tochka:\n",i+1);
        printf("  x : ");
        scanf("%f",&a[i][0]);
        printf("  y : ");
        scanf("%f",&a[i][1]);
    }
    for (i=0; i<n; ++i){
        if (a[i][0]<0 && a[i][1]>0){
            r= sqrt(pow(a[i][0],2)+pow(a[i][1],2));
            if (r>rmax || i==0) {
                rmax=r;
                amax=i;
            }
        }
    }
    printf("\ntochka  %i :\n x: %f\n y: %f\n",amax+1,a[amax][0],a[amax][1]);
    return 0;
}
