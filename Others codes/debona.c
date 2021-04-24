#include<stdio.h>
int main()
{
    char d[1000];
    long long  a,b,c,e,i,j,n,m,s,t;
    scanf("%lld",&t);
    while(t--)
    {   c=0;m=0;s=0;
        scanf("%lld",&e);
        for(i=0; i<e; i++)
        {
            scanf("%s",d);
            scanf("%lld%lld",&a,&b);
            s=s+a;
            n=b-s;
            if(n>0)
            {
                m=m+n*10;
            }
            else
                c=c+n*10;
        }
        printf("%lld\n",m+c);
    }
    return 0;
}
