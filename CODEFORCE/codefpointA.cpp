#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[108],n,d,l,x=1,y;
    scanf("%d %d",&n,&d);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    if(n==1){x=0;}
    for(int i=0; i<n-1; i++)
    {
        ////x=0;
        l=0;
        for(int j=i+1;j<n ; j++)
        {
            if(a[j]-a[i]>d)
            {break;

            }
            l++;
        }
        if(i==0){y=l;}
       if(y<l){y=l;}

        }
    if(x==0)
        cout<<0<<endl;
    else
    cout<<n-y-1<<endl;
       ///for(int i=0;i<n;i++){cout<<a[i]<<" ";if(i==35)cout<<endl;}
    return 0;

 }
