#include<stdio.h>
#define sf scanf
#define pf printf
int main()
{
    long long  i=0,j,n,m,a,b,c,k,x=1,y;
    char s[1000000];
    while(sf("%lld %lld",&n,&m)!=EOF)
    {
        while((n==0&&m==0)||(n!=0&&m==0))
        {
            if(1)
            {
                pf("1\n");
                break;
            }
        }
        s[0]=1;
        j=1;
        c=0;
        for(i=1,b=n; i<=m; i++,b--)
        {
            for(k=0; k<j; k++)
            {
                x=s[k]*b+c;
                s[k]=x%10;
                c=x/10;
            }
            while(c>0)
            {
                s[j]=c%10;
                c=c/10;
                j++;
            }
        }
        for(i=0; i<m; i++)
        {
            if(s[i]!=0)
            {
                y=s[i];
                pf("%lld\n",y);
                break;
            }
        }
    }



    /*scanf("%lld %lld",&m,&n);
    for(j=m-n+1;j<=m;j++){
        x=x*j;
        while(x%10==0){
            x=x/10;


        }
    }
    printf("%lld",x%10);*/
    return 0;
}
