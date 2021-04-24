#include<bits/stdc++.h>
using namespace std;
int ar[10009],br[10009],partial[10009];
int main()
{

    int n,Max,res,x,Min;
    while(scanf("%d",&n)&&n!=0)
    {
        Max=-1,res=0;Min=10009;
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d",&ar[i],&br[i]);
        }
        for(int i=1; i<=n; i++)
        {
            if(ar[i]+br[i]<10001)
            {
                partial[ar[i]+br[i]+1]-=1;
                x=ar[i]+br[i];

            }
            else
            {
               //partial[[];
               x=10000;
            }
            //partial[x]-=1;
            if(Max<x)
            {
                Max=x;
            }

            if(ar[i]-br[i]<1)
            {
                partial[1]+=1;
                if(Min>1){
                    Min=1;
                }
                continue;
            }

            partial[ar[i]-br[i]]+=1;
            if(Min>ar[i]-br[i]){
                Min=ar[i]-br[i];
            }

        }
        for(int i=Min; i<=Max+1; i++)
        {
            partial[i]+=partial[i-1];
            if(res<partial[i])
            {
                res=partial[i];
            }
            //cout<<partial[i]<<" ";
        }
        for(int i=0; i<=Max+1; i++)
        {
            partial[i]=0;
        }
        printf("%d\n",res);
        //main();
    }
    return 0;
}
