#include<stdio.h>
#include<math.h>
int main()
{
    double y,x,a,b,c,s;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {s=(a+b+c)/2;
    x=s*(s-a)*(s-b)*(s-c);
    y=(4.0/3.0)*(sqrt(x));
    printf("%.3lf",y);}
    return 0;
}
