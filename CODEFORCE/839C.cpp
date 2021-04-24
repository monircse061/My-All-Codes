#include<bits/stdc++.h>
using namespace std;
vector<int>v[100009];
#define ll long long int
bool visit[100009];
double ar[100009];
double dfs(int n)
{
    visit[n]=true;
    double sum=0.0,length=0;
    if(v[n].size()==1&&n!=1)
    {
        return 0;
    }
    for(int i=0; i<v[n].size(); i++)
    {
        int b=v[n][i];
        if(!visit[b])
        {
            sum=sum+dfs(b);//(double)
            length++;
        }
    }
    //if(n==1)
    {
        //cout<<sum<<" "<<v[n].size()<<"{} ";//(v[n].size())
        return (double)((double)sum/(double)length)+1.0;//(v[n].size())
    }
    //else
    {
       // return (double)((double)sum/(double)length)+1.0;//(v[n].size()-1)
    }
}
int main()
{
    int n,x,y;
    scanf("%d",&n);
    if(n==1)
    {
        printf("0");
    }
    else
    {
        for(int i=1; i<=n-1; i++)
        {
            scanf("%d %d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        printf("%f",dfs(1));
    }
    return 0;
}
