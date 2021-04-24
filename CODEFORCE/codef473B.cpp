#include<bits/stdc++.h>
using namespace std;
string s[1000000];
long long int cont[1000000];
int main()
{
    string s1;
    map<string,int>mp;
    long long int k,m,n,sum=0,a,b,c,min1,x,d;
    scanf("%I64d %I64d %I64d",&k,&m,&n);
    for(int i=1; i<=k; i++)
    {
        cin>>s[i];
    }
    for(int i=1; i<=k; i++)
    {
        cin>>x;
        mp[s[i]]=x;
    }

    for(int i=1; i<=m; i++)
    {
        cin>>c;
        for(int j=1; j<=c; j++)
        {
            cin>>d;
            if(j==1)
            {
                min1=mp[s[d]];

            }
            if(min1>mp[s[d]]&&j!=1)
            {
                min1=mp[s[d]];
            }
            mp[s[d]]=i;
        }
        cont[i]=min1;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>s1;
        sum+=cont[mp[s1]];
    }
    cout<<sum;
    return 0;
}
