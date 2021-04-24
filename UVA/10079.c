#include<stdio.h>
int main()
{
    int a,b,n;
    while(scanf("%d",&n)&&n>=0)
    {
        b=n*(n+1)/2;
        printf("%d\n",b+1);

    }
    return 0;
}
