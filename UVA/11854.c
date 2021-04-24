#include<stdio.h>
int main()
{
    double a,b,c,d;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {if(a==0&&b==0&&c==0)
        break;
        else if(a*a+b*b==c*c)
        printf("right\n");
    else
        printf("wrong\n");}
    return 0;
}
