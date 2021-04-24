#include<bits/stdc++.h>
using namespace std;
int a[100009];
int main()
{
    int n,sum,sum1,c,b=1000000,x,l,y;
    while(scanf("%d",&n)!=EOF){
    l=n;sum=0;sum1=0;x=1;y=1;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
       if(abs(1-a[i])>abs(b-a[i])&&y==1)
        {
            l=i;
            y=0;

        }
        else if(abs(1-a[i])<abs(b-a[i])&&x==1)
        {
            sum+=abs(1-a[i]);x=0;        }
    }
    if(y==0){
       sum1+=abs(b-a[n-1]);
    }
    for(int i=0; i<l-1; i++)
    {

        sum+=abs(a[i]-a[i+1]);
    }
    for(int i=n-1; i>l; i--)
    {

        sum1+=abs(a[i]-a[i-1]);
    }
    if(sum>sum1)
    c=(sum+sum1)-sum1;
    else
        c=(sum+sum1)-sum;
    cout<<c<<endl;}
    return 0;
}

