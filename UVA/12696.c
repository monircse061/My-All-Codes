#include<stdio.h>
int main()
{
    double a,b,c,d;int t,j=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

        if((d<=7.00)&&((a+b+c<=125.00)||(a<=56.00&&b<=45.00&&c<=25.00)))
        {
            j++;
            printf("1\n");

        }
        else
        {
            printf("0\n");
        }
    }
    printf("%d",j);
    return 0;
}
