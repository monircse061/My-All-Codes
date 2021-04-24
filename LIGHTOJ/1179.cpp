#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,res,t,j=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);res=0;
        for(int i=1; i<=n; i++)
        {
            res=(res+m)%i;
        }
        j++;
        printf("Case %d: %d\n",j,res+1);
    }
    return 0;
}
/*********

int josephus(int n,m){
       if(n==1)
        return 0;
       return (josephus(n-1,m)+m-1)%n+1;

}
********/
