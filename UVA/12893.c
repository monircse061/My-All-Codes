#include<stdio.h>
long long fun(long long n)
{
    if(n==0)
        return 0;
    else
        return   fun(n/2)+(n%2);
}
int main()
{
    long long  n,test,i;
    scanf("%lld",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",fun(n));
    }
    return 0;
}
