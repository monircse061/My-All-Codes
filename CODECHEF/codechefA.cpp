#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b[10000],s1,s2,x,y,z,t,n,m,p;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);s1=0;s2=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        s1=s1+a[i];
        if(i==0)
        {
            x=a[i];
            continue;
        }
        if(x<a[i])
        {
            x=a[i];
        }
    }
    m=s1-x;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
        s2=s2+b[i];
        if(i==0)
        {
            y=b[i];
            continue;
        }
        if(y<b[i])
        {
            y=b[i];
        }
    }
    p=s2-y;
    if(m<p)
    {
        cout<<"Alice"<<endl;
    }
    else if(m>p)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Draw"<<endl;
    }}
    return 0;
}
