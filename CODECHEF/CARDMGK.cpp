#include<bits/stdc++.h>
using namespace std;
int ar[100009];
int main()
{
    int t,n,y,z,x,ck;
    //int s[10000],s1[10000],s2[10000],s3[10000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        y=1;
        z=1;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ar[i]);

            if(i==1)
            {
                x=ar[i];
                continue;
            }
            if(x<=ar[i]&&y==1)
            {
                x=ar[i];
                z=0;
            }
            else if(x>ar[i]&&z==1)
            {
                x=ar[i];
                y=0;
            }
            else
            {
                y=0,z=0;
            }
        }
        x=ar[1];
        if(y==1||n==2)
        {
            printf("YES\n");
        }
        else if(z==1)
        {
            printf("NO\n");
        }
        else if(x<=ar[2])
        {
            y=1,z=1;
            ck=1;
            for( int i=2; i<=n; i++)
            {
                if(x<=ar[i]&&y<=2)
                {
                    x=ar[i];
                }
                else if(x>ar[i]&&ar[1]>=ar[i])
                {
                    x=ar[i];
                    y++;
                }
                else
                {
                    y=3;
                    break;
                }
            }
            if(ar[1]<ar[n])y=3;
            if(y>2)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        else
        {
            y=1,z=1;
            ck=1;
            for(int i=2; i<=n; i++)
            {
                if(x>ar[i]&&y<=1)
                {
                    x=ar[i];
                    y--;
                }
                else if(x<=ar[i]&&ar[1]>=ar[i])
                {
                    x=ar[i];
                    //y++;
                }
                else{y=-1;break;}
            }
            if(ar[1]<ar[n])y=-1;
            if(y<0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}
