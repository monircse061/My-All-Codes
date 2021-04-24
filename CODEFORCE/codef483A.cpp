#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    int b[10000],n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==1)
    {
    }
    else
    {
        int l=n-1;
        while(1)
        {
            int j1=0,y=0;
            for(int i=0; i<n; i++)
            {
                if(y<a[i]&&a[i]!=-1)
                {
                    y=a[i];
                    j1=i;
                }
            }
            a[j1]=-1;
            l--;
            if(l==0)
            {
                break;
            }
            int j=0,x=10000000;
            for(int i=0; i<n; i++)
            {
                if(x>a[i]&&a[i]!=-1)
                {
                    x=a[i];
                    j=i;
                }
            }
            a[j]=-1;
            l--;
            if(l==0)
            {
                break;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=-1)
        {
            printf("%d",a[i]);
            break;
        }
    }
    return 0;
}

