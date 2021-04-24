#include<bits/stdc++.h>
using namespace std;
#define val 100000
long long int a[val];
int main()
{
    int b=0;
    long long int t,n,m,p,i,y,l,x,c,s,z;
    //getchar();
    scanf("%lld",&t);
    while(t--)
    {
        a[val]= {0};
        i=0;//l=0;
        x=1;//j=0;
        y=1;
        z=1;
        scanf("%lld",&m);
        n=m;
        while(n>0)
        {
            p=n%2;
            n=n/2;
            a[i]=p;
            if(a[i]==0&&i!=0)
            {
                x=0;
            }
            else if(n!=0&&i!=0)
            {
                y=0;
            }
            i++;
        }
        l=i;
        if(x==0&&y==0)
        {
            for(int j=1; j<=l-2; j++)
            {
                if(a[j]==0&&a[j-1]==1)
                {
                    c=a[j];
                    a[j]=a[j-1];
                    a[j-1]=c;
                    z=0;l--;
                    sort(a,a+j);
                    reverse(a,a+j);
                    break;
                }
            }
        }
        if(z==1)
        {
            a[l]=a[l-1];
            a[l-1]=0;
            reverse(a,a+(l-1));
        }
        s=0;
        for(i=l; i>=0; i--)
        {
            s=s+(a[i]*pow(2,i));
        }
        b++;
        printf("Case %d: %lld\n",b,s);
       //getchar();
    }
    return 0;
}
