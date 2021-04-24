#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[100000],x,y=0;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(t!=0)
        {
            t=t-(86400-a[i]);
        }
        if(t<=0)
        {
            y=i+1;
            printf("%d\n",y);
            break;
        }
    }

    return 0;
}
