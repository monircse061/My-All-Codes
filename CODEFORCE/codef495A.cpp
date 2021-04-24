#include<bits/stdc++.h>
using namespace std;
map<int,int>m1;
int main()
{
    long long int n,m,a[1000],cont=0,l,num,num1;
    scanf("%I64d %I64d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
        m1[a[i]]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            if(i!=n){
            l=a[i]+m;
            num=abs(l-a[i+1]);
            //cout<<num<<" ";
            if(num>=m&&m1[l]==0)
            {
                cont++;
                m1[l]++;
                //cout<<l<<" ";
            }}
            if(i!=1)
            {
                l=a[i]-m;
                num=abs(l-a[i-1]);
                if(num>=m&&m1[l]==0)
                {
                    cont++;
                    m1[l]++;
                    //cout<<l<<" ";
                }
            }
        }
        else
        {
            l=a[i]-m;
            num=abs(l-a[i-1]);
            if(num>=m&&m1[l]==0)
            {
                cont++;
                m1[l]++;
                //cout<<l<<" ";
            }
            if(i!=n)
            {
                l=a[i]+m;
                num=abs(l-a[i+1]);
                //cout<<num<<" ";
                if(num>=m&&m1[l]==0)
                {
                    cont++;
                    m1[l]++;
                    //cout<<l<<" ";
                }
            }
        }
    }
    printf("%I64d",cont+2);
    return 0;
}
