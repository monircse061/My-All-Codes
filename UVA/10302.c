#include<stdio.h>
int main()
{
    double  a,b,c,i,n;
    while(scanf("%lf",&n)!=EOF)
    {  a=0;
        for(i=1;i<=n;i++)
        a=a+i*i*i;
    printf("%.lf\n",a);}
    return 0;
}
