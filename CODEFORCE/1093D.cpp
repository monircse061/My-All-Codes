#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
#define M 998244353
vector<ll>ar[300005];
queue<int>q;
bool visit[300005];
int check=1,num[300005],one=0,two=0;
ll POW[300005];
void fun(int n)
{
    for(int i=1; i<=n; ++i)
    {
        num[i]=0;
        visit[i]=false;
        ar[i].clear();
    }
    check=1;
    one=0,two=0;
}
void dfs(int n)
{
    visit[n]=true;
    for(int i=0; i<ar[n].size(); ++i)
    {
        int b=ar[n][i];
        if(!visit[b])
        {
            if(num[n]==1)//&&!visit[b]
            {
                num[b]=2;
                two++;
            }
            else //if(!visit[b])
            {
                num[b]=1;
                one++;
            }
            if(check==0)
                break;  //cout<<n<<" "<<b<<endl;
            dfs(b);
        }
        if((num[n]+num[b])%2==0)
        {
            check=0;
            //cout<<"****";
            return;
        }

    }
    //return 1;
}
int main()
{
    int t,n,m,x,y,temp,start;
    ll sum;
    POW[0]=1;
    for(int i=1; i<=300000; ++i)
    {
        POW[i]=(POW[i-1]*2LL)%M;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        sum=1;
        for(int i=1; i<=m; ++i)
        {
            scanf("%d %d",&x,&y);
            ar[x].push_back(y);
            ar[y].push_back(x);
        }
        for(int i=1; i<=n; ++i)
        {
            if(!visit[i])
            {
                num[i]=1;
                one++;
                dfs(i);
                sum=((sum)*(POW[one]+POW[two]))%M;
            }
            if(check==0)
            {
                printf("0\n");
                break;
            }
            ///i+=(one+two-1);

            //sum=sum%M;
            one=0,two=0;
        }
        if(check==1)
        {
            printf("%lld\n",sum);//
        }
        fun(n);
    }
    return 0;
}
