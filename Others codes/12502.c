#include<stdio.h>
int main()
{
    float a,b,c,x;int t;
    scanf("%d",&t);
    while(t--)
    {scanf("%f%f%f",&a,&b,&c);
    x=(c/(a+b))*a+(c/(a+b))*(a-b);
    printf("%.0f\n",x);}
    return 0;
}

