#include<stdio.h>

int main()
{
    long long i,j,n,p,x,m,y;
    while(scanf("%lld",&n)==1 && n>1)
    {
        x=n;

        p=0;

        for(i=2; i*i<=n; i++)
        {


            if(n%i==0)
                { printf("%lld is not prime.\n",n);
                break;}
        }
        if(i*i>n){
            while(n>0)
            {
                p=p*10+n%10;
                n=n/10;
            }

            for(j=2; j*j<=p; j++)
            {
                if(p%j==0)
                {
                    break;
                }
            }
            if(j*j>p &&x!=p)
                    printf("%lld is emirp.\n",x);
            else
                printf("%lld is prime.\n",x);

        }


    }

    return 0;
}
