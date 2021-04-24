#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],x=0,y,z,b,c,d,n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n>=3)
    {
        for(int i=1; i<=n; i++)
        {
            b=a[i];
            c=a[b];
            d=a[c];
            if(a[i]==a[d])
            {
                x=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(x==0)
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
