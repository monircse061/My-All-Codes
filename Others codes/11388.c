#include<stdio.h>
int main()
{
    int a,b,c=-1,t;
    scanf("%d",&t);
    while(t--)
    {scanf("%d%d",&a,&b);
    if(a<=b&&b%a==0)
        printf("%d %d\n",a,b);
    else
        printf("%d\n",c);}
    return 0;
}
