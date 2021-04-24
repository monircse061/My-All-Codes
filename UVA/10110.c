#include<stdio.h>
#include<math.h>
int main()
{
    long long  n,i,j,x;
    while(scanf("%lld",&n)&&n!=0)
    {x=sqrt(n);

    if(n==x*x)
        printf("yes\n");

    else
        printf("no\n");}
    return 0;
}
