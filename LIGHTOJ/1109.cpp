#include<bits/stdc++.h>
using namespace std;
#define val 10001
vector<int>v[1000];
int a[val],c=0,chan[1005];
int limit=sqrt(1000+1);
void prime()
{
    v[1].push_back(1);
    for(int i=2; i<=limit; i++)
    {
        if(a[i]==0)
        {
            for(int j=2; j*i<=1000; j++)
            {
                a[i*j]=1;
            }
        }
    }
    for(int i=2; i<1000; i++)
    {
        if(a[i]==0)v[2].push_back(i);
    }
    int j=4,cnt;
    while(j<=1000)
    {
        if(a[j]==1)
        {
            cnt=1;
            for(int i=2; i<=j; i++)
            {
                if(j%i==0)
                {
                    cnt++;
                }
            }
            v[cnt].push_back(j);
        }
        j++;
    }
    int pot,m;
    for(int i=1; i<=32; i++)
    {
        m=v[i].size();
        for(int j=0; j<(v[i].size())/2; j++)
        {
            m--;
            pot=v[i][j];
            v[i][j]=v[i][m];
            v[i][m]=pot;
        }
    }
    {
        int l=1;
        for(int i=1; i<=32; i++)
        {
            for(int j=0; j<v[i].size(); j++)
            {
                chan[l]=v[i][j];
                l++;
            }
        }
    }
}
int main()
{
    prime();
    int num,t,i=0;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&num);i++;
    cout<<"Case "<<i<<": "<<chan[num]<<endl;
    }
    return 0;
}
