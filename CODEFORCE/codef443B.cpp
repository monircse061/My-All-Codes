#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum,k,a[10000],y,x,cont=0;
    cin>>n>>k;
    y=n;
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=0;; i++)
    {
        if(a[i]>a[i+1]&&i==0)
        {
            x=a[i];
            a[y]=a[i+1];
            y++;
            i++;
            cont++;
            continue;
        }
        else if(i==0)
        {
            x=a[i+1];
            a[y]=a[i];
            cont++;
            i++;
            continue;
        }
        if(x>a[i])
        {
            cont++;

            if(cont==k||i==n)
            {
                cout<<x<<endl;
                break;
            }
            a[y]=a[i];
            y++;
        }
        else
        {cont=0;
        a[y]=x;
            x=a[i];
            y++;
            cont++;
        }
    }
    return 0;
}
