#include<stdio.h>
int main()
{
    long long int m,n,i,j,l,o,q;
    long long  int k,p,d,a;
    while(scanf("%lld %lld",&m,&n)==2&&m!=0&&m>=n)
    {
        if(m==0&&n==0)
            break;
        q=m-n;
        o=1;
        k=1;
        p=1;
        for(i=m; i>1; i--)
        {
            k=k*i;
        }
        for(j=q; j>1; j--)
        {
            o=o*j;
        }
        for(l=n; l>1; l--)
        {
            p=p*l;
        }
        a=o*p;
        d=k/a;
        printf("%lld things taken %lld at a time is %lld exactly.\n",m,n,d);
    }
    return 0;
}
