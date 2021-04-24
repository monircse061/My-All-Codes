#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[1000][1000];
void ini()
{
    for(int i=1; i<=20; i++)
    {
        for(int j=1; j<=20; j++)
        {
            if(i==j)
                continue;
            ar[i][j]=INT_MAX;
        }
    }
}
void floyd()
{
    for(int k=1; k<=20; k++)
    {
        for(int i=1; i<=20; i++)
        {
            for(int j=1; j<=20; j++)
            {
                if(ar[i][j]>(ar[i][k]+ar[k][j]))
                {
                    ar[i][j]=ar[i][k]+ar[k][j];
                }
            }
        }
    }
}
int main()
{
    int test=0;
    while(1)
    {
        ini();
        int Case,n,x;
        ll Start,End;
        for(int i=1; i<=19; i++)
        {
            int ret=scanf("%d",&n);
            if(ret == EOF) return 0;
            for(int j=1; j<=n; j++)
            {
                scanf("%d",&x);
                ar[i][x]=1;
                ar[x][i]=1;
            }
        }
        floyd();
        test++;
        printf("Test Set #%d\n",test);
        scanf("%d",&Case);
        for(int i=1; i<=Case; i++)
        {
            scanf("%lld %lld",&Start,&End);
            printf("%2lld to %2lld: %lld\n",Start,End,ar[Start][End]);
        }
        printf("\n");
    }
    return 0;
}
