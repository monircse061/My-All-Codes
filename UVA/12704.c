#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,a,b,r;int t;
    double h,l;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf%lf%lf",&a,&b,&r);
        if(a==0&&b==0)
        {
            h=r;
            l=r;
        }
        else

        {
            x=(a*a)+(b*b);
            y=sqrt(x);
            h=r+y;
            l=r-y;
        }
        printf("%.2lf %.2lf\n",l,h);
    }
    return 0;
}
