#include<stdio.h>
int main()
{
     int p=0,n,y;
    while(scanf("%d",&n)&&n>0)
    {
        while(n>0)
        {
            p=p*10+n%3;
            n=n/3;
        }
        while(p>0)
        {
            y=p%10;
            p=p/10;
            printf("%d",y);
        }
        printf("\n");
    }
    return 0;





}
