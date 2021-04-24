#include<stdio.h>
#define pf printf
#define sf scanf
#define val 90000
int main()
{
    int i,n,m,b,x,c,j,l,y,z,t,p;int a[val],s[val];
    while(sf("%d",&n)!=EOF)
    {
        l=n;i=0;x=1;
    while(n>0)
    {
        m=n%2;
        a[i]=m;
        n=n/2;
        i++;
    }
    for(j=1;j<l;j++)
    {
        z=j;
        b=0;
        while(z>0)
        {
            y=z%2;
            s[b]=y;
            z=z/2;
            b++;
        }
        while(b<i)
            {s[b]=0;
            b++;}

        b=0;
        while(b<i)
        {
            if(a[b]==s[b])
                break;
            else if(b==i-1&&a[b]!=s[b])
            {
                x=0;
                c=j;
            }
            b++;
        }
    }
    if(x==0)
        {pf("%d\n",c);
        }
    else if(x==1)
        {pf("0\n");
        }}
    return 0;
}
