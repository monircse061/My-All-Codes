#include<bits/stdc++.h>
using namespace std;
int price[10000],weight[10000],capacity[10000],dp[1009][1009],sum=0,cap;
int t,n,g;
void fun(int c)
{
    memset(dp,-1,sizeof(dp));
    cap=c;
}
int knapsack(int i,int w)
{
    if(i==n+1)
    {
        return 0;
    }
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }
    int profit1=0,profit2=0;
    if(w+weight[i]<=cap)
    {
        //cout<<cap<<" ";
        profit1=price[i]+knapsack(i+1,w+weight[i]);
        //cout<<dp[i][w]<<" ";
    }
    profit2=knapsack(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d",&price[i],&weight[i]);
        }
        scanf("%d",&g);
        for(int i=1; i<=g; i++)
        {
            scanf("%d",&capacity[i]);
            fun(capacity[i]);
            sum+=knapsack(1,0); //cout<<
        }
        printf("%d\n",sum);
    }
}
