#include<stdio.h>
int main()
{
    long long i,n1,n2,j,k,x,l,n,p,q, m;

    while(scanf("%lld%lld",&n1,&n2)!=EOF)
    {    p=n1;q=n2;m=0;
        if(n1>n2)
         {x=n2;
         n2=n1;
         n1=x;}

        for(k=n1; k<=n2; k++)
    {
        i=0;j=0;
        n=k;
        while(n>1)
        {
            if(n%2==0)
            {
                i++;
                n=n/2;
            }
            else
            {
                j++;
                n=3*n+1;
            }

        }
        if(j+i+1>m)
        m=i+j+1;}
        if(p>q)
         printf("%lld %lld %lld\n",p,q,m);
         else
            printf("%lld %lld %lld\n",n1,n2,m);
         }


    return 0;
}

