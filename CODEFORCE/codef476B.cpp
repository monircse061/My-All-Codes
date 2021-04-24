#include<bits/stdc++.h>
using namespace std;
int v[105][105];
int main()
{
    string s[100000];

    int n,x,sum=0,y,a,k,c1,j1,c,re=0,p,q;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        sum=0;
        c=1;
        for(int j=0; j<n; j++)
        {
            if(s[i][j]=='.'&&c==1)
            {
                c=0;
                c1=j;
            }
            if(s[i][j]=='.')
            {
                sum+=1;
            }
            if(sum==k)
            {
                x=sum;
                j1=c1;
                while(x!=0)
                {
                    v[i][j1]+=1;
                    j1++;
                    x--;
                }
                sum--;
                c1++;
            }
            if(s[i][j]=='#')
            {
                sum=0;
                c=1;
            }
        }
    }
    sum=0;
    y=0;
    for(int i=0; i<n; i++)
    {
        sum=0;
        c=1;
        for(int j=0; j<n; j++)
        {
            if(s[j][i]=='.'&&c==1)
            {
                c=0;
                c1=j;
            }
            if(s[j][i]=='.')
            {
                sum+=1;
            }
            if(sum==k)
            {
                x=sum;
                j1=c1;
                while(x!=0)
                {
                    v[j1][i]+=1;
                    j1++;
                    x--;
                }
                sum--;
                c1++;
            }
            if(s[j][i]=='#')
            {
                sum=0;
                c=1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(re<v[i][j])
            {
                re=v[i][j];
                p=i;
                q=j;
            }
        }

    }
    cout<<p+1<<" "<<q+1;
    return 0;
}
