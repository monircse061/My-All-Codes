#include<bits/stdc++.h>
using namespace std;
int c[1000][1000];
int main()
{
    char a[509][509];
    int h,w,n,n1,n2,cont=0,n3,n4;
    scanf("%d %d",&h,&w);
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            n1=i;
            n3=i;
            n4=j;
            n2=j;
            int x=1;
            if(c[n1][n2]!=-1&&c[n1][n2]!=-2)
            {
                c[n1][n2]++;
                while(1)
                {
                    if(a[n1][n2]=='D')
                    {
                        n1++;
                    }
                    else if(a[n1][n2]=='L')
                    {
                        n2--;
                    }
                    else if(a[n1][n2]=='U')
                    {
                        n1--;
                    }
                    else if(a[n1][n2]=='R')
                    {
                        n2++;
                    }
                    if(n1<=h&&n2<=w&&c[n1][n2]!=-1&&c[n1][n2]!=-2)
                    {
                        c[n1][n2]++;
                    }
                    if(c[n1][n2]>1||c[n1][n2]==-1)
                    {
                        x=0;
                        break;
                    }
                    else if(n1>h||n2>w||n1<=0||n2<=0||c[n1][n2]==-2)
                    {
                        break;
                    }
                }
                for(int b=n3; b<=h; b++)
                {
                    for(int d=n4; d<=w; d++)
                    {
                        if(c[b][d]!=-1&&c[b][d]!=-2)
                        {
                            if(x==0)
                            {
                                if(c[b][d]!=0&&c[b][d]!=-1&&c[b][d]!=-2)
                                {
                                    c[b][d]=-1;
                                }
                            }
                            else
                            {if(c[b][d]!=0&&c[b][d]!=-2&&c[b][d]!=-1)
                                {
                                    cont++;
                                    c[b][d]=-2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}
