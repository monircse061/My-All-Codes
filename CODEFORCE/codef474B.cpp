#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k1,k2,a[10000],b[10000],sum=0,d;
    scanf("%d %d %d",&n,&k1,&k2);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<b[i])
        {
            d=b[i]-a[i];
            if(k1<=d)
            {
                a[i]+=k1;
                k1-=d;
            }
            else
            {
                a[i]+=d;
                k1-=d;
            }
            if(a[i]<b[i])
            {
                d=b[i]-a[i];
                if(k2<=d)
                {
                    b[i]-=k2;
                    k2-=d;
                }
                else
                {
                    b[i]-=d;
                    k2-=d;
                }
            }
        }
        if(k1<0)
        {
            k1=0;
        }
        if(k2<0)
        {
            k2=0;
        }
        if(b[i]<a[i])
        {
            d=a[i]-b[i];
            if(k2<=d)
            {
                b[i]+=k2;
                k2-=d;
            }
            else
            {
                b[i]+=d;
                k2-=d;
            }
            if(b[i]<a[i])
            {
                d=a[i]-b[i];
                if(k1<=d)
                {
                    a[i]-=k1;
                    k1-=d;
                }
                else
                {
                    a[i]-=d;
                    k1-=d;
                }
            }
        }
        if(k1<0)
        {
            k1=0;
        }
        if(k2<0)
        {
            k2=0;
        }
        if(k2==0&&k1==0)
        {
            break;
        }

    }
    if(k1>0)a[0]+=k1;
    if(k2>0)b[0]+=k2;
    for(int i=0; i<n; i++)
    {
        sum+=(a[i]-b[i])*(a[i]-b[i]);
        //cout<<a[i]<<" "<<b[i]<<endl;
    }
    cout<<sum;
    return 0;
}
