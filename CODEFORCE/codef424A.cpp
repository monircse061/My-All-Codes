#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],x=0,y=0,z=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1]&&x==0)
        {
            continue;
        }
        else if(a[i]==a[i+1]&&y==0)
        {
            x=1;
            continue;
        }
        else if(a[i]>a[i+1])
        {
            y=1;
            x=1;
            continue;
        }
        else
        {
            z=1;
            break;
        }
    }
    if(z==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
