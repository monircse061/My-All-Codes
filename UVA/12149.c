#include<stdio.h>
int main()
{
    double i,j,k,n;
    while(scanf("%lf",&n)&&n!=0)
    {j=0;
    for(i=n;i>=1;i--)
    {j=j+i*i;}
    printf("%.lf\n",j);}
    return 0;
}
