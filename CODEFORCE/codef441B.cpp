#include<bits/stdc++.h>
using namespace std;
int b[100009];
int main()
{
    int n,k,m,a[100009],cont=0,x,y,z=1,c=1;
    cin>>n>>k>>m;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        x=a[i]%m;
        b[x]++;
        if(b[x]==k)
        {
            c=0;
            y=x;
        }
    }
    if(c==0)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%m==y)
            {
                if(z==1)
                {
                    cout<<"Yes"<<endl;
                    z=0;
                }
                printf("%d ",a[i]);
                cont++;
            }
            if(cont==k)
            {
                break;
            }
        }
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
