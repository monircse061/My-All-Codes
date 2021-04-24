#include<bits/stdc++.h>
using namespace std;
int ar[10000];
int main()
{
    int n,r,l,left=1,right,heat=0,y,val,pos;
    scanf("%d %d",&n,&val);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=1; i<=n; i++)
    {
        pos=0;
        for(int j=i; j<=i+val-1; j++)
        {
            if(ar[j]==1)
            {
                pos=j;
            }
        }
        if(pos==0)
        {
            for(int i1=i-1; i1>=i-val+1&&i1>0; i1--)
            {
                if(ar[i1]==1)
                {
                    pos=i1;
                    break;
                }
            }
            if(pos==0)
            {
                printf("-1");
                return 0;
            }
            else
            {
                heat++;
                i=pos+val-1;
            }
        }
        else
        {
            i=pos+val-1;
            heat++;
        }
    }
    printf("%d",heat);
    return 0;
}
