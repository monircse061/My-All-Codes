#include<stdio.h>
#include<math.h>
#define P acos(-1)
int main()
{
    double r,a,b,x,y,i,l;
    int t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf",&l);
        x=(l*6)/10;
        y=l/5;
        a=P*y*y;
        b=x*l;
        printf("%.2f %.2f\n",a,b-a);
    }
    return 0;
}
