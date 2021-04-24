#include<stdio.h>
int main()
{
    long long int p=0,N,y;
    while(scanf("%lld",&N)&&N>0)
    {
        while(N>0)
        {
            p=p*10+N%3;
            N=N/3;
        }
        while(p>0)
        {
            y=p%10;
            p=p/10;
            printf("%lld",y);
        }
        printf("\n");
    }
    return 0;





}
