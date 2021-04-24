#include<stdio.h>
int main()
{
    int i,j,k,d,p,n,a,b;
    while(scanf("%d",&n)&&n!=0)
    {
        p=0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                a=i;
                b=j;
                while(b%a!=0)
                {
                    k=b%a;
                    d=a;
                    b=d;
                    a=k;
                }

                p=p+a;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
