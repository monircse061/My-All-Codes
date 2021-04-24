#include<bits/stdc++.h>
using namespace std;
int n,g=0,c=0,rest=0;
int main()
{
int a[10000];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            rest++;
            g=0,c=0;
        }
        else if(a[i]==1)
        {
            if(c==1)
            {
                rest++;
                g=0,c=0;
            }
            else
            {
                c=1,g=0;
            }
        }
        else if(a[i]==2)
        {
            if(g==1)
            {
                rest++;
                g=0,c=0;
            }
            else
            {
                c=0,g=1;
            }
        }
        else if(a[i]==3)
        {
            int j;
            if(g==0&&c==0)
            {
                if(i==n)
                {
                    break;
                }
                else
                {
                    j=i;
                    while(a[j]==3&&j<=n)
                    {
                        j++;
                    }
                    i=j;
                    //cout<<i;
                    if(a[i]==0&&i<=n)
                    {
                        rest++;
                        g=0,c=0;
                    }
                    else if(a[i]==1)
                    {
                        c=1;
                        g=0;
                    }
                    else if(a[i]==2)
                    {
                        g=1;
                        c=0;
                    }
                }
            }
            else if(g==0)
            {
                g=1;
                c=0;
            }
            else if(c==0)
            {
                c=1;
                g=0;
            }
        }
    }
    printf("%d",rest);
    return 0;
}
