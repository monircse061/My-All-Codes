#include<stdio.h>
int main()
{
    int x,n,p,y,i;
    while(scanf("%d",&n)!=EOF)
    {
        x=n;
        p=0;
        while(n>0)
        {
            p=p*10+n%10;
            n=n/10;
        }
        printf("%d\n",x*2);
        y=1;
        if(x==1)
            y=0;
        for(i=2; i*i<=x; i++)
        {
            if(x%i==0)
                y=0;
        }
        while(p==x&&y==1)
            if(1)
            {
                return 0;
            }
    }
    return 0;
}
